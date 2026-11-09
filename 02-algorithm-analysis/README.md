# 02 — Algorithm Analysis and Proof

**Goal:** decide whether an approach can fit the constraints and justify that it returns the correct answer.

## Topics

1. Input constraints and feasible complexity
2. Big-O, Big-Theta and Big-Omega
3. Worst-case, average-case and amortised analysis
4. Counting iterations in nested loops
5. Summations and geometric progressions
6. Recurrence relations and recursion trees
7. Master theorem (and its limits)
8. Loop invariants
9. Induction and structural induction
10. Amortised analysis: aggregate, accounting and potential methods

## Complexity intuition

| n | O(log n) | O(n) | O(n log n) | O(n²) |
|---:|---:|---:|---:|---:|
| 10³ | ~10 | 1,000 | ~10,000 | 1,000,000 |
| 10⁵ | ~17 | 100,000 | ~1.7M | 10¹⁰ |
| 10⁶ | ~20 | 1M | ~20M | 10¹² |

These are growth estimates, not runtime guarantees. Constant factors, memory access and language/runtime matter.

## Proof checklist

- What is the invariant?
- Is it true initially?
- Does every iteration preserve it?
- Does termination happen?
- Does the invariant imply the required result at termination?

## Exercises

- Derive the complexity of all loops in a set of short code snippets.
- Solve and explain T(n) = 2T(n/2) + n.
- Prove binary search correctness.
- Explain why vector append is amortised O(1), not worst-case O(1).
- Compare nested loops with a two-pointer scan.

## Resources

- [MIT 6.006](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/)
- [MIT 6.042J](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-spring-2015/)

**Exit test:** estimate complexity from code, derive common recurrences, and give a correctness argument for a basic iterative algorithm.
