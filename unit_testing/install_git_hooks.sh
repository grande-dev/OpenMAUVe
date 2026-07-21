#!/usr/bin/env bash
set -euo pipefail

repo_root="$(git rev-parse --show-toplevel)"
hook_path="${repo_root}/.git/hooks/pre-commit"

cat > "${hook_path}" <<'HOOK'
#!/usr/bin/env bash
set -euo pipefail

repo_root="$(git rev-parse --show-toplevel)"
cd "${repo_root}"

python3 unit_testing/run_unit_tests.py --suite verification --fail-on-regression
HOOK

chmod +x "${hook_path}"
echo "Installed ${hook_path}"
