#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - UnrolledLinkedList：块状链表对象，维护块容量、分裂和合并。
// - size：返回当前元素数量。
// - get：检查下标后返回对应元素。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// - pushBack：在链表尾部插入元素。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class UnrolledLinkedList {
public:
    explicit UnrolledLinkedList(int blockCapacity = 8);
    ~UnrolledLinkedList();
    int size() const;
    int get(int index) const;
    void insert(int index, int value);
    void erase(int index);
    void pushBack(int value);
private:
    // 待完成：设计块节点表示以及块的分裂/合并策略。
};
}
