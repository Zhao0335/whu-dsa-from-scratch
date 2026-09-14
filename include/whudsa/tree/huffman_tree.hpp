#pragma once

namespace whudsa {
class HuffmanTree {
public:
    HuffmanTree();
    ~HuffmanTree();
    HuffmanTree(const HuffmanTree&) = delete;
    HuffmanTree& operator=(const HuffmanTree&) = delete;

    void build(const char* symbols, const int* weights, int n); // CORE TODO
    int weightedPathLength() const;                             // CORE TODO
    bool encode(char symbol, char* outCode, int outCapacity) const; // CORE TODO
    bool decode(const char* bits, char* outText, int outCapacity) const; // CORE TODO

private:
    struct Node {
        char symbol;
        int weight;
        Node* left;
        Node* right;
    };
    Node* root_;
    void destroy(Node* node);
};
}
