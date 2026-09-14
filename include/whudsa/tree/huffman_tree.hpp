#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - HuffmanTree：哈夫曼树，按权重建树并支持编码与解码。
// - build：用输入数组原地或线性时间建立堆。
// - weightedPathLength：计算所有叶子的权重乘路径长度之和。
// - encode：查找字符编码，写入缓冲区并保证结尾空字符。
// - decode：沿树读取比特并写出字符，检查输出容量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class HuffmanTree {
public:
    HuffmanTree(); ~HuffmanTree();
    void build(const char* symbols,const int* weights,int n);
    int weightedPathLength() const;
    bool encode(char symbol,char* outCode,int outCapacity) const;
    bool decode(const char* bits,char* outText,int outCapacity) const;
private: // 待完成：设计节点和建树过程，后续复用自己实现的 BinaryHeap。
};
}
