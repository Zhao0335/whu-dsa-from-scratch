#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - BTree：B树，维护节点关键字、孩子和最小度数。
// - contains：按树的有序性质查找并返回是否存在。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class BTree {
public:
    explicit BTree(int minimumDegree=2); ~BTree();
    bool contains(int key) const; void insert(int key); bool erase(int key);
private: // 待完成：设计节点关键字和孩子，并实现分裂、借关键字和合并。
};
}
