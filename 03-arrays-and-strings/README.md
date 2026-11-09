# 03 — Arrays and Strings

**Goal:** become fluent with contiguous data, index boundaries, frequency information and subarray structure.

## Concepts

- Traversal, insertion, deletion and in-place modification
- Frequency arrays and hash maps
- Prefix sums and prefix XOR
- Difference arrays and range updates
- Kadane's algorithm
- Subarrays vs subsequences vs subsets
- Sorting as a preprocessing tool
- Matrix traversal and coordinate boundaries
- String traversal, character counts and basic matching

## Essential patterns

| Pattern | Recognition clue |
|---|---|
| Frequency counting | Need counts or membership by value |
| Prefix sum | Many range-sum queries or subarray sum reasoning |
| Difference array | Many range updates, final values needed |
| Kadane | Maximum-sum contiguous segment |
| Sorting + scan | Order can expose duplicates, intervals or pair structure |
| Hashing | Need fast expected lookup / complement search |

## Practice ladder

1. Reverse an array in-place.
2. Remove duplicates from a sorted array.
3. Rotate an array.
4. Maximum subarray sum.
5. Range sum queries using prefix sums.
6. Subarray sum equals K.
7. Product of array except self.
8. Longest consecutive sequence.
9. Merge intervals.
10. 2D matrix traversal and search.

Use [CSES](https://cses.fi/problemset/) and [USACO Guide](https://usaco.guide/) to extend practice.

## Exit test

Given an unfamiliar array problem, identify whether it concerns a subarray, subsequence or subset; derive a baseline; then justify the chosen optimisation and its complexity.
