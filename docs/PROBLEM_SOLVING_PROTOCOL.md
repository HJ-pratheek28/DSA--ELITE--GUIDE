# Problem-Solving Protocol

Use this for every non-trivial problem. Do not jump straight to code.

## 1. Decode the task
- Restate input, output and required behaviour.
- List constraints, edge cases and guarantees.
- Identify what the constraints imply about feasible complexity.

## 2. Build a baseline
- Find the simplest correct approach.
- State its time and space complexity.
- If you cannot code it yet, describe it precisely in pseudocode.

## 3. Find the bottleneck
Ask:
- Which operation is repeated unnecessarily?
- Is there overlapping work?
- Is the input ordered or can it be made ordered?
- Is there a useful invariant, monotonic property or graph structure?
- Can preprocessing trade memory for faster queries?

## 4. Derive the improvement
Write the key observation in one or two sentences. Explain why it changes the complexity. Avoid naming a pattern before understanding why it applies.

## 5. Prove correctness
Choose an appropriate proof style:
- Loop invariant
- Induction / structural induction
- Exchange argument
- Contradiction
- Cut or path property
- DP state induction

A proof should connect the algorithm's actions to the required output.

## 6. Analyse
State time complexity and auxiliary space. Include preprocessing and per-query costs separately where relevant. Be explicit about worst-case versus average-case assumptions.

## 7. Implement and test
Test:
- Minimum input
- One element / two elements
- Duplicates and negative values where allowed
- Already sorted and reverse sorted data
- Boundary values
- Maximum constraints
- Adversarial cases for the chosen data structure

Use sanitizers locally when useful: `-fsanitize=address,undefined`.

## 8. Review and retain
After solving, record:
- What clue suggested the technique?
- What was the failed approach?
- What invariant made the solution correct?
- What would make this technique unsuitable?
- When will you re-solve it?

### Stuck protocol

Make a genuine attempt first. If stuck, request only a small hint. Try again. Then inspect the editorial, close it, and reproduce the solution from memory. Log the exact reasoning gap rather than writing “didn't know the trick”.
