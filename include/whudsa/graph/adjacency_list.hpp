#pragma once
namespace whudsa {
class AdjacencyListGraph {
public:
    AdjacencyListGraph(int vertexCount,int maxEdges,bool directed=false); ~AdjacencyListGraph();
    int vertexCount() const; void addEdge(int u,int v,int weight=1);
    int firstEdge(int u) const; int nextEdge(int edgeIndex) const; int edgeTo(int edgeIndex) const; int edgeWeight(int edgeIndex) const;
private: // TODO: implement array-style head[] / to[] / next[] / weight[].
};
}
