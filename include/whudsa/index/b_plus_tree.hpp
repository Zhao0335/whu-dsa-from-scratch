#pragma once
namespace whudsa {
class BPlusTree {
public:
    explicit BPlusTree(int order=4); ~BPlusTree();
    void insert(int key,int value); bool find(int key,int& value) const; bool erase(int key);
    int rangeQuery(int low,int high,int* outKeys,int* outValues,int maxOut) const;
private: // TODO: internal/leaf nodes, leaf links, split/merge policy.
};
}
