# WHU DSA From Scratch

A from-scratch C++ practice library for reviewing **Data Structures and Algorithms**.

This project is intentionally educational rather than production-oriented: core implementations avoid STL containers and STL algorithms so that the important course data structures and algorithms are implemented by hand.

## Goals

- Cover the full course syllabus.
- Understand representation, invariants, operations, edge cases and complexity.
- Be able to reproduce key structures during a no-STL exam.
- Verify every implementation with tests.

## Core rules

Core code under `include/whudsa/` and `src/` should not use:

- `std::vector`, `std::list`, `std::deque`
- `std::stack`, `std::queue`, `std::priority_queue`
- `std::map`, `std::set`, `std::unordered_map`, `std::unordered_set`
- `std::string` as the implementation of the string chapter
- `std::sort`, `std::lower_bound`, `std::upper_bound`

Raw arrays, pointers, `new/delete`, recursion and basic language/library facilities are allowed.

## Repository layout

```text
include/whudsa/   interfaces
src/              implementations
tests/            one test program per topic
examples/         usage/demo programs
notes/            theory notes
scripts/          repository checks
```

See [`COURSE_MAP.md`](COURSE_MAP.md) and [`PRACTICE_RULES.md`](PRACTICE_RULES.md).

## Build

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

Start with `include/whudsa/linear/seq_list.hpp`.
