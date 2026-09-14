#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - LinkedString：链式字符串对象，维护字符节点和长度。
// - length：返回字符串长度。
// - charAt：检查下标后返回字符。
// - append：在字符串末尾追加字符或字符串。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class LinkedString {
public:
    LinkedString(); explicit LinkedString(const char* text); ~LinkedString();
    int length() const; char charAt(int index) const;
    void append(char ch); void insert(int index, char ch); void erase(int index);
private: // 待完成：选择逐字符节点或分块链式字符串表示。
};
}
