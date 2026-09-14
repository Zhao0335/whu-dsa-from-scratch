#!/usr/bin/env python3
from pathlib import Path
import sys
FORBIDDEN = [
    "std::vector", "std::list", "std::deque", "std::stack", "std::queue",
    "std::priority_queue", "std::map", "std::set", "std::unordered_map",
    "std::unordered_set", "std::sort", "std::lower_bound", "std::upper_bound",
]
violations=[]
for root in [Path("include/whudsa"), Path("src")]:
    for path in root.rglob("*"):
        if path.is_file() and path.suffix in {".hpp", ".h", ".cpp", ".cc"}:
            text=path.read_text(encoding="utf-8")
            for token in FORBIDDEN:
                if token in text: violations.append((path, token))
if violations:
    for path, token in violations: print(f"{path}: forbidden token {token}")
    sys.exit(1)
print("No forbidden STL shortcuts found in core code.")
