#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - BinaryHeap：二叉最小堆，维护父节点不大于孩子的不变量。
// - size：返回当前元素数量。
// - empty：判断元素数量是否为零。
// - top：读取栈顶元素，不删除它。
// - push：向栈顶或队尾加入元素。
// - pop：删除栈顶或队首元素，空结构时按项目约定处理。
// - build：用输入数组原地或线性时间建立堆。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class BinaryHeap {
public:
    BinaryHeap(); ~BinaryHeap();
    int size() const; bool empty() const; int top() const;
    void push(int value); void pop(); void build(const int* values,int n);
private:
    // 待完成：自行设计内部表示，并明确需要始终维护的不变量。
};
}
