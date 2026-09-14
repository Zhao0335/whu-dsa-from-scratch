#include "whudsa/string/linked_string.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
LinkedString::LinkedString() : head_(nullptr), tail_(nullptr), length_(0) {}
LinkedString::LinkedString(const char* text) : head_(nullptr), tail_(nullptr), length_(0) {
    if (!text) return;
    for (int i = 0; text[i] != '\0'; ++i) {
        Node* node = new Node{text[i], nullptr};
        if (!head_) head_ = tail_ = node;
        else { tail_->next = node; tail_ = node; }
        ++length_;
    }
}
LinkedString::~LinkedString() { clearNodes(); }
int LinkedString::length() const { return length_; }
void LinkedString::clearNodes() {
    while (head_) {
        Node* next = head_->next;
        delete head_;
        head_ = next;
    }
    tail_ = nullptr;
    length_ = 0;
}

// ==================== CORE TODO ====================
char LinkedString::charAt(int index) const {
    // 检查下标后沿链表走到第 index 个节点。
    throw std::logic_error("TODO: LinkedString::charAt");
}
void LinkedString::append(char ch) {
    // 尾插并维护 tail_/length_。
    throw std::logic_error("TODO: LinkedString::append");
}
void LinkedString::insert(int index, char ch) {
    // 合法位置 [0,length_]，特别处理头尾。
    throw std::logic_error("TODO: LinkedString::insert");
}
void LinkedString::erase(int index) {
    // 特别处理删头、删尾和唯一节点。
    throw std::logic_error("TODO: LinkedString::erase");
}

}
