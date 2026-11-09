# DSA — ELITE GUIDE

<p align="center">
  <strong>A systematic training ground for algorithmic problem solving.</strong><br/>
  From fundamentals to advanced algorithms, with proofs, implementations, deliberate practice and measurable mastery.
</p>

<p align="center">
  <img alt="Language" src="https://img.shields.io/badge/Language-C%2B%2B20-00599C?logo=cplusplus&logoColor=white"/>
  <img alt="Focus" src="https://img.shields.io/badge/Focus-DSA%20%7C%20CP-7C3AED"/>
  <img alt="Learning" src="https://img.shields.io/badge/Method-Proof--driven-0F766E"/>
  <img alt="Status" src="https://img.shields.io/badge/Status-Actively%20building-orange"/>
</p>

<p align="center">
  <a href="#-start-here">Start here</a> ·
  <a href="#-curriculum">Curriculum</a> ·
  <a href="#-repository-map">Repository map</a> ·
  <a href="#-standards">Standards</a>
</p>

---

## 🎯 Mission

Build the ability to solve **unfamiliar algorithmic problems independently**. This is not a dump of copied solutions or a checklist of videos watched. Every topic should connect mathematical reasoning, algorithm design, proof, implementation and practice.

**Primary language:** C++20  
**Secondary language:** Python for experiments, quick validation and alternative implementations.  
**Long-term direction:** strong algorithmic fundamentals and competitive programming. Rating targets are milestones, never substitutes for skill.

## 🚀 Start here

1. Read the [problem-solving protocol](docs/PROBLEM_SOLVING_PROTOCOL.md).
2. Follow the [24-month master roadmap](docs/ROADMAP.md).
3. Use the [curated resource map](docs/RESOURCE_MAP.md) and [problem ladder](docs/PROBLEM_LADDER.md) for exact learning materials and practice.
4. Begin with [C++20 foundations](00-cpp-foundations/README.md), unless you can already pass its exit test.
5. Track evidence in [PROGRESS.md](PROGRESS.md).
6. Use the [solution write-up template](templates/SOLUTION_TEMPLATE.md) for every meaningful problem.

## 🧭 Learning system

- [24-month master roadmap](docs/ROADMAP.md) — phases, month-by-month milestones, weekly schedule and mastery gates.
- [Resource map](docs/RESOURCE_MAP.md) — the primary course/book, reference and practice platform for each topic.
- [Curated problem ladder](docs/PROBLEM_LADDER.md) — sequenced CSES problems and contest practice.
- [Progress tracker](PROGRESS.md) — evidence-based completion, not passive checklisting.

## 🧭 Curriculum

| # | Module | Core outcome |
|---:|---|---|
| 00 | [C++20 Foundations](00-cpp-foundations/README.md) | Reliable language, STL, memory and implementation |
| 01 | [Mathematics](01-mathematics/README.md) | Discrete maths, counting, probability and number basics |
| 02 | [Algorithm Analysis](02-algorithm-analysis/README.md) | Complexity, recurrences, invariants and proofs |
| 03 | [Arrays & Strings](03-arrays-and-strings/README.md) | Sequence reasoning, prefix methods and frequency tools |
| 04 | [Searching & Sorting](04-searching-and-sorting/README.md) | Sorting, binary search, selection and search-space reduction |
| 05 | [Problem-Solving Patterns](05-problem-solving-patterns/README.md) | Two pointers, windows, monotonic structures and more |
| 06 | [Linked Lists](06-linked-lists/README.md) | Pointer manipulation and linked structure invariants |
| 07 | [Stacks, Queues & Heaps](07-stacks-queues-heaps/README.md) | Linear ADTs, monotonic structures and priority queues |
| 08 | [Recursion & Backtracking](08-recursion-backtracking/README.md) | State-space search, pruning and recursion trees |
| 09 | [Trees & BSTs](09-trees-and-bst/README.md) | Traversals, tree DP, LCA and structural reasoning |
| 10 | [Greedy Algorithms](10-greedy/README.md) | Exchange arguments, scheduling and matroids intuition |
| 11 | [Graph Algorithms](11-graphs/README.md) | Traversal, connectivity, shortest paths, MST and flow |
| 12 | [Dynamic Programming](12-dynamic-programming/README.md) | State design, transitions, proofs and optimisation |
| 13 | [Advanced Data Structures](13-advanced-data-structures/README.md) | Range queries, persistence and specialised structures |
| 14 | [String Algorithms](14-string-algorithms/README.md) | Pattern matching, tries, hashing and suffix structures |
| 15 | [Number Theory](15-number-theory/README.md) | Modular arithmetic, primes, inverses and combinatorics |
| 16 | [Advanced Algorithms](16-advanced-algorithms/README.md) | Flows, geometry, FFT/NTT and optimisation techniques |
| 17 | [Competitive Programming](17-competitive-programming/README.md) | Contest execution, upsolving and rating progression |

**Progress:** use the [topic mastery tracker](PROGRESS.md). A module is complete only when its exit criteria are demonstrated on unseen problems.

## 🗂️ Repository map

```text
DSA--ELITE--GUIDE/
├── 00-cpp-foundations/
├── 01-mathematics/
├── 02-algorithm-analysis/
├── 03-arrays-and-strings/
├── 04-searching-and-sorting/
├── 05-problem-solving-patterns/
├── 06-linked-lists/
├── 07-stacks-queues-heaps/
├── 08-recursion-backtracking/
├── 09-trees-and-bst/
├── 10-greedy/
├── 11-graphs/
├── 12-dynamic-programming/
├── 13-advanced-data-structures/
├── 14-string-algorithms/
├── 15-number-theory/
├── 16-advanced-algorithms/
├── 17-competitive-programming/
├── docs/
├── templates/
├── .github/
├── .editorconfig
├── .gitignore
├── CONTRIBUTING.md
├── PROGRESS.md
└── README.md
```

## 🧠 The problem-solving system

**Understand → Model → Brute force → Find the bottleneck → Derive → Prove → Implement → Test → Review**

For each problem, document:
- The constraints and feasible complexity
- The brute-force baseline and its bottleneck
- The key observation and invariant
- A correctness argument
- Time and auxiliary-space complexity
- Edge cases and adversarial tests
- What you learned and when you will re-solve it

Full process: [Problem-solving protocol](docs/PROBLEM_SOLVING_PROTOCOL.md).

## 📏 Standards

- **No unexplained code:** every solution needs a concise reasoning note.
- **No pattern guessing:** explain the condition that makes a technique valid.
- **No complexity hand-waving:** analyse the actual operations and constraints.
- **No sample-only testing:** test boundaries, duplicates and adversarial cases.
- **No fake progress:** mark mastery only after independent re-solves.
- **C++20 first:** readable, warning-clean code; avoid undefined behaviour and overflow.
- **Cite problem sources:** include the original platform and problem URL in each write-up.

See [contribution standards](CONTRIBUTING.md) and [quality checklist](docs/QUALITY_STANDARDS.md).

## 📚 Curated references

| Resource | Best use |
|---|---|
| [LearnCpp](https://www.learncpp.com/) | C++ language foundations |
| [cppreference](https://en.cppreference.com/w/) | Precise language and STL reference |
| [MIT 6.006](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/) | Algorithm design and analysis |
| [MIT 6.042J](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-spring-2015/) | Proofs and discrete mathematics |
| [CSES Problem Set](https://cses.fi/problemset/) | Structured algorithm practice |
| [USACO Guide](https://usaco.guide/) | Topic-based explanations and problem ladders |
| [CP-Algorithms](https://cp-algorithms.com/) | Competitive programming reference |
| [Codeforces EDU](https://codeforces.com/edu/courses) | Structured CP training |
| [AtCoder](https://atcoder.jp/) | Contests and implementation practice |
| [KACTL](https://github.com/kth-competitive-programming/kactl) | Compact reference implementations |

## 🤝 Contributing to your own knowledge base

This repository is designed to evolve. Follow [CONTRIBUTING.md](CONTRIBUTING.md) when adding notes, solutions or modules. Prefer small, focused commits with descriptive messages.

---

<p align="center">
  <sub>Built for depth, consistency and independent thinking. Learn the idea. Prove the idea. Implement the idea.</sub>
</p>
