#include "algorithms.hpp"

#include <cassert>
#include <vector>

int main() {
    dsa::DisjointSetUnion dsu(5);
    assert(dsu.unite(0, 1));
    assert(dsu.unite(1, 2));
    assert(dsu.same(0, 2));
    assert(!dsu.same(0, 4));

    dsa::FenwickTree fenwick(5);
    fenwick.add(1, 4);
    fenwick.add(3, 7);
    fenwick.add(5, -2);
    assert(fenwick.prefix_sum(3) == 11);
    assert(fenwick.range_sum(3, 5) == 5);

    dsa::SegmentTreeSum segment_tree({2, 1, 3, 4});
    assert(segment_tree.sum(1, 4) == 8);
    segment_tree.set(2, 10);
    assert(segment_tree.sum(0, 3) == 13);

    dsa::WeightedGraph graph(4);
    graph[0] = {{1, 4}, {2, 1}};
    graph[2] = {{1, 2}, {3, 8}};
    graph[1] = {{3, 3}};
    const auto distance = dsa::dijkstra(graph, 0);
    assert(distance[0] == 0);
    assert(distance[1] == 3);
    assert(distance[3] == 6);
    return 0;
}
