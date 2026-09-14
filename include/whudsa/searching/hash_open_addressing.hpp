#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - HashOpenAddressing：开放定址哈希表，维护槽位状态、探查和扩容。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// - contains：按树的有序性质查找并返回是否存在。
// - get：检查下标后返回对应元素。
// - size：返回当前元素数量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class HashOpenAddressing {
public:
    explicit HashOpenAddressing(int capacity=11); ~HashOpenAddressing();
    bool insert(int key,int value); bool erase(int key); bool contains(int key) const; bool get(int key,int& value) const; int size() const;
private: // 待完成：设计哈希函数、槽位状态、探查策略、负载因子和扩容重哈希。
};
}
