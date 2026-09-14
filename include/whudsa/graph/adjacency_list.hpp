#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - AdjacencyListGraph：数组式邻接表图，维护顶点和边数组。
// - vertexCount：返回图的顶点数量。
// - addEdge：添加边；无向图需要同时维护两个方向。
// - firstEdge：返回顶点边链的首个边下标，无边返回约定值。
// - nextEdge：沿边链返回下一个边下标。
// - edgeTo：返回边的终点。
// - edgeWeight：返回边的权值。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class AdjacencyListGraph {
public:
    AdjacencyListGraph(int vertexCount,int maxEdges,bool directed=false); ~AdjacencyListGraph();
    int vertexCount() const; void addEdge(int u,int v,int weight=1);
    int firstEdge(int u) const; int nextEdge(int edgeIndex) const; int edgeTo(int edgeIndex) const; int edgeWeight(int edgeIndex) const;
private: // 待完成：使用数组实现 head[]、to[]、next[] 和 weight[]。
};
}
