#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - BinaryTree：普通二叉树，维护根节点并支持多种遍历。
// - insertLevelOrder：按层序找到首个空位置并插入值。
// - size：返回当前元素数量。
// - height：返回根节点高度。
// - leafCount：递归统计没有孩子的节点。
// - preorder：按根、左、右顺序写入输出数组。
// - inorder：按左、根、右顺序写入输出数组。
// - postorder：按左、右、根顺序写入输出数组。
// - levelOrder：使用队列按层序写入输出数组。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class BinaryTree {
public:
    BinaryTree(); ~BinaryTree();
    void insertLevelOrder(int value);
    int size() const; int height() const; int leafCount() const;
    void preorder(int* out, int& outSize) const;
    void inorder(int* out, int& outSize) const;
    void postorder(int* out, int& outSize) const;
    void levelOrder(int* out, int& outSize) const;
private: // 待完成：设计节点、根指针和遍历辅助函数。
};
}
