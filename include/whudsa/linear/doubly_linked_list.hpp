#pragma once

namespace whudsa {
class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    DoublyLinkedList(const DoublyLinkedList&) = delete;
    DoublyLinkedList& operator=(const DoublyLinkedList&) = delete;

    int size() const;
    bool empty() const;
    void pushFront(int value);          // CORE TODO
    void pushBack(int value);           // CORE TODO
    void insert(int index, int value);  // CORE TODO
    void erase(int index);              // CORE TODO
    int get(int index) const;
    int getFromBack(int reverseIndex) const; // CORE TODO
    void clear();

private:
    struct Node {
        int value;
        Node* prev;
        Node* next;
    };
    Node* head_;
    Node* tail_;
    int size_;

    void checkIndex(int index) const;
    void checkInsertIndex(int index) const;
};
}
