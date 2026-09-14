#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - BinomialHeap：二项堆，维护根链和各阶树唯一性。
// - size：返回当前元素数量。
// - empty：判断元素数量是否为零。
// - top：读取栈顶元素，不删除它。
// - push：向栈顶或队尾加入元素。
// - pop：删除栈顶或队首元素，空结构时按项目约定处理。
// - merge：合并两个堆并正确处理被合并堆的状态。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class BinomialHeap {
public:
    BinomialHeap(); ~BinomialHeap();
    int size() const; bool empty() const; int top() const;
    void push(int value); void pop(); void merge(BinomialHeap& other);
private:
    // 待完成：自行设计内部表示，并明确需要始终维护的不变量。
};
}
