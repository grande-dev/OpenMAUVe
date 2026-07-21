# Unit Testing

Run the OpenMAUVe unit and verification suite before committing:

```bash
python3 unit_testing/run_unit_tests.py --fail-on-regression
```

Requirements: OpenModelica `omc`, Python 3, and SciPy for reading OpenModelica MAT result files.

The runner simulates:

- `OpenMAUVe.VerificationSimulator.VerificationROGUE`
- `OpenMAUVe.VerificationSimulator.VerificationSeawing`
- every concrete model under `OpenMAUVe.UnitTesting`, excluding `package.mo` and ground-truth helper models

It writes the current text report to `unit_testing/latest_results.txt` and the machine-readable report to `unit_testing/latest_results.json`. Timestamped reports and OpenModelica work directories are kept under `unit_testing/results/` and `unit_testing/runs/`; those generated files are ignored by Git.

For focused local checks, use:

```bash
python3 unit_testing/run_unit_tests.py --suite verification
python3 unit_testing/run_unit_tests.py --suite unit --only TestROGUE
```

## Baseline Comparisons

The script compares numeric relative-error metrics against `unit_testing/baseline_results.json` when that file exists. A metric that increases is reported as a regression warning. To intentionally accept new metric values after a clean run:

```bash
python3 unit_testing/run_unit_tests.py --update-baseline
```

Review the diff before committing a changed baseline.

## Local Git Hook

Git hooks are not versioned by Git, so install the tracked hook wrapper once per clone:

```bash
./unit_testing/install_git_hooks.sh
```

The hook runs the verification suite with regression checking before each commit. Contributors can still run the full suite manually before pushing.

## Required Checks On Main

The workflow in `.github/workflows/unit-tests.yml` runs the same script for pull requests and pushes to `main`. In the repository settings, enable branch protection for `main` and require the `OpenMAUVe unit tests` status check before merging.
