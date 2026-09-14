#include "whudsa/graph/adjacency_list.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
AdjacencyListGraph::AdjacencyListGraph(int vertexCount, int maxEdges, bool directed)
    : vertexCount_(vertexCount > 0 ? vertexCount : 0), maxEdges_(maxEdges > 0 ? maxEdges : 1), edgeCount_(0), directed_(directed) {
    head_ = vertexCount_ ? new int[vertexCount_] : nullptr;
    to_ = new int[maxEdges_];
    next_ = new int[maxEdges_];
    weight_ = new int[maxEdges_];
    for (int i = 0; i < vertexCount_; ++i) head_[i] = -1;
}
AdjacencyListGraph::~AdjacencyListGraph() {
    delete[] head_; delete[] to_; delete[] next_; delete[] weight_;
}
int AdjacencyListGraph::vertexCount() const { return vertexCount_; }
void AdjacencyListGraph::checkVertex(int v) const {
    if (v < 0 || v >= vertexCount_) throw std::out_of_range("graph vertex");
}
void AdjacencyListGraph::checkEdge(int e) const {
    if (e < 0 || e >= edgeCount_) throw std::out_of_range("graph edge");
}
int AdjacencyListGraph::firstEdge(int u) const { checkVertex(u); return head_[u]; }
int AdjacencyListGraph::nextEdge(int edgeIndex) const { checkEdge(edgeIndex); return next_[edgeIndex]; }
int AdjacencyListGraph::edgeTo(int edgeIndex) const { checkEdge(edgeIndex); return to_[edgeIndex]; }
int AdjacencyListGraph::edgeWeight(int edgeIndex) const { checkEdge(edgeIndex); return weight_[edgeIndex]; }

// ==================== CORE TODO ====================
void AdjacencyListGraph::addDirectedEdge(int u, int v, int weight) {
    // 用 head_/to_/next_/weight_ 完成一次“头插边”。注意容量。
    throw std::logic_error("TODO: AdjacencyListGraph::addDirectedEdge");
}
void AdjacencyListGraph::addEdge(int u, int v, int weight) {
    // 有向图加一次；无向图加两个方向。
    throw std::logic_error("TODO: AdjacencyListGraph::addEdge");
}

}
