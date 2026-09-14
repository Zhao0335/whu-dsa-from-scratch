#include "whudsa/graph/traversal.hpp"
#include <stdexcept>
namespace whudsa {
// ==================== CORE TODO ====================
void depthFirstSearch(const AdjacencyListGraph& g, int start, int* order, int& orderSize) {
    // DFS：递归或使用自己的栈；维护 visited。
    throw std::logic_error("TODO: depthFirstSearch");
}
void breadthFirstSearch(const AdjacencyListGraph& g, int start, int* order, int& orderSize) {
    // BFS：使用自己的队列；维护 visited。
    throw std::logic_error("TODO: breadthFirstSearch");
}
}
