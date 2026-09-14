#pragma once

namespace whudsa {
class UnrolledLinkedList {
public:
    explicit UnrolledLinkedList(int blockCapacity = 8);
    ~UnrolledLinkedList();
    UnrolledLinkedList(const UnrolledLinkedList&) = delete;
    UnrolledLinkedList& operator=(const UnrolledLinkedList&) = delete;

    int size() const;
    int get(int index) const;
    void insert(int index, int value);  // CORE TODO
    void erase(int index);             // CORE TODO
    void pushBack(int value);          // CORE TODO

private:
    struct Node {
        int* values;
        int count;
        Node* next;
    };
    Node* head_;
    int size_;
    int blockCapacity_;

    Node* makeBlock() const;
    Node* locate(int index, int& offset) const;
    void checkIndex(int index) const;
    void checkInsertIndex(int index) const;
};
}
