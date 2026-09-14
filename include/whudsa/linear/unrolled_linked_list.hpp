#pragma once
namespace whudsa {
class UnrolledLinkedList {
public:
    explicit UnrolledLinkedList(int blockCapacity = 8);
    ~UnrolledLinkedList();
    int size() const;
    int get(int index) const;
    void insert(int index, int value);
    void erase(int index);
    void pushBack(int value);
private:
    // TODO: design block node representation and split/merge policy.
};
}
