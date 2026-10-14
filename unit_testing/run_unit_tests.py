#!/usr/bin/env python3
"""Run OpenMAUVe unit and verification simulations with metric reporting."""

from __future__ import annotations

import argparse
import csv
import datetime as dt
import json
import re
import shutil
import subprocess
import sys
from dataclasses import dataclass, field
from pathlib import Path
from typing import Any


ROOT = Path(__file__).resolve().parents[1]
PACKAGE_FILE = ROOT / "OpenMAUVe" / "package.mo"
UNIT_TEST_DIR = ROOT / "OpenMAUVe" / "UnitTesting"
TEST_ROOT = ROOT / "unit_testing"
RUNS_DIR = TEST_ROOT / "runs"
RESULTS_DIR = TEST_ROOT / "results"
BASELINE_FILE = TEST_ROOT / "baseline_results.json"
LATEST_JSON = TEST_ROOT / "latest_results.json"
LATEST_TXT = TEST_ROOT / "latest_results.txt"
LATEST_CSV = TEST_ROOT / "latest_results.csv"

CSV_COLUMNS = (
    "TEST_NAME",
    "LATEST_RUN_PASSED",
    "LATEST_RUN_TIME",
    "LATEST_RUN_PASS_PERCENTAGE",
    "LATEST_RUN_COMMIT",
    "BASELINE_RUN_PASSED",
    "BASELINE_RUN_TIME",
    "BASELINE_RUN_PASS_PERCENTAGE",
    "BASELINE_RUN_COMMIT",
)

VARIABLE_FILTER = "time|.*testPassed.*|.*RelErr.*|.*MaxRelErr.*|.*relativeError.*"
DEFAULT_TIMEOUT_SECONDS = 45 * 60
# A metric counts as unchanged when |latest - baseline| is within
# max(REGRESSION_ABSOLUTE_TOLERANCE, REGRESSION_RELATIVE_TOLERANCE * magnitude);
# run-to-run solver noise is of the order of 1e-8 relative.
REGRESSION_RELATIVE_TOLERANCE = 1.0e-6
REGRESSION_ABSOLUTE_TOLERANCE = 1.0e-9
TEST_PASSED_VALUE_THRESHOLD = 0.9
REQUIRED_TEST_PASSED_PERCENTAGE = 95.0
SIMULATION_ONLY_SOURCE_PREFIXES = ("OpenMAUVe/UnitTesting/TestVehicles/",)


@dataclass
class ModelRun:
    name: str
    model: str
    suite: str
    source: str
    elapsed_seconds: float = 0.0
    status: str = "not-run"
    result_file: str | None = None
    metrics: dict[str, float] = field(default_factory=dict)
    pass_flags: dict[str, float] = field(default_factory=dict)
    warnings: list[str] = field(default_factory=list)
    errors: list[str] = field(default_factory=list)
    omc_stdout: str = ""
    omc_stderr: str = ""

    @property
    def passed(self) -> bool:
        if self.status != "passed":
            return False
        if is_simulation_success_only(self):
            return True
        return all(value >= REQUIRED_TEST_PASSED_PERCENTAGE for value in self.pass_flags.values())


def is_simulation_success_only(run: ModelRun) -> bool:
    return run.source.startswith(SIMULATION_ONLY_SOURCE_PREFIXES)


def discover_unit_models() -> list[ModelRun]:
    models: list[ModelRun] = []
    for path in sorted(UNIT_TEST_DIR.rglob("*.mo")):
        if path.name == "package.mo" or "Groundtruth" in path.parts:
            continue
        rel = path.relative_to(ROOT / "OpenMAUVe").with_suffix("")
        model = "OpenMAUVe." + ".".join(rel.parts)
        models.append(
            ModelRun(
                name=model.split(".")[-1],
                model=model,
                suite="unit",
                source=str(path.relative_to(ROOT)),
            )
        )
    return models


def verification_models() -> list[ModelRun]:
    return [
        ModelRun(
            name="VerificationROGUE",
            model="OpenMAUVe.VerificationSimulator.VerificationROGUE",
            suite="verification",
            source="OpenMAUVe/VerificationSimulator/VerificationROGUE.mo",
        ),
        ModelRun(
            name="VerificationSeawing",
            model="OpenMAUVe.VerificationSimulator.VerificationSeawing",
            suite="verification",
            source="OpenMAUVe/VerificationSimulator/VerificationSeawing.mo",
        ),
    ]


def selected_models(suite: str, only: str | None) -> list[ModelRun]:
    if suite == "verification":
        models = verification_models()
    elif suite == "unit":
        models = discover_unit_models()
    else:
        models = verification_models() + discover_unit_models()

    if only:
        pattern = re.compile(only)
        models = [model for model in models if pattern.search(model.model) or pattern.search(model.name)]
    return models


def shell_quote_for_mos(path: Path | str) -> str:
    return str(path).replace("\\", "\\\\").replace('"', '\\"')


def run_omc(mos: Path, cwd: Path, timeout: int) -> subprocess.CompletedProcess[str]:
    return subprocess.run(
        ["omc", str(mos)],
        cwd=cwd,
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        timeout=timeout,
        check=False,
    )


def write_simulate_mos(path: Path, run: ModelRun) -> None:
    package = shell_quote_for_mos(PACKAGE_FILE)
    prefix = run.model.replace(".", "_")
    path.write_text(
        "\n".join(
            [
                f'loadFile("{package}");',
                (
                    f'simulate({run.model}, outputFormat="mat", '
                    f'fileNamePrefix="{prefix}", variableFilter="{VARIABLE_FILTER}");'
                ),
                "getErrorString();",
                "",
            ]
        ),
        encoding="utf-8",
    )


def parse_result_file(stdout: str, workdir: Path) -> str | None:
    match = re.search(r'resultFile\s*=\s*"([^"]+)"', stdout)
    if not match:
        return None
    result = match.group(1)
    result_path = Path(result)
    if not result_path.is_absolute():
        result_path = workdir / result_path
    return str(result_path)


def metric_variables(variables: list[str]) -> list[str]:
    selected: list[str] = []
    for variable in variables:
        lower = variable.lower()
        if variable == "time":
            continue
        if (
            "testpassed" in lower
            or lower.endswith("maxrelerr")
            or lower.endswith("relerr")
            or lower.endswith("relativeerror")
            or "maxrelerr" in lower
        ):
            selected.append(variable)
    return sorted(set(selected))


def decode_mat_names(name_matrix: Any) -> list[str]:
    names: list[str] = []
    for column in range(name_matrix.shape[1]):
        chars = []
        for item in name_matrix[:, column]:
            if isinstance(item, str):
                chars.append(item)
            else:
                chars.append(chr(int(item)))
        names.append("".join(chars).rstrip("\x00").strip())
    return names


def read_mat_series(result_file: str) -> dict[str, list[float]]:
    try:
        import scipy.io  # type: ignore[import-not-found]
    except ImportError as exc:
        raise RuntimeError(
            "SciPy is required to extract OpenModelica MAT-file metrics. "
            "Install it with `python3 -m pip install scipy`."
        ) from exc

    mat = scipy.io.loadmat(result_file, chars_as_strings=False)
    names = decode_mat_names(mat["name"])
    data_info = mat["dataInfo"]
    series: dict[str, list[float]] = {}

    for index, name in enumerate(names):
        if not name or name == "time":
            continue
        data_set = int(data_info[0, index])
        data_index = int(data_info[1, index])
        if data_set <= 0 or data_index == 0:
            continue
        data_key = f"data_{data_set}"
        if data_key not in mat:
            continue
        sign = -1.0 if data_index < 0 else 1.0
        row = abs(data_index) - 1
        values = mat[data_key][row, :]
        series[name] = [sign * float(value) for value in values]
    return series


def summarize_metric_values(run: ModelRun, values: dict[str, list[float]]) -> None:
    for variable, samples in values.items():
        if "testPassed" in variable:
            active = [value for value in samples if value >= 0.0]
            if not active:
                run.warnings.append(f"{variable} was never active in sampled result times")
                continue
            passed_samples = sum(value >= TEST_PASSED_VALUE_THRESHOLD for value in active)
            run.pass_flags[variable] = 100.0 * passed_samples / len(active)
            continue

        active_metrics = [value for value in samples if value >= 0.0]
        if active_metrics:
            run.metrics[variable] = max(active_metrics)


def run_model(run: ModelRun, run_dir: Path, timeout: int) -> ModelRun:
    model_dir = run_dir / run.name
    model_dir.mkdir(parents=True, exist_ok=True)
    simulate_mos = model_dir / "simulate.mos"
    write_simulate_mos(simulate_mos, run)

    start = dt.datetime.now(dt.timezone.utc)
    try:
        process = run_omc(simulate_mos, model_dir, timeout)
    except subprocess.TimeoutExpired as exc:
        run.status = "failed"
        run.elapsed_seconds = timeout
        run.errors.append(f"Timed out after {timeout} seconds")
        run.omc_stdout = exc.stdout or ""
        run.omc_stderr = exc.stderr or ""
        return run

    run.elapsed_seconds = (dt.datetime.now(dt.timezone.utc) - start).total_seconds()
    run.omc_stdout = process.stdout
    run.omc_stderr = process.stderr
    result_file = parse_result_file(process.stdout, model_dir)

    if process.returncode != 0:
        run.status = "failed"
        run.errors.append(f"omc exited with status {process.returncode}")
    if not result_file or not Path(result_file).exists():
        run.status = "failed"
        run.errors.append("No simulation result file was produced")
        return run

    run.result_file = str(Path(result_file).relative_to(ROOT))
    try:
        result_series = read_mat_series(result_file)
    except RuntimeError as exc:
        run.status = "failed"
        run.errors.append(str(exc))
        return run

    interesting = metric_variables(list(result_series))
    if interesting:
        summarize_metric_values(run, {variable: result_series[variable] for variable in interesting})
    else:
        run.warnings.append("No testPassed or relative-error variables were found; using simulation success only")

    if run.status == "not-run":
        run.status = "passed"
    if is_simulation_success_only(run) and run.pass_flags:
        run.warnings.append(
            "TestVehicles policy: pass flags are informational; successful simulation determines status"
        )
    elif any(value < REQUIRED_TEST_PASSED_PERCENTAGE for value in run.pass_flags.values()):
        run.status = "failed"
        failed_flags = [
            key
            for key, value in run.pass_flags.items()
            if value < REQUIRED_TEST_PASSED_PERCENTAGE
        ]
        run.errors.append("Failing pass flag(s): " + ", ".join(failed_flags))
    return run


def load_baseline() -> dict[str, Any] | None:
    if not BASELINE_FILE.exists():
        return None
    with BASELINE_FILE.open(encoding="utf-8") as handle:
        return json.load(handle)


def classify_metric_change(old: float, new: float) -> str:
    """Return 'unchanged', 'improved' or 'worsened' for a lower-is-better metric."""
    tolerance = max(
        REGRESSION_ABSOLUTE_TOLERANCE,
        REGRESSION_RELATIVE_TOLERANCE * max(abs(old), abs(new)),
    )
    if abs(new - old) <= tolerance:
        return "unchanged"
    return "worsened" if new > old else "improved"


def compare_to_baseline(results: dict[str, Any], baseline: dict[str, Any] | None) -> dict[str, Any]:
    """Classify every relative-error metric against the baseline.

    Metrics are relative errors, so a decrease is an improvement. Differences
    within the tolerance count as unchanged. Models or metrics that have no
    baseline value are reported as notes and never as regressions.
    """
    outcome: dict[str, Any] = {
        "baseline_commit": (baseline or {}).get("git_commit"),
        "worsened": [],
        "improved": [],
        "unchanged": [],
        "notes": [],
    }
    if baseline is None:
        outcome["notes"].append(
            "No committed baseline_results.json found; regression direction cannot be assessed yet."
        )
        return outcome

    baseline_models = {model["model"]: model for model in baseline.get("models", [])}
    for model in results["models"]:
        previous = baseline_models.get(model["model"])
        if not previous:
            outcome["notes"].append(f"{model['model']}: no baseline entry")
            continue
        previous_metrics = previous.get("metrics", {})
        for metric, value in model.get("metrics", {}).items():
            if metric not in previous_metrics:
                outcome["notes"].append(f"{model['model']}: {metric} has no baseline value")
                continue
            old = previous_metrics[metric]
            outcome[classify_metric_change(old, value)].append(
                {"model": model["model"], "metric": metric, "baseline": old, "latest": value}
            )
    return outcome


def outcome_summary(outcome: dict[str, Any]) -> str:
    return (
        f"{len(outcome['worsened'])} worsened, {len(outcome['improved'])} improved, "
        f"{len(outcome['unchanged'])} unchanged, {len(outcome['notes'])} note(s)"
    )


def outcome_lines(outcome: dict[str, Any]) -> list[str]:
    lines = ["Regression outcome"]
    if outcome.get("baseline_commit"):
        lines.append(f"  Baseline commit: {outcome['baseline_commit']}")
    for category in ("worsened", "improved", "unchanged"):
        entries = outcome[category]
        lines.append(f"  {category.capitalize()} ({len(entries)})")
        for entry in entries:
            if category == "unchanged":
                lines.append(f"    {entry['model']}: {entry['metric']} unchanged at {entry['latest']:.8g}")
            else:
                lines.append(
                    f"    {entry['model']}: {entry['metric']} {category} "
                    f"from {entry['baseline']:.8g} to {entry['latest']:.8g}"
                )
    lines.append(f"  Notes ({len(outcome['notes'])})")
    lines.extend(f"    {note}" for note in outcome["notes"])
    return lines


def results_payload(models: list[ModelRun], started_at: str, finished_at: str) -> dict[str, Any]:
    return {
        "started_at": started_at,
        "finished_at": finished_at,
        "git_commit": git_commit(),
        "models": [
            {
                "name": model.name,
                "model": model.model,
                "suite": model.suite,
                "source": model.source,
                "status": model.status,
                "elapsed_seconds": model.elapsed_seconds,
                "result_file": model.result_file,
                "pass_flags": model.pass_flags,
                "metrics": model.metrics,
                "warnings": model.warnings,
                "errors": model.errors,
            }
            for model in models
        ],
    }


def git_commit() -> str | None:
    try:
        process = subprocess.run(
            ["git", "rev-parse", "HEAD"],
            cwd=ROOT,
            text=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.DEVNULL,
            check=False,
        )
    except OSError:
        return None
    return process.stdout.strip() if process.returncode == 0 else None


def write_reports(results: dict[str, Any], outcome: dict[str, Any], txt_path: Path, json_path: Path) -> None:
    json_path.write_text(json.dumps(results, indent=2, sort_keys=True) + "\n", encoding="utf-8")

    lines = [
        "OpenMAUVe unit testing report",
        f"Started:  {results['started_at']}",
        f"Finished: {results['finished_at']}",
        f"Commit:   {results.get('git_commit') or 'unknown'}",
        "",
        "Summary",
    ]
    passed = sum(1 for model in results["models"] if model["status"] == "passed")
    total = len(results["models"])
    lines.append(f"  Passed models: {passed}/{total}")
    lines.append(f"  Regression outcome: {outcome_summary(outcome)}")
    lines.append("")

    for model in results["models"]:
        lines.append(f"{model['status'].upper():7} {model['model']} ({model['elapsed_seconds']:.1f}s)")
        for variable, value in sorted(model["pass_flags"].items()):
            lines.append(f"  pass rate {variable}: {value:.8g}%")
        for variable, value in sorted(model["metrics"].items()):
            lines.append(f"  metric {variable}: {value:.8g}")
        for warning in model["warnings"]:
            lines.append(f"  warning: {warning}")
        for error in model["errors"]:
            lines.append(f"  error: {error}")
        lines.append("")

    lines.extend(outcome_lines(outcome))
    lines.append("")
    if outcome["worsened"]:
        lines.append("Do not commit or merge without reviewing the worsened metrics.")

    txt_path.write_text("\n".join(lines) + "\n", encoding="utf-8")


def model_pass_percentage(model: dict[str, Any]) -> float:
    pass_flags = model.get("pass_flags", {})
    if pass_flags:
        return min(float(value) for value in pass_flags.values())
    return 100.0 if model.get("status") == "passed" else 0.0


def csv_boolean(model: dict[str, Any] | None) -> str:
    if model is None:
        return ""
    return "TRUE" if model.get("status") == "passed" else "FALSE"


def csv_number(value: Any) -> str:
    if value is None:
        return ""
    return f"{float(value):.6f}"


def write_csv_report(
    results: dict[str, Any], baseline: dict[str, Any] | None, csv_path: Path
) -> None:
    baseline_models = {
        model["model"]: model for model in (baseline or {}).get("models", [])
    }
    latest_commit = results.get("git_commit") or ""
    baseline_commit = (baseline or {}).get("git_commit") or ""

    with csv_path.open("w", encoding="utf-8", newline="") as handle:
        writer = csv.DictWriter(handle, fieldnames=CSV_COLUMNS)
        writer.writeheader()
        for latest in results["models"]:
            previous = baseline_models.get(latest["model"])
            writer.writerow(
                {
                    "TEST_NAME": latest["model"],
                    "LATEST_RUN_PASSED": csv_boolean(latest),
                    "LATEST_RUN_TIME": csv_number(latest.get("elapsed_seconds")),
                    "LATEST_RUN_PASS_PERCENTAGE": csv_number(
                        model_pass_percentage(latest)
                    ),
                    "LATEST_RUN_COMMIT": latest_commit,
                    "BASELINE_RUN_PASSED": csv_boolean(previous),
                    "BASELINE_RUN_TIME": csv_number(
                        previous.get("elapsed_seconds") if previous else None
                    ),
                    "BASELINE_RUN_PASS_PERCENTAGE": csv_number(
                        model_pass_percentage(previous) if previous else None
                    ),
                    "BASELINE_RUN_COMMIT": baseline_commit if previous else "",
                }
            )


def copy_latest_run_logs(run_dir: Path, models: list[ModelRun]) -> None:
    for model in models:
        model_dir = run_dir / model.name
        if not model_dir.exists():
            continue
        (model_dir / "omc_stdout.txt").write_text(model.omc_stdout, encoding="utf-8")
        (model_dir / "omc_stderr.txt").write_text(model.omc_stderr, encoding="utf-8")


def parse_args(argv: list[str]) -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--suite",
        choices=("all", "verification", "unit"),
        default="all",
        help="Which simulations to run. Default: all.",
    )
    parser.add_argument(
        "--only",
        help="Optional regular expression matched against model names/FQNs.",
    )
    parser.add_argument(
        "--timeout",
        type=int,
        default=DEFAULT_TIMEOUT_SECONDS,
        help=f"Per-model timeout in seconds. Default: {DEFAULT_TIMEOUT_SECONDS}.",
    )
    parser.add_argument(
        "--fail-on-regression",
        action="store_true",
        help="Exit non-zero when a metric worsened against baseline_results.json beyond the tolerance.",
    )
    parser.add_argument(
        "--update-baseline",
        action="store_true",
        help="Replace unit_testing/baseline_results.json with the current successful results.",
    )
    parser.add_argument(
        "--keep-runs",
        type=int,
        default=5,
        help="Number of timestamped run directories to retain. Default: 5.",
    )
    return parser.parse_args(argv)


def prune_old_runs(keep: int) -> None:
    if keep < 1 or not RUNS_DIR.exists():
        return
    runs = sorted([path for path in RUNS_DIR.iterdir() if path.is_dir()], reverse=True)
    for old in runs[keep:]:
        shutil.rmtree(old, ignore_errors=True)


def main(argv: list[str]) -> int:
    args = parse_args(argv)
    if not shutil.which("omc"):
        print("ERROR: omc was not found on PATH. Install OpenModelica before running tests.", file=sys.stderr)
        return 2
    if not PACKAGE_FILE.exists():
        print(f"ERROR: package file not found: {PACKAGE_FILE}", file=sys.stderr)
        return 2

    models = selected_models(args.suite, args.only)
    if not models:
        print("ERROR: no models selected.", file=sys.stderr)
        return 2

    RESULTS_DIR.mkdir(parents=True, exist_ok=True)
    RUNS_DIR.mkdir(parents=True, exist_ok=True)
    timestamp = dt.datetime.now(dt.timezone.utc).strftime("%Y%m%dT%H%M%SZ")
    run_dir = RUNS_DIR / timestamp
    run_dir.mkdir(parents=True, exist_ok=True)

    started_at = dt.datetime.now(dt.timezone.utc).isoformat()
    print(f"Running {len(models)} OpenMAUVe model(s); reports will be written to {TEST_ROOT.relative_to(ROOT)}")
    for index, model in enumerate(models, start=1):
        print(f"[{index}/{len(models)}] {model.model}")
        run_model(model, run_dir, args.timeout)
        print(f"    {model.status} in {model.elapsed_seconds:.1f}s")

    finished_at = dt.datetime.now(dt.timezone.utc).isoformat()
    payload = results_payload(models, started_at, finished_at)
    baseline = load_baseline()
    outcome = compare_to_baseline(payload, baseline)
    payload["regression_outcome"] = outcome

    copy_latest_run_logs(run_dir, models)
    write_reports(payload, outcome, LATEST_TXT, LATEST_JSON)
    dated_txt = RESULTS_DIR / f"results_{timestamp}.txt"
    dated_json = RESULTS_DIR / f"results_{timestamp}.json"
    dated_csv = RESULTS_DIR / f"results_{timestamp}.csv"
    write_reports(payload, outcome, dated_txt, dated_json)
    write_csv_report(payload, baseline, LATEST_CSV)
    write_csv_report(payload, baseline, dated_csv)

    if args.update_baseline:
        if any(model.status != "passed" for model in models):
            print("ERROR: refusing to update baseline because at least one model failed.", file=sys.stderr)
            return 1
        BASELINE_FILE.write_text(json.dumps(payload, indent=2, sort_keys=True) + "\n", encoding="utf-8")
        print(f"Updated {BASELINE_FILE.relative_to(ROOT)}")

    prune_old_runs(args.keep_runs)

    print(f"Text report: {LATEST_TXT.relative_to(ROOT)}")
    print(f"JSON report: {LATEST_JSON.relative_to(ROOT)}")
    print(f"CSV report: {LATEST_CSV.relative_to(ROOT)}")
    print("\n".join(outcome_lines(outcome)))
    failures = [model for model in models if model.status != "passed"]
    if failures:
        print("ERROR: at least one model failed. Do not commit or merge this change.", file=sys.stderr)
        return 1
    if outcome["worsened"] and args.fail_on_regression:
        print("ERROR: one or more metrics worsened against the baseline.", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
