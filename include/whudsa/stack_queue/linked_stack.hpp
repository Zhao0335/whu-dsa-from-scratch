#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - LinkedStack：链栈对象，维护栈顶节点和元素数量。
// - size：返回当前元素数量。
// - empty：判断元素数量是否为零。
// - top：读取栈顶元素，不删除它。
// - push：向栈顶或队尾加入元素。
// - pop：删除栈顶或队首元素，空结构时按项目约定处理。
// - clear：释放或重置元素，保留可复用的容量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class LinkedStack {
public:
    LinkedStack(); ~LinkedStack();
    int size() const; bool empty() const; int top() const;
    void push(int value); void pop(); void clear();
private: // 待完成：设计链式存储表示。
};
}
