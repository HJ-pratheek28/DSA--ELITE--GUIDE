# 12 — Dynamic Programming

**Goal:** identify overlapping subproblems and define states that preserve exactly the information needed for optimal substructure.

## State-design checklist
1. What does dp[state] mean, precisely?
2. What are the choices / transitions?
3. What are the base cases?
4. In what order are states computed?
5. What is the answer state?
6. Can memory be compressed without destroying dependencies?
7. Why does the recurrence cover every valid solution exactly as required?

## Families
- 1D DP: Fibonacci, climbing stairs, house robber
- Grid DP: paths, obstacles, minimum path cost
- Knapsack: 0/1, unbounded, subset sum
- Subsequences: LIS, LCS, edit distance
- String DP: palindrome and matching variants
- Interval DP: matrix-chain style problems
- Tree DP
- Bitmask DP
- Digit DP
- DP on DAGs
- Optimisations: divide-and-conquer DP, convex hull trick, Knuth optimisation (advanced)

## Practice ladder
- Climbing Stairs
- House Robber I / II / III
- Coin Change
- Partition Equal Subset Sum
- Longest Increasing Subsequence
- Longest Common Subsequence
- Edit Distance
- Unique Paths
- Matrix Chain Multiplication
- Travelling Salesperson bitmask DP

## Common failures
- State does not contain enough information.
- Transition misses a choice or counts a choice twice.
- Base cases do not match the state meaning.
- Iteration order reads an uncomputed state.
- Space optimisation overwrites a value still needed.

## Exit test
Derive a DP recurrence from a plain-English state definition and prove it by induction on the state order.
