# Contributing

This repository is a personal learning system. Contributions should improve clarity, correctness or practice quality.

## Add a topic
1. Create or update the topic's `README.md`.
2. State prerequisites and learning objectives.
3. Arrange concepts in dependency order.
4. Include intuition, definitions, examples, proofs and complexity.
5. Add a curated practice ladder with direct problem links.
6. Define an exit test.
7. Update `PROGRESS.md` and the main README if navigation changes.

## Add a problem solution
Use `templates/SOLUTION_TEMPLATE.md`. Put code under the relevant topic's `problems/<slug>/` directory. Include a `README.md` or `NOTES.md` with the reasoning and a `solution.cpp` with a complete implementation.

## Commit messages
Use short imperative messages:
- `docs: add binary search notes`
- `feat: add Fenwick tree implementation`
- `fix: handle empty input in linked list solution`
- `refactor: simplify graph traversal template`

## Before committing
- [ ] Links point to original sources.
- [ ] Code compiles as C++20.
- [ ] Complexity is accurate.
- [ ] Proof matches the implementation.
- [ ] Edge cases are considered.
- [ ] Navigation and progress tracker are updated when needed.

Do not add copied editorials or content without attribution. Write explanations in your own words.
