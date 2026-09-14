#pragma once
namespace whudsa {
class HuffmanTree {
public:
    HuffmanTree(); ~HuffmanTree();
    void build(const char* symbols,const int* weights,int n);
    int weightedPathLength() const;
    bool encode(char symbol,char* outCode,int outCapacity) const;
    bool decode(const char* bits,char* outText,int outCapacity) const;
private: // TODO: design nodes and tree construction; later reuse your BinaryHeap.
};
}
