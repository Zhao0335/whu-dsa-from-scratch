#pragma once

namespace whudsa {
class AdjacencyMatrixGraph {
public:
    explicit AdjacencyMatrixGraph(int vertexCount, bool directed = false);
    ~AdjacencyMatrixGraph();
    AdjacencyMatrixGraph(const AdjacencyMatrixGraph&) = delete;
    AdjacencyMatrixGraph& operator=(const AdjacencyMatrixGraph&) = delete;

    int vertexCount() const;
    void addEdge(int u, int v, int weight = 1); // CORE TODO
    void removeEdge(int u, int v);              // CORE TODO
    bool hasEdge(int u, int v) const;           // CORE TODO
    int weight(int u, int v) const;             // CORE TODO
    int degree(int v) const;                    // CORE TODO

private:
    int vertexCount_;
    bool directed_;
    int* weights_;
    bool* present_;
    void checkVertex(int v) const;
    int indexOf(int u, int v) const;
};
}
