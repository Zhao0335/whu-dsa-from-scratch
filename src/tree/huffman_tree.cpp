#include "whudsa/tree/huffman_tree.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
HuffmanTree::HuffmanTree() : root_(nullptr) {}
HuffmanTree::~HuffmanTree() { destroy(root_); }
void HuffmanTree::destroy(Node* node) {
    if (!node) return;
    destroy(node->left);
    destroy(node->right);
    delete node;
}

// ==================== CORE TODO ====================
void HuffmanTree::build(const char* symbols, const int* weights, int n) {
    // 反复取两个最小权节点合并；第一遍可直接手写选择，之后再复用自己的堆。
    throw std::logic_error("TODO: HuffmanTree::build");
}
int HuffmanTree::weightedPathLength() const {
    throw std::logic_error("TODO: HuffmanTree::weightedPathLength");
}
bool HuffmanTree::encode(char symbol, char* outCode, int outCapacity) const {
    throw std::logic_error("TODO: HuffmanTree::encode");
}
bool HuffmanTree::decode(const char* bits, char* outText, int outCapacity) const {
    throw std::logic_error("TODO: HuffmanTree::decode");
}

}
