#include "whudsa/linear/singly_linked_list.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
SinglyLinkedList::SinglyLinkedList() : head_(nullptr), tail_(nullptr), size_(0) {}
SinglyLinkedList::~SinglyLinkedList() { clear(); }
int SinglyLinkedList::size() const { return size_; }
bool SinglyLinkedList::empty() const { return size_ == 0; }

void SinglyLinkedList::checkIndex(int index) const {
    if (index < 0 || index >= size_) throw std::out_of_range("SinglyLinkedList index");
}
void SinglyLinkedList::checkInsertIndex(int index) const {
    if (index < 0 || index > size_) throw std::out_of_range("SinglyLinkedList insert index");
}
int SinglyLinkedList::get(int index) const {
    checkIndex(index);
    Node* p = head_;
    for (int i = 0; i < index; ++i) p = p->next;
    return p->value;
}
void SinglyLinkedList::clear() {
    Node* p = head_;
    while (p) {
        Node* next = p->next;
        delete p;
        p = next;
    }
    head_ = tail_ = nullptr;
    size_ = 0;
}

// ==================== CORE TODO：只写下面这些 ====================
void SinglyLinkedList::pushFront(int value) {
    // 核心：新节点接到 head_ 前面，并处理原空表。
    throw std::logic_error("TODO: SinglyLinkedList::pushFront");
}
void SinglyLinkedList::pushBack(int value) {
    // 核心：接到 tail_ 后面，并处理原空表。
    throw std::logic_error("TODO: SinglyLinkedList::pushBack");
}
void SinglyLinkedList::insert(int index, int value) {
    // 核心：合法位置 [0,size_]；找到前驱后改 next。
    throw std::logic_error("TODO: SinglyLinkedList::insert");
}
void SinglyLinkedList::erase(int index) {
    // 核心：删除目标节点，特别处理删头、删尾和单节点。
    throw std::logic_error("TODO: SinglyLinkedList::erase");
}
bool SinglyLinkedList::removeFirst(int value) {
    // 核心：删除第一个等于 value 的节点；没找到返回 false。
    throw std::logic_error("TODO: SinglyLinkedList::removeFirst");
}
int SinglyLinkedList::find(int value) const {
    // 核心：顺着 next 查找，返回首次下标；找不到 -1。
    throw std::logic_error("TODO: SinglyLinkedList::find");
}
void SinglyLinkedList::reverse() {
    // 核心：原地反转 next 指针，同时维护 head_/tail_。
    throw std::logic_error("TODO: SinglyLinkedList::reverse");
}

}
