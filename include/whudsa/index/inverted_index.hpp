#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - InvertedIndex：倒排索引，维护词项到文档编号集合的映射。
// - addDocument：解析文本中的词项并把文档编号加入对应倒排表。
// - search：查找词项，把匹配文档编号写入输出数组。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class InvertedIndex {
public:
    InvertedIndex(); ~InvertedIndex();
    void addDocument(int docId,const char* text);
    int search(const char* term,int* outDocIds,int maxOut) const;
private: // 待完成：后续复用自己实现的字符串、哈希表和链表结构。
};
}
