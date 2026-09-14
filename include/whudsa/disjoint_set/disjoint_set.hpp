#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - DisjointSet：并查集对象，维护父节点、秩或大小。
// - find：查找关键字并通过引用参数返回对应值。
// - unite：按秩或大小合并两个集合。
// - same：比较两个元素的代表元。
// - componentSize：返回元素所在集合的大小。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class DisjointSet {
public:
    explicit DisjointSet(int n); ~DisjointSet();
    int find(int x); void unite(int a,int b); bool same(int a,int b); int componentSize(int x);
private: // 待完成：设计 parent、rank/size 数组，并实现路径压缩。
};
}
