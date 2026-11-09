# 05 — Problem-Solving Patterns

Patterns are not magic labels. They are reusable reasoning structures. Learn the condition that makes each one valid.

## Pattern map

| Pattern | Typical clue | Key condition |
|---|---|---|
| Two pointers | Pair / interval scan | Pointer movement can safely discard candidates |
| Sliding window | Contiguous range with a constraint | Window validity can be updated incrementally |
| Prefix sums | Range aggregate / subarray sum | Prefix difference represents the target aggregate |
| Difference array | Many range modifications | Updates can be represented at boundaries |
| Binary search on answer | Minimise maximum / maximise minimum | Feasibility is monotonic |
| Monotonic stack | Next greater/smaller, span | A candidate becomes permanently dominated |
| Monotonic deque | Sliding min/max | Expired and dominated candidates can be removed |
| Fast/slow pointers | Cycle or middle of linked structure | Different traversal speeds reveal structure |
| Sweep line | Intervals / events | Sorting events creates a valid processing order |
| Meet in the middle | Exponential search with moderate n | Split state space into two manageable halves |

## Study sequence

1. Two pointers
2. Sliding window
3. Prefix sums and prefix XOR
4. Difference arrays
5. Binary search on answer
6. Monotonic stack
7. Monotonic queue / deque
8. Sweep line
9. Meet in the middle

## For every pattern, record

- The clue that suggests it
- The invariant that makes it correct
- The exact condition required
- A counterexample when that condition is absent
- Time and space complexity
- One problem where you initially chose the wrong pattern

**Warning:** a sliding window is not automatically valid for every subarray problem. For example, negative values can break the usual monotonic reasoning for a sum-at-most-K window.
