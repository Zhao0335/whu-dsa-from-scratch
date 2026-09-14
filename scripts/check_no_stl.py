#!/usr/bin/env python3
from pathlib import Path
import sys
ROOT = Path(__file__).resolve().parents[1]
FORBIDDEN = [
    'std::vector','std::list','std::deque','std::stack','std::queue',
    'std::priority_queue','std::map','std::set','std::unordered_map',
    'std::unordered_set','std::sort','std::lower_bound','std::upper_bound',
    'std::make_heap','std::push_heap','std::pop_heap'
]
violations=[]
for base in [ROOT/'include'/'whudsa', ROOT/'src']:
    for p in base.rglob('*'):
        if p.suffix not in {'.hpp','.cpp'}: continue
        text=p.read_text(encoding='utf-8')
        for token in FORBIDDEN:
            if token in text:
                violations.append((p.relative_to(ROOT),token))
if violations:
    for p,t in violations: print(f'{p}: forbidden token {t}')
    sys.exit(1)
print('No forbidden STL shortcuts found in core implementation.')
