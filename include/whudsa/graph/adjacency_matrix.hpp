#pragma once
namespace whudsa {
class AdjacencyMatrixGraph {
public:
    explicit AdjacencyMatrixGraph(int vertexCount,bool directed=false); ~AdjacencyMatrixGraph();
    int vertexCount() const; void addEdge(int u,int v,int weight=1); void removeEdge(int u,int v);
    bool hasEdge(int u,int v) const; int weight(int u,int v) const; int degree(int v) const;
private: // TODO: design matrix and no-edge representation.
};
}
