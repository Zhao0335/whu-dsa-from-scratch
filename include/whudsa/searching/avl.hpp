#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - AVLTree：AVL 树对象，在插入和删除后维护高度平衡。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// - contains：按树的有序性质查找并返回是否存在。
// - height：返回根节点高度。
// - isBalanced：递归检查每个节点左右子树高度差是否不超过 1。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class AVLTree {
public:
    AVLTree(); ~AVLTree();
    bool insert(int value); bool erase(int value); bool contains(int value) const; int height() const; bool isBalanced() const;
private: // 待完成：设计节点、维护高度，并实现 LL/RR/LR/RL 旋转。
};
}
