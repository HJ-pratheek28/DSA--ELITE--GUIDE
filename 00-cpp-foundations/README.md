# 00 — C++20 Foundations

**Goal:** write correct, efficient and readable C++ under contest constraints. Do not spend months studying every language feature; learn the subset that makes algorithm implementation reliable.

## Sequence

1. Compilation model: source, headers, compiler, linker, executable.
2. Types and expressions: integer ranges, signedness, conversions, overflow.
3. Control flow and functions: scope, pass-by-value, references, const correctness.
4. Arrays and containers: C-style arrays, `std::array`, `std::vector`, `std::string`.
5. Pointers and memory: addresses, pointer arithmetic, lifetime, stack vs heap.
6. References and object lifetime: dangling references, ownership basics.
7. STL containers: vector, deque, list, stack, queue, priority_queue, set, map, unordered_set, unordered_map.
8. Iterators and algorithms: sort, lower_bound, upper_bound, binary_search, reverse, accumulate, min/max.
9. Custom ordering: comparator rules, lambdas, pair and tuple.
10. Classes and structs: constructors, const methods, operator basics.
11. Recursion and call stack.
12. Debugging: compiler warnings, assertions, sanitizers.

## Contest starter

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Solve here.
    return 0;
}
```

Use `long long` when the constraints can exceed 32-bit integer range. Do not use it blindly: derive the maximum possible intermediate value.

## Complexity you must know

- Vector indexing: O(1); append: amortised O(1).
- Sorting: O(n log n).
- Binary search on a sorted range: O(log n).
- Ordered map/set operations: O(log n).
- Unordered map/set: average O(1), worst-case O(n).
- Heap push/pop: O(log n); top: O(1).

Know the assumptions behind each bound.

## Practice checklist

- [ ] Implement vector-based frequency counting.
- [ ] Sort records with a custom comparator.
- [ ] Use lower_bound / upper_bound correctly.
- [ ] Explain iterator invalidation for vector and unordered_map.
- [ ] Explain pointer vs reference and object lifetime.
- [ ] Compile with warnings and sanitizers.
- [ ] Solve 15–20 basic implementation problems without copying.

## Resources

- [LearnCpp](https://www.learncpp.com/)
- [cppreference: C++ language](https://en.cppreference.com/w/cpp/language)
- [cppreference: containers](https://en.cppreference.com/w/cpp/container)
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

**Exit test:** implement common STL workflows from memory, identify overflow and lifetime hazards, and explain the complexity of every container operation you use.
