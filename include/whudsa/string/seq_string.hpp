#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - SeqString：顺序字符串对象，维护字符数组、长度和结尾空字符。
// - length：返回字符串长度。
// - empty：判断元素数量是否为零。
// - charAt：检查下标后返回字符。
// - append：在字符串末尾追加字符或字符串。
// - insert：按比较结果插入新值，明确重复值策略并返回成功状态。
// - erase：删除节点并正确处理零个、一个和两个孩子。
// - substring：复制指定范围生成新字符串。
// - compare：按字典序返回比较结果。
// - c_str：返回以空字符结尾且生命周期有效的字符数组。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class SeqString {
public:
    SeqString(); explicit SeqString(const char* text); SeqString(const SeqString& other); SeqString& operator=(const SeqString& other); ~SeqString();
    int length() const; bool empty() const; char charAt(int index) const;
    void append(char ch); void append(const SeqString& other);
    void insert(int index, char ch); void erase(int index, int count = 1);
    SeqString substring(int start, int count) const; int compare(const SeqString& other) const;
    const char* c_str() const;
private: // 待完成：设计字符存储方式以及字符串结尾的空字符策略。
};
}
