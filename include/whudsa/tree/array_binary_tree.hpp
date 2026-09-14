#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - ArrayBinaryTree：数组二叉树，按 0-based 下标保存节点并跟踪占用。
// - set：检查下标后修改对应元素。
// - get：检查下标后返回对应元素。
// - exists：判断该下标是否保存节点。
// - parentIndex：按数组二叉树公式返回父下标。
// - leftChildIndex：按数组二叉树公式返回左孩子下标。
// - rightChildIndex：按数组二叉树公式返回右孩子下标。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class ArrayBinaryTree {
public:
    explicit ArrayBinaryTree(int capacity=16); ~ArrayBinaryTree();
    void set(int index,int value); int get(int index) const; bool exists(int index) const;
    int parentIndex(int index) const; int leftChildIndex(int index) const; int rightChildIndex(int index) const;
private: // 待完成：采用从 0 开始的数组表示，并维护节点占用状态。
};
}
