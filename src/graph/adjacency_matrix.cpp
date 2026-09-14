#include "whudsa/graph/adjacency_matrix.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
AdjacencyMatrixGraph::AdjacencyMatrixGraph(int vertexCount, bool directed)
    : vertexCount_(vertexCount > 0 ? vertexCount : 0), directed_(directed), weights_(nullptr), present_(nullptr) {
    int n = vertexCount_ * vertexCount_;
    weights_ = n ? new int[n] : nullptr;
    present_ = n ? new bool[n] : nullptr;
    for (int i = 0; i < n; ++i) { weights_[i] = 0; present_[i] = false; }
}
AdjacencyMatrixGraph::~AdjacencyMatrixGraph() {
    delete[] weights_;
    delete[] present_;
}
int AdjacencyMatrixGraph::vertexCount() const { return vertexCount_; }
void AdjacencyMatrixGraph::checkVertex(int v) const {
    if (v < 0 || v >= vertexCount_) throw std::out_of_range("graph vertex");
}
int AdjacencyMatrixGraph::indexOf(int u, int v) const { return u * vertexCount_ + v; }

// ==================== CORE TODO ====================
void AdjacencyMatrixGraph::addEdge(int u, int v, int weight) {
    // 有向图写一个方向；无向图写两个方向。
    throw std::logic_error("TODO: AdjacencyMatrixGraph::addEdge");
}
void AdjacencyMatrixGraph::removeEdge(int u, int v) {
    throw std::logic_error("TODO: AdjacencyMatrixGraph::removeEdge");
}
bool AdjacencyMatrixGraph::hasEdge(int u, int v) const {
    throw std::logic_error("TODO: AdjacencyMatrixGraph::hasEdge");
}
int AdjacencyMatrixGraph::weight(int u, int v) const {
    throw std::logic_error("TODO: AdjacencyMatrixGraph::weight");
}
int AdjacencyMatrixGraph::degree(int v) const {
    throw std::logic_error("TODO: AdjacencyMatrixGraph::degree");
}

}
