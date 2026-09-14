#include "whudsa/graph/shortest_path.hpp"
#include <stdexcept>
namespace whudsa {
// ==================== CORE TODO ====================
void dijkstraSimple(const AdjacencyListGraph& g, int source, int* dist) {
    throw std::logic_error("TODO: dijkstraSimple");
}
void dijkstraHeap(const AdjacencyListGraph& g, int source, int* dist) {
    // 用自己实现的 BinaryHeap/等价手写堆完成优先队列版本。
    throw std::logic_error("TODO: dijkstraHeap");
}
void floydWarshall(int* matrix, int n, int infinity) {
    throw std::logic_error("TODO: floydWarshall");
}
}
