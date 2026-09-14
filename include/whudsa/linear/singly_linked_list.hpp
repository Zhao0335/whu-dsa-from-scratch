#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - SinglyLinkedList：单向链表对象，维护头指针和元素数量。
// - size：返回当前元素数量。
// - empty：判断元素数量是否为零。
// - pushFront：在链表头部插入元素。
// - pushBack：在链表尾部插入元素。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// - removeFirst：删除第一个等于目标值的节点并返回是否成功。
// - get：检查下标后返回对应元素。
// - find：查找关键字并通过引用参数返回对应值。
// - reverse：原地反转链表中的节点连接。
// - clear：释放或重置元素，保留可复用的容量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    int size() const;
    bool empty() const;
    void pushFront(int value);
    void pushBack(int value);
    void insert(int index, int value);
    void erase(int index);
    bool removeFirst(int value);
    int get(int index) const;
    int find(int value) const;
    void reverse();
    void clear();
private:
    // 待完成：自行设计节点和链表表示。
};
}
