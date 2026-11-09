# 04 — Searching and Sorting

**Goal:** use ordering and monotonicity to reduce search space and organise data efficiently.

## Sorting
- Comparison sorting and the O(n log n) comparison lower bound
- `std::sort`, stable sorting and custom comparators
- Counting sort / bucket sort when key ranges permit
- Coordinate compression
- Sorting intervals, events and records

## Searching
- Linear search and binary search on sorted arrays
- Lower bound / upper bound and insertion positions
- First/last occurrence and duplicate ranges
- Binary search on a monotonic predicate
- Search on answer: minimise the maximum / maximise the minimum
- Ternary search for suitable unimodal functions (under stated assumptions)

## Binary search invariant
For a predicate that changes monotonically from false to true, maintain a search interval that brackets the transition. State clearly which endpoints are known false/true; do not rely on memorised loop templates.

## Practice ladder
- First and last position in sorted array
- Search insert position
- Search in rotated sorted array
- Minimum in rotated sorted array
- Aggressive Cows / maximum minimum distance
- Allocate Books / minimise maximum pages
- Koko Eating Bananas / minimum feasible rate
- Median of two sorted arrays (advanced)

## Exit test
Implement lower_bound-style search, explain loop invariants, and identify the monotonic predicate in an answer-space problem.
