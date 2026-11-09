# C++20 Reference Implementations

This folder contains compact reference implementations. They are learning aids, not a replacement for deriving the data structure and understanding its invariant.

## Included

| File | Contents | Key contract |
|---|---|---|
| [algorithms.hpp](algorithms.hpp) | DSU, Fenwick tree, iterative sum segment tree, Dijkstra | Contracts and indexing are documented beside each implementation |
| [smoke_test.cpp](smoke_test.cpp) | Basic deterministic checks | Compiled by the repository CI workflow |

## Contracts to remember

- **DSU:** vertices are zero-indexed; union by size + path compression; amortised inverse-Ackermann operations.
- **Fenwick tree:** indices are one-based; `range_sum(l, r)` is inclusive; point updates and prefix/range sums are O(log n).
- **Segment tree:** indices are zero-based; `sum(l, r)` uses a half-open interval [l, r); point assignment and range sum are O(log n).
- **Dijkstra:** graph is an adjacency list; edge weights must be non-negative; unreachable vertices retain a large INF value; O((V + E) log V) with a binary heap.

## Compile locally

```bash
g++ -std=c++20 -Wall -Wextra -Wshadow -Wconversion -pedantic -O2 templates/cpp/smoke_test.cpp -o /tmp/dsa-smoke
/tmp/dsa-smoke
```

Before using an implementation in a contest, adapt the indexing and numeric types to the problem constraints and test boundary cases.
