#pragma once
namespace whudsa {
class HashChaining {
public:
    explicit HashChaining(int bucketCount=11); ~HashChaining();
    bool insert(int key,int value); bool erase(int key); bool contains(int key) const; bool get(int key,int& value) const; int size() const;
private: // TODO: design buckets and collision chains without library linked-list containers.
};
}
