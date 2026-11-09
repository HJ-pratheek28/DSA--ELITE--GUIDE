# Resource Map — What to use, when, and why

This is a deliberately small stack. Do not collect ten tutorials for one topic. Use one primary learning path, one reference, and one problem source.

## The core stack

| Resource | Role | How to use it |
|---|---|---|
| [LearnCpp](https://www.learncpp.com/) | Primary C++ learning resource | Selected chapters for language, STL, pointers, recursion, debugging and safe code |
| [cppreference](https://en.cppreference.com/w/cpp) | C++ reference | Look up exact STL behaviour, complexity guarantees, iterators and C++20 features; not a first tutorial |
| [USACO Guide](https://usaco.guide/) | Primary DSA + CP curriculum | Follow Bronze → Silver → Gold → Platinum; use its lessons, implementations and curated practice |
| [CSES Problem Set](https://cses.fi/problemset/) | Main structured practice set | Work by section in the roadmap; revisit hard problems after a delay |
| [Competitive Programmer's Handbook](https://cses.fi/book/index.php) | Main written CP book | Read alongside the roadmap; free online book by Antti Laaksonen |
| [CP-Algorithms](https://cp-algorithms.com/) | Technical algorithm reference | Use after the first explanation when you need derivations, variants or implementation details |
| [Codeforces](https://codeforces.com/) | Mixed practice + contests | Start with curated topic sets; then use contests and upsolving |
| [AtCoder](https://atcoder.jp/) | High-quality contest practice | Use Beginner Contests for implementation and reasoning; upsolve in order |
| [MIT 6.006](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-fall-2011/) | University-level algorithm foundations | Select lectures/notes for asymptotics, sorting, trees, hashing, graph algorithms and DP |
| [MIT 6.042J](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-spring-2015/) | Proofs and discrete mathematics | Use selectively for induction, invariants, graphs, counting, modular arithmetic and probability |
| [KACTL](https://github.com/kth-competitive-programming/kactl) | Compact advanced code reference | Consult only after understanding the technique; do not copy blindly |

## Topic-to-resource map

| Topic | Primary lesson path | Practice | Reference / deeper study |
|---|---|---|---|
| C++20, STL, debugging | LearnCpp | Small implementation drills | cppreference |
| Complexity, proofs, discrete maths | MIT 6.042J + selected MIT 6.006 | CSES Introductory | MIT notes / CPH |
| Arrays, sorting, binary search | USACO Bronze/Silver | CSES Intro + Sorting and Searching | CPH |
| Two pointers, prefix sums, windows | USACO Silver | CSES Sorting and Searching; Codeforces tags | USACO Guide modules |
| Linked lists, stacks, queues, heaps | USACO Guide / CPH | LeetCode topic sets + custom drills | cppreference STL |
| Recursion, backtracking | USACO Guide | CSES Introductory + selected CSES tasks | MIT 6.006 |
| Trees, BST, LCA | USACO Guide Silver/Gold | CSES Tree Algorithms | CP-Algorithms |
| Greedy | USACO Guide Silver/Gold | CSES Sorting and Searching | CPH |
| Graphs, DSU, MST, shortest paths | USACO Guide Gold | CSES Graph Algorithms | CP-Algorithms |
| Dynamic programming | USACO Guide Gold | CSES Dynamic Programming | CPH + CP-Algorithms |
| Fenwick / segment / sparse table | USACO Guide Gold/Platinum | CSES Range Queries | CP-Algorithms |
| Number theory / combinatorics | USACO Guide Gold | CSES Mathematics | CP-Algorithms |
| String algorithms | USACO Guide / CP-Algorithms | CSES String Algorithms | CP-Algorithms |
| Advanced DP / flow / geometry | USACO Guide Platinum + CP-Algorithms | Codeforces / AtCoder tagged problems | KACTL as code reference |

## How to study from a resource

For each topic:
1. Read/watch one primary explanation.
2. Close the material and write the idea in your own words.
3. Implement the core algorithm from a blank file.
4. Solve 2 easy problems to verify the model.
5. Solve 3–5 medium problems with no hints.
6. Attempt 1–2 harder problems; read hints/editorials only after a serious attempt.
7. Re-implement and re-solve later without looking.

## What not to do

- Do not run Striver A2Z, NeetCode, USACO Guide and CSES as four parallel syllabi. Pick the USACO Guide + CSES spine; use other lists only to fill gaps.
- Do not treat CP-Algorithms as a beginner course. It is a reference.
- Do not start Platinum techniques before Gold-level DP and graph fundamentals.
- Do not count watching an editorial as solving a problem.
- Do not chase a daily problem count. Track independent solves and delayed re-solves.

## Book recommendation

Start with the free [Competitive Programmer's Handbook](https://cses.fi/book/index.php). It is directly aligned with the CSES problem set and competitive programming. Use CLRS or MIT course material selectively when you want a more formal algorithm-design treatment; do not try to read every textbook cover to cover.
