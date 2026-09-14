#pragma once

namespace whudsa {
class AdjacencyListGraph {
public:
    AdjacencyListGraph(int vertexCount, int maxEdges, bool directed = false);
    ~AdjacencyListGraph();
    AdjacencyListGraph(const AdjacencyListGraph&) = delete;
    AdjacencyListGraph& operator=(const AdjacencyListGraph&) = delete;

    int vertexCount() const;
    void addEdge(int u, int v, int weight = 1); // CORE TODO

    // 下面四个是给 DFS/BFS/最短路读取邻接表的支撑接口，不要求默写。
    int firstEdge(int u) const;
    int nextEdge(int edgeIndex) const;
    int edgeTo(int edgeIndex) const;
    int edgeWeight(int edgeIndex) const;

private:
    int vertexCount_;
    int maxEdges_;
    int edgeCount_;
    bool directed_;
    int* head_;
    int* to_;
    int* next_;
    int* weight_;

    void checkVertex(int v) const;
    void checkEdge(int e) const;
    void addDirectedEdge(int u, int v, int weight); // CORE TODO helper
};
}
