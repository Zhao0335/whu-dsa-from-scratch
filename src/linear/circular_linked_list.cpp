#include "whudsa/linear/circular_linked_list.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
CircularLinkedList::CircularLinkedList() : tail_(nullptr), size_(0) {}
CircularLinkedList::~CircularLinkedList() { clear(); }
int CircularLinkedList::size() const { return size_; }
bool CircularLinkedList::empty() const { return size_ == 0; }
void CircularLinkedList::checkIndex(int index) const {
    if (index < 0 || index >= size_) throw std::out_of_range("CircularLinkedList index");
}
void CircularLinkedList::checkInsertIndex(int index) const {
    if (index < 0 || index > size_) throw std::out_of_range("CircularLinkedList insert index");
}
int CircularLinkedList::get(int index) const {
    checkIndex(index);
    Node* p = tail_->next;
    for (int i = 0; i < index; ++i) p = p->next;
    return p->value;
}
void CircularLinkedList::clear() {
    if (!tail_) return;
    Node* head = tail_->next;
    tail_->next = nullptr;
    while (head) {
        Node* next = head->next;
        delete head;
        head = next;
    }
    tail_ = nullptr;
    size_ = 0;
}

// ==================== CORE TODO ====================
void CircularLinkedList::pushBack(int value) {
    // 空表时新节点 next 指向自己；否则插到 tail_ 与 head 之间。
    throw std::logic_error("TODO: CircularLinkedList::pushBack");
}
void CircularLinkedList::insert(int index, int value) {
    // 合法位置 [0,size_]；插头/插尾后仍保持环闭合。
    throw std::logic_error("TODO: CircularLinkedList::insert");
}
void CircularLinkedList::erase(int index) {
    // 删除后处理单节点、头节点和尾节点，并保持环闭合。
    throw std::logic_error("TODO: CircularLinkedList::erase");
}

}
