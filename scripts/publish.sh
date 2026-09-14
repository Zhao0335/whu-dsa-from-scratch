#!/usr/bin/env bash
set -euo pipefail
if [ "$#" -ne 1 ]; then
  echo "Usage: $0 git@github.com:<user>/<repo>.git"
  exit 1
fi
git remote remove origin 2>/dev/null || true
git remote add origin "$1"
git push -u origin main
