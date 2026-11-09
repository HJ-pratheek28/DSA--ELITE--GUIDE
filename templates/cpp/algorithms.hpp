#pragma once

#include <algorithm>
#include <cassert>
#include <functional>
#include <limits>
#include <numeric>
#include <queue>
#include <utility>
#include <vector>

namespace dsa {

class DisjointSetUnion {
public:
    explicit DisjointSetUnion(int n) : parent_(n), size_(n, 1) {
        std::iota(parent_.begin(), parent_.end(), 0);
    }

    int find(int v) {
        assert(v >= 0 && v < static_cast<int>(parent_.size()));
        if (parent_[v] != v) parent_[v] = find(parent_[v]);
        return parent_[v];
    }

    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return false;
        if (size_[a] < size_[b]) std::swap(a, b);
        parent_[b] = a;
        size_[a] += size_[b];
        return true;
    }

    bool same(int a, int b) { return find(a) == find(b); }

private:
    std::vector<int> parent_;
    std::vector<int> size_;
};

// 1-indexed Fenwick tree. range_sum(l, r) is inclusive.
class FenwickTree {
public:
    explicit FenwickTree(int n) : bit_(n + 1, 0) {}

    void add(int index, long long delta) {
        assert(index > 0 && index < static_cast<int>(bit_.size()));
        for (int i = index; i < static_cast<int>(bit_.size()); i += i & -i) {
            bit_[i] += delta;
        }
    }

    long long prefix_sum(int index) const {
        assert(index >= 0 && index < static_cast<int>(bit_.size()));
        long long result = 0;
        for (int i = index; i > 0; i -= i & -i) result += bit_[i];
        return result;
    }

    long long range_sum(int left, int right) const {
        assert(left >= 1 && left <= right);
        return prefix_sum(right) - prefix_sum(left - 1);
    }

private:
    std::vector<long long> bit_;
};

// Iterative segment tree for range sum on half-open intervals [left, right).
class SegmentTreeSum {
public:
    explicit SegmentTreeSum(const std::vector<long long>& values)
        : size_(1), length_(static_cast<int>(values.size())) {
        while (size_ < static_cast<int>(values.size())) size_ <<= 1;
        tree_.assign(2 * size_, 0);
        for (int i = 0; i < static_cast<int>(values.size()); ++i) {
            tree_[size_ + i] = values[i];
        }
        for (int i = size_ - 1; i > 0; --i) {
            tree_[i] = tree_[2 * i] + tree_[2 * i + 1];
        }
    }

    void set(int index, long long value) {
        assert(index >= 0 && index < length_);
        int p = size_ + index;
        tree_[p] = value;
        while (p > 1) {
            p >>= 1;
            tree_[p] = tree_[2 * p] + tree_[2 * p + 1];
        }
    }

    long long sum(int left, int right) const {
        assert(left >= 0 && left <= right && right <= length_);
        long long result = 0;
        left += size_;
        right += size_;
        while (left < right) {
            if (left & 1) result += tree_[left++];
            if (right & 1) result += tree_[--right];
            left >>= 1;
            right >>= 1;
        }
        return result;
    }

private:
    int size_;
    int length_;
    std::vector<long long> tree_;
};

using WeightedGraph = std::vector<std::vector<std::pair<int, long long>>>;

// Dijkstra requires non-negative edge weights. Returns INF for unreachable nodes.
inline std::vector<long long> dijkstra(const WeightedGraph& graph, int source) {
    const long long inf = std::numeric_limits<long long>::max() / 4;
    const int n = static_cast<int>(graph.size());
    assert(source >= 0 && source < n);

    std::vector<long long> distance(n, inf);
    using State = std::pair<long long, int>;
    std::priority_queue<State, std::vector<State>, std::greater<State>> pq;

    distance[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        const auto [dist, u] = pq.top();
        pq.pop();
        if (dist != distance[u]) continue;

        for (const auto& [v, weight] : graph[u]) {
            assert(weight >= 0);
            if (dist <= inf - weight && dist + weight < distance[v]) {
                distance[v] = dist + weight;
                pq.push({distance[v], v});
            }
        }
    }
    return distance;
}

}  // namespace dsa
