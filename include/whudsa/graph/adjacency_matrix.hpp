#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - AdjacencyMatrixGraph：邻接矩阵图，维护边存在状态和权值。
// - vertexCount：返回图的顶点数量。
// - addEdge：添加边；无向图需要同时维护两个方向。
// - removeEdge：删除边并恢复无边状态。
// - hasEdge：判断两个顶点之间是否存在边。
// - weight：返回指定边的权值。
// - degree：统计指定顶点的度数。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class AdjacencyMatrixGraph {
public:
    explicit AdjacencyMatrixGraph(int vertexCount,bool directed=false); ~AdjacencyMatrixGraph();
    int vertexCount() const; void addEdge(int u,int v,int weight=1); void removeEdge(int u,int v);
    bool hasEdge(int u,int v) const; int weight(int u,int v) const; int degree(int v) const;
private: // 待完成：设计邻接矩阵以及“无边”状态的表示方式。
};
}
