#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - DoublyLinkedList：双向链表对象，维护前驱、后继和首尾指针。
// - size：返回当前元素数量。
// - empty：判断元素数量是否为零。
// - pushFront：在链表头部插入元素。
// - pushBack：在链表尾部插入元素。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// - get：检查下标后返回对应元素。
// - getFromBack：从尾部开始按反向下标读取元素。
// - clear：释放或重置元素，保留可复用的容量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    int size() const;
    bool empty() const;
    void pushFront(int value);
    void pushBack(int value);
    void insert(int index, int value);
    void erase(int index);
    int get(int index) const;
    int getFromBack(int reverseIndex) const;
    void clear();
private:
    // 待完成：自行设计节点、头指针和尾指针表示。
};
}
