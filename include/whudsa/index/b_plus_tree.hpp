#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - BPlusTree：B+树，维护内部索引、叶链和关键字值。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - find：查找关键字并通过引用参数返回对应值。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// - rangeQuery：按闭区间遍历叶链，将结果写入输出数组并返回数量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class BPlusTree {
public:
    explicit BPlusTree(int order=4); ~BPlusTree();
    void insert(int key,int value); bool find(int key,int& value) const; bool erase(int key);
    int rangeQuery(int low,int high,int* outKeys,int* outValues,int maxOut) const;
private: // 待完成：设计内部节点、叶节点、叶链，以及分裂/合并策略。
};
}
