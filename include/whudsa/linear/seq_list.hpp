#pragma once
namespace whudsa {
class SeqList {
public:
    SeqList();
    explicit SeqList(int initialCapacity);
    SeqList(const SeqList& other);
    SeqList& operator=(const SeqList& other);
    ~SeqList();

    int size() const;
    int capacity() const;
    bool empty() const;
    int get(int index) const;
    void set(int index, int value);
    void pushBack(int value);
    void insert(int index, int value);
    void erase(int index);
    int find(int value) const;
    void clear();

private:
    // TODO: design the internal representation and helper functions yourself.
};
} // namespace whudsa
