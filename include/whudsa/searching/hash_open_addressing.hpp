#pragma once
namespace whudsa {
class HashOpenAddressing {
public:
    explicit HashOpenAddressing(int capacity=11); ~HashOpenAddressing();
    bool insert(int key,int value); bool erase(int key); bool contains(int key) const; bool get(int key,int& value) const; int size() const;
private: // TODO: hash function, states, probing, load factor, rehash.
};
}
