# 08 — Recursion and Backtracking

**Goal:** model a search space as states and choices, then prune safely.

## Recursion foundations
- Base case, recursive case and progress measure
- Call stack and recursion depth
- Recursion tree and complexity
- Divide and conquer
- Generate subsets, permutations and combinations

## Backtracking
At each state: choose → recurse → undo. Define the state, available choices, goal condition and pruning rule.
- Subsets and combinations
- Permutations with duplicates
- Combination Sum
- N-Queens
- Sudoku-style constraint search
- Word search / grid DFS

## Pruning
Prune only when you can prove that no completion of the current state can produce a valid answer. Separate duplicate avoidance from feasibility pruning.

## Exit test
Write recursion with a precise state definition, prove termination, and explain the search-tree upper bound.
