# DSA ELITE GUIDE

> Train to solve unfamiliar problems, not to memorise solutions.

A structured, proof-driven roadmap from core programming foundations to advanced algorithms and competitive programming.

**Primary language:** C++20 · **Secondary language:** Python  
**North star:** independent problem solving, rigorous reasoning, implementation fluency and contest performance.

## The training philosophy

Every topic follows the same loop:

**Understand → Brute force → Find the bottleneck → Derive → Prove → Implement → Test → Review**

A problem is not mastered because its accepted solution is understood. It is mastered when you can reproduce the reasoning later, explain why it works, and recognise when the technique applies to a new problem.

## Roadmap

| Phase | Topics | Outcome |
|---|---|---|
| 00 | [C++ foundations](00-cpp-foundations/README.md) | Write reliable modern C++ and use STL confidently |
| 01 | [Mathematics](01-mathematics/README.md) | Discrete maths, combinatorics and number foundations |
| 02 | [Algorithm analysis](02-algorithm-analysis/README.md) | Complexity, recurrences, invariants and proofs |
| 03 | [Arrays and strings](03-arrays-and-strings/README.md) | Master sequence manipulation and subarray reasoning |
| 04 | Searching and sorting | Binary search, sorting and selection |
| 05 | [Problem-solving patterns](05-problem-solving-patterns/README.md) | Two pointers, windows, prefix sums, monotonic structures |
| 06–07 | Linked lists, stacks, queues and heaps | Choose and implement core data structures |
| 08–10 | Recursion, trees, BSTs and greedy | Model recursive state and prove greedy choices |
| 11 | Graphs | Traversal, connectivity, shortest paths, spanning trees, flow |
| 12 | Dynamic programming | State design, transitions, optimisation |
| 13–16 | Advanced data structures and algorithms | Range queries, strings, number theory, geometry and optimisation |
| 17 | Competitive programming | Contest practice, upsolving and performance analysis |

The complete topic checklist lives in [PROGRESS.md](PROGRESS.md). The phase pages will grow into detailed notes, implementations and curated practice sets as each module is developed.

## How to study

1. Read the concept and derive the key idea yourself.
2. Implement the core technique without copying.
3. Solve problems in increasing difficulty.
4. For each problem, write down the brute force, bottleneck, insight, proof and complexity.
5. Re-solve missed problems after 1 day, 1 week and 1 month.
6. Take contests regularly and upsolve every problem you could not solve.

Suggested 3-hour session: 30 min theory/proof, 75 min focused practice, 60 min independent problem, 15 min review. Adjust the time; keep the loop.

## Quality bar for a completed topic

- [ ] Explain the concept without notes.
- [ ] State when the technique is useful and when it is not.
- [ ] Implement the canonical algorithm from memory.
- [ ] Analyse time and auxiliary space complexity.
- [ ] Prove correctness or justify the invariant.
- [ ] Solve unseen problems, including at least one mixed problem.
- [ ] Record mistakes and schedule spaced revision.

## Repository system

- `*/README.md` — concept map, prerequisites and learning sequence.
- `problems/` — problem-specific implementations and reasoning.
- [Problem-solving protocol](docs/PROBLEM_SOLVING_PROTOCOL.md) — repeatable approach.
- [Mistake log](templates/MISTAKE_LOG.md) — turn failed attempts into learning.
- [Solution template](templates/SOLUTION_TEMPLATE.md) — consistent write-ups.
- [Progress tracker](PROGRESS.md) — evidence-based progression.

## High-quality references

- [LearnCpp](https://www.learncpp.com/) — C++ learning sequence.
- [cppreference](https://en.cppreference.com/w/) — language and STL reference.
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines) — safe, effective modern C++.
- [MIT 6.006: Introduction to Algorithms](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/) — algorithmic foundations.
- [MIT 6.042J: Mathematics for Computer Science](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-spring-2015/) — proof and discrete mathematics.
- [CSES Problem Set](https://cses.fi/problemset/) — structured algorithm practice.
- [USACO Guide](https://usaco.guide/) — topic-based explanations and problems.
- [CP-Algorithms](https://cp-algorithms.com/) — competitive-programming reference.
- [Codeforces EDU](https://codeforces.com/edu/courses) — structured training.
- [AtCoder](https://atcoder.jp/) — regular contests and practice.

**Rule:** use editorials as feedback after a serious attempt, not as a substitute for thinking.
