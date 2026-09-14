#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - BinarySearchTree：二叉搜索树对象，维护左小右大的有序性质。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - contains：按树的有序性质查找并返回是否存在。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// - minimum：沿左链返回最小值。
// - maximum：沿右链返回最大值。
// - size：返回当前元素数量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class BinarySearchTree {
public:
    BinarySearchTree(); ~BinarySearchTree();
    bool insert(int value); bool contains(int value) const; bool erase(int value);
    int minimum() const; int maximum() const; int size() const;
private: // 待完成：设计节点和根指针，并处理删除节点的各种情况。
};
}
