# DSA Master Roadmap — 24-Month Training Plan

> Competency-based training for a strong algorithmic problem solver and competitive programmer. Twenty-four months is a planning horizon, not a rating guarantee. Advance when you meet the exit criteria.

**Primary language:** C++20  
**Practice target:** 15–20 focused hours/week. Stretch the calendar if you have less time; do not cut proof, review or upsolving.  
**Core loop:** Learn → implement → solve → prove → review → re-solve.

## How to use this roadmap

1. Use [RESOURCE_MAP.md](RESOURCE_MAP.md) for primary resources and supporting references.
2. Follow the topic order below. Do not jump into advanced structures before mastering prerequisite patterns.
3. Use [CSES](https://cses.fi/problemset/) as the structured problem ladder, [USACO Guide](https://usaco.guide/) for lessons and curated topic practice, and Codeforces for mixed contest practice.
4. Record substantial solutions with [SOLUTION_TEMPLATE.md](../templates/SOLUTION_TEMPLATE.md).
5. Update [PROGRESS.md](../PROGRESS.md) only when you can solve and explain the topic independently.

## Phase 0 — C++20 and problem-solving setup (Weeks 1–3)

**Learn**
- Compilation, compiler flags, debugging and reading compiler errors
- Types, integer ranges, overflow, references, pointers and const
- Functions, recursion, structs, vectors, strings and STL
- Sorting, binary search, iterators, lambdas and custom comparators
- Time/space complexity, constraints and basic testing

**Primary:** [LearnCpp](https://www.learncpp.com/) — selected chapters; skip advanced OOP unrelated to contest coding.  
**Reference:** [cppreference](https://en.cppreference.com/w/cpp), especially containers, algorithms, iterators and numerics.

**Practice**
- Implement frequency counting, prefix sums, sorting records and binary search.
- Solve 15–25 easy implementation problems from CSES Introductory Problems.
- Compile with C++20 and warnings enabled: -Wall -Wextra -Wshadow -Wconversion -pedantic.

**Exit gate:** write a clean solution from a blank file, select safe types from constraints, and explain complexity.

## Phase 1 — Core reasoning and linear structures (Months 2–4)

**Order**
1. Complexity analysis, invariants, induction and proof by contradiction
2. Arrays, strings, frequency arrays, hashing and coordinate compression
3. Prefix/suffix sums, difference arrays, Kadane and subarray reasoning
4. Sorting, custom comparators, binary search and binary search on answer
5. Two pointers, sliding window, fast/slow pointers, sweep line
6. Linked lists, stacks, queues, deques and heaps
7. Monotonic stack and monotonic queue

**Primary learning:** [USACO Guide Bronze + Silver](https://usaco.guide/).  
**Structured practice:** CSES Introductory Problems + Sorting and Searching.  
**Proof support:** MIT [Mathematics for Computer Science](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-spring-2015/).

**Practice target:** 80–120 carefully reviewed problems across the phase, not copied solutions.

**Exit gate**
- Solve mixed easy/medium array and sorting problems without topic labels.
- Explain the invariant for each two-pointer/window/monotonic structure.
- Derive a binary-search predicate and prove monotonicity.
- Re-solve at least 20 previously solved problems after a delay.

## Phase 2 — Recursion, trees, greedy and foundational graphs (Months 5–7)

**Order**
1. Recursion trees, divide and conquer, subsets, permutations and backtracking
2. Binary trees, traversals, height, diameter, path problems and BST invariants
3. Greedy scheduling, interval problems, heaps and exchange arguments
4. Graph representation, BFS, DFS, components, cycle detection and bipartite checks
5. Topological sorting, DSU, Kruskal and Prim

**Primary learning:** USACO Guide Silver → Gold modules.  
**Reference:** MIT 6.006 for algorithm design and analysis.  
**Practice:** CSES Tree Algorithms (introductory tasks) and Graph Algorithms (first half).

**Exit gate**
- Implement BFS, DFS, DSU, topological sort and tree traversals from memory.
- Prove a greedy solution with an exchange argument; construct counterexamples when a greedy rule is invalid.
- Recognise tree vs graph modelling in unseen problems.

## Phase 3 — Dynamic programming and shortest paths (Months 8–10)

**Order**
1. DP mindset: state, transition, base case, order and answer
2. 1D / 2D DP, grid DP, knapsack, subset sum and coin change
3. LIS, LCS, edit distance and sequence DP
4. Interval DP, tree DP and DAG DP
5. BFS shortest paths, Dijkstra, Bellman–Ford and Floyd–Warshall
6. Shortest-path variations and path reconstruction

**Primary learning:** USACO Guide Gold DP and graph modules.  
**Practice:** CSES Dynamic Programming + remaining Graph Algorithms.  
**Reference:** CP-Algorithms for precise algorithm details.

**Exit gate**
- Define DP states in plain English before writing code.
- Explain why transitions cover all possibilities and why iteration order is valid.
- Choose a shortest-path algorithm based on edge weights and graph constraints.
- Solve mixed DP/graph problems without being told the category.

## Phase 4 — Intermediate competitive programming toolkit (Months 11–14)

**Order**
1. Bit manipulation, bitmasks and meet in the middle
2. Number theory: gcd, extended gcd, sieve, modular arithmetic, binary exponentiation, inverses and combinatorics
3. Fenwick tree, segment tree, lazy propagation and sparse table
4. DSU applications, offline queries, coordinate compression and sqrt decomposition
5. String hashing, KMP, Z-function, trie and Manacher
6. SCC, bridges, articulation points, Euler tours and binary lifting

**Primary learning:** USACO Guide Gold/Platinum modules.  
**Reference:** CP-Algorithms.  
**Practice:** CSES Range Queries, Tree Algorithms, Mathematics and String Algorithms.

**Exit gate**
- Implement Fenwick and segment trees with tested indexing conventions.
- Explain modular inverse preconditions and overflow risks.
- Implement KMP/Z and identify when hashing is probabilistic.
- Solve unfamiliar problems requiring combinations of two known techniques.

## Phase 5 — Advanced algorithms and data structures (Months 15–19)

Study selectively and deeply; advanced topics are tools, not a checklist to memorise.

**Data structures**
- Persistent segment tree, merge sort tree, treap, wavelet tree
- Mo's algorithm, DSU on tree, small-to-large merging
- Heavy-light decomposition, centroid decomposition, link-cut trees (specialist)

**Graphs**
- SCC applications, max flow/min cut, Dinic, bipartite matching
- Min-cost flow and advanced shortest-path modelling

**Strings**
- Aho–Corasick, suffix array + LCP, suffix automaton, eertree

**DP / optimisation**
- Bitmask DP, digit DP, rerooting DP
- Divide-and-conquer DP, convex hull trick, Li Chao tree, Knuth optimisation

**Math / algorithms**
- FFT/NTT, combinatorics, game theory, computational geometry, randomized algorithms

**Primary:** USACO Guide Platinum/Advanced where covered.  
**Reference:** CP-Algorithms; use KACTL as a compact implementation reference only after understanding the algorithm.  
**Practice:** Codeforces and AtCoder problems tagged for the technique, plus selected CSES advanced tasks.

**Exit gate:** for every technique you adopt, document its preconditions, invariant, complexity, implementation pitfalls and at least three problems solved independently.

## Phase 6 — Contest performance and specialisation (Months 20–24 and ongoing)

**Weekly**
- 1–2 rated or virtual contests
- Upsolve every problem that was realistically within reach
- One mixed-topic set with no tags shown
- One implementation / debugging drill
- One spaced-repetition session

**Contest review**
- What was the key observation?
- Which constraint ruled out brute force?
- Why did the intended data structure / algorithm fit?
- Where did time go: modelling, proof, implementation or debugging?
- Can you re-solve it in 20–40 minutes without editorial?

**Rating progression:** use Codeforces/AtCoder rating only as a rough external signal. Do not optimise for rating at the expense of fundamentals. Move difficulty upward gradually and track performance across many contests.

## Weekly training template (15–20 hours)

| Session | Work |
|---|---|
| 3 × 2-hour sessions | Topic learning + 2–3 focused problems |
| 2 × 2-hour sessions | Unseen problems / mixed practice |
| 1 × 3–5-hour session | Contest or virtual contest + upsolving |
| 1 × 1-hour session | Re-solves, notes, mistake-log review |

For a 3-hour study day: 30 min concept/proof, 90 min focused problems, 45 min unseen challenge, 15 min review. On contest days, replace this structure with a timed round and upsolving.

## Problem-solving protocol

1. Restate the problem and constraints.
2. Derive a brute-force solution first.
3. Estimate its complexity against the constraints.
4. Find the bottleneck and the mathematical observation.
5. State the invariant / recurrence / graph model.
6. Prove correctness before coding.
7. Implement and test edge cases.
8. Record complexity, failed attempts and the reusable insight.
9. Re-solve after 1, 7 and 30 days.

## Mastery rule

A topic is not complete because a playlist ended or an editorial made sense. It is complete when you can explain the idea without notes, implement it from memory, prove why it works, analyse complexity, and solve new problems where the technique is not named.
