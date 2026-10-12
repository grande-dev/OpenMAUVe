#!/usr/bin/env bash
set -euo pipefail

repo_root="$(git rev-parse --show-toplevel)"
hook_path="${repo_root}/.git/hooks/pre-commit"

cat > "${hook_path}" <<'HOOK'
#!/usr/bin/env bash
set -euo pipefail

repo_root="$(git rev-parse --show-toplevel)"
cd "${repo_root}"

# Prefer the virtual environment of this repository (see unit_testing/README.md).
python_bin="python3"
if [ -x "${repo_root}/unit_testing/venv_openmauve_unit_test/bin/python" ]; then
  python_bin="${repo_root}/unit_testing/venv_openmauve_unit_test/bin/python"
fi

"${python_bin}" unit_testing/run_unit_tests.py --suite verification --fail-on-regression
HOOK

chmod +x "${hook_path}"
echo "Installed ${hook_path}"
