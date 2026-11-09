# 13 — Advanced Data Structures

Learn these only after basic arrays, trees, sorting and complexity analysis are solid.

## Range-query toolkit
| Structure | Typical use | Typical operation |
|---|---|---|
| Prefix sums | Static range sum | O(1) query after O(n) build |
| Sparse table | Static idempotent range query (e.g. min) | O(1) query after O(n log n) build |
| Fenwick tree | Prefix aggregates / point updates | O(log n) |
| Segment tree | Flexible associative range query | O(log n) |
| Lazy segment tree | Range updates + range queries | O(log n), with correct lazy propagation |

## Further structures
- Persistent segment tree
- Merge sort tree
- Treap
- Sqrt decomposition and Mo's algorithm
- Wavelet tree / matrix
- Link-cut tree (advanced dynamic forests)

## Foundations to master
- Associative operations and identity elements
- Coordinate compression
- Inclusive vs half-open intervals
- Indexing conventions
- Lazy propagation invariant
- Memory and recursion-depth considerations

## Practice ladder
- Dynamic prefix sums with Fenwick tree
- Range minimum query with sparse table
- Range sum / minimum with segment tree
- Range add + range sum with lazy propagation
- K-th order statistic with persistent segment tree

## Exit test
Implement Fenwick and segment trees from memory, state the invariant and derive update/query complexity.
