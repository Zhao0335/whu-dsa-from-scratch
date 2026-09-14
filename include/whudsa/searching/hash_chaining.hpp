#pragma once

namespace whudsa {
class HashChaining {
public:
    explicit HashChaining(int bucketCount = 11);
    ~HashChaining();
    HashChaining(const HashChaining&) = delete;
    HashChaining& operator=(const HashChaining&) = delete;

    bool insert(int key, int value);       // CORE TODO
    bool erase(int key);                   // CORE TODO
    bool contains(int key) const;          // CORE TODO
    bool get(int key, int& value) const;   // CORE TODO
    int size() const;

private:
    struct Node { int key; int value; Node* next; };
    Node** buckets_;
    int bucketCount_;
    int size_;
    int bucketIndex(int key) const;
};
}
