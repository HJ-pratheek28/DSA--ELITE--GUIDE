# Implementation Catalog

Reference code lives in [templates/cpp](../templates/cpp/README.md). Add a row when a reusable implementation is introduced and verified.

| Algorithm / structure | Implementation | Complexity | Status |
|---|---|---|---|
| Disjoint Set Union | [algorithms.hpp](../templates/cpp/algorithms.hpp) | Amortised O(α(n)) per operation | Smoke-tested |
| Fenwick tree | [algorithms.hpp](../templates/cpp/algorithms.hpp) | O(log n) update / query | Smoke-tested |
| Iterative sum segment tree | [algorithms.hpp](../templates/cpp/algorithms.hpp) | O(log n) point update / range query | Smoke-tested |
| Dijkstra | [algorithms.hpp](../templates/cpp/algorithms.hpp) | O((V + E) log V) | Smoke-tested |

## Adding an implementation
1. State its preconditions and indexing convention.
2. Explain the invariant in the topic notes.
3. Add a deterministic smoke test or problem-specific tests.
4. Verify complexity and numeric limits.
5. Update this catalog.
