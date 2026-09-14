#include "whudsa/graph/topological_sort.hpp"
#include <stdexcept>
namespace whudsa {
// ==================== CORE TODO ====================
bool topologicalSort(const AdjacencyListGraph& g, int* order, int& orderSize) {
    // 计算入度，反复取入度为 0 的顶点；若无法输出全部顶点则有环。
    throw std::logic_error("TODO: topologicalSort");
}
}
