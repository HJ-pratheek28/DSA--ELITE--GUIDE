# 01 — Mathematics for Algorithms

**Goal:** develop the mathematical language needed to prove algorithms and recognise number/combinatorial structure.

## Sequence

### A. Discrete foundations
- Logic, predicates, quantifiers and set operations
- Functions, relations and equivalence relations
- Direct proof, contrapositive, contradiction
- Mathematical induction and strong induction
- Invariants and well-founded reasoning

### B. Counting
- Sum and product rules
- Permutations and combinations
- Binomial theorem and Pascal identity
- Inclusion-exclusion
- Pigeonhole principle
- Basic recurrence counting

### C. Integer arithmetic
- Divisibility, primes and factorisation
- GCD / LCM and Euclidean algorithm
- Modular arithmetic and congruences
- Modular exponentiation
- Modular inverse and Fermat / Euler theorems (with conditions)

### D. Probability
- Sample spaces and events
- Conditional probability and independence
- Linearity of expectation
- Expected value in simple randomised algorithms

### E. Growth
- Logarithms and exponentials
- Summations and geometric series
- Harmonic series intuition
- Common asymptotic growth rates

## Core identities

`gcd(a,b) = gcd(b, a mod b)`

`lcm(a,b) = |a / gcd(a,b) * b|` — divide before multiplying to reduce overflow risk.

`C(n,k) = C(n,n-k)`

`C(n,k) = C(n-1,k-1) + C(n-1,k)`

## Practice

- Prove the Euclidean algorithm terminates.
- Prove a loop invariant for a prefix sum.
- Count subsets and arrangements under simple constraints.
- Implement gcd, modular exponentiation and sieve of Eratosthenes.
- Solve counting problems before looking up a formula.

## Resources

- [MIT 6.042J — Mathematics for Computer Science](https://ocw.mit.edu/courses/6-042j-mathematics-for-computer-science-spring-2015/)
- [CP-Algorithms](https://cp-algorithms.com/)

**Exit test:** write short correctness proofs using induction, reason about modular operations safely, and solve basic counting problems from first principles.
