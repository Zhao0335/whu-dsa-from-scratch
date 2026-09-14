#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - HashChaining：拉链法哈希表，维护桶数组和冲突链。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// - contains：按树的有序性质查找并返回是否存在。
// - get：检查下标后返回对应元素。
// - size：返回当前元素数量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class HashChaining {
public:
    explicit HashChaining(int bucketCount=11); ~HashChaining();
    bool insert(int key,int value); bool erase(int key); bool contains(int key) const; bool get(int key,int& value) const; int size() const;
private: // 待完成：设计桶和冲突链，不得使用库提供的链表容器。
};
}
