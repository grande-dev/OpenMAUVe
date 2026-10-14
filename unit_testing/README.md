# Unit Testing

Run the OpenMAUVe unit and verification suite before committing:

```bash
unit_testing/venv_openmauve_unit_test/bin/python unit_testing/run_unit_tests.py --fail-on-regression
```

Requirements: OpenModelica `omc` on the `PATH`, Python 3.10 or later with the `venv` module (`python3-venv` on Debian/Ubuntu), and the Python packages listed in `unit_testing/requirements.txt`. SciPy is the one the runner itself needs: it reads the OpenModelica MAT result files.

## Python environment

The runner is executed from a virtual environment that lives inside this repository, in `unit_testing/venv_openmauve_unit_test/`. The directory is ignored by Git. Create it once per clone:

```bash
cd /path/to/OpenMAUVe
python3 -m venv unit_testing/venv_openmauve_unit_test
unit_testing/venv_openmauve_unit_test/bin/python -m pip install --upgrade pip
unit_testing/venv_openmauve_unit_test/bin/python -m pip install -r unit_testing/requirements.txt
```

Then either call the interpreter of the environment directly, as in the commands of this document, or activate the environment in the shell and use `python3`:

```bash
. unit_testing/venv_openmauve_unit_test/bin/activate
python3 unit_testing/run_unit_tests.py --fail-on-regression
deactivate
```

## Common errors 
If the interpreter running the script cannot import SciPy, every model is reported as `failed` with the error `SciPy is required to extract OpenModelica MAT-file metrics`, although the simulations themselves completed. Recreate the environment as above and run the unit testing suite again.

The runner simulates:

- `OpenMAUVe.VerificationSimulator.VerificationROGUE`
- `OpenMAUVe.VerificationSimulator.VerificationSeawing`
- every concrete model under `OpenMAUVe.UnitTesting`, excluding `package.mo` and ground-truth helper models

It writes the current text report to `unit_testing/latest_results.txt`, the machine-readable report to `unit_testing/latest_results.json`, and the latest-versus-baseline summary to `unit_testing/latest_results.csv`. Timestamped reports and OpenModelica work directories are kept under `unit_testing/results/` and `unit_testing/runs/`; those generated files are ignored by Git.

For focused local checks, use:

```bash
unit_testing/venv_openmauve_unit_test/bin/python unit_testing/run_unit_tests.py --suite verification
unit_testing/venv_openmauve_unit_test/bin/python unit_testing/run_unit_tests.py --suite unit --only TestROGUE
```

## Baseline Comparisons

The script compares every numeric relative-error metric against `unit_testing/baseline_results.json` when that file exists and reports the result per metric in a `Regression outcome` section, printed on the console and written to the text and JSON reports. Each metric is classified as `worsened`, `improved` or `unchanged`. Metrics are relative errors, so a decrease is an improvement; a difference within a relative tolerance of 1e-6 (run-to-run solver noise) counts as unchanged. Models or metrics that have no baseline value are listed as notes and are never regressions. With `--fail-on-regression` the script exits non-zero only when at least one metric worsened. To intentionally accept new metric values after a clean run:

```bash
unit_testing/venv_openmauve_unit_test/bin/python unit_testing/run_unit_tests.py --update-baseline
```

The baseline is only replaced when every model passed. Review the diff before committing a changed baseline.

## Local Git Hook

Git hooks are not versioned by Git, so install the tracked hook wrapper once per clone:

```bash
./unit_testing/install_git_hooks.sh
```

The hook runs the verification suite with regression checking before each commit. It uses `unit_testing/venv_openmauve_unit_test/bin/python` of this repository when the environment exists and falls back to `python3` otherwise. Contributors can still run the full suite manually before pushing.

## Required Checks On Main

The workflow in `.github/workflows/unit-tests.yml` runs the same script for pull requests and pushes to `main`; any CI job must install `unit_testing/requirements.txt` into the interpreter that runs the script. In the repository settings, enable branch protection for `main` and require the `OpenMAUVe unit tests` status check before merging.
