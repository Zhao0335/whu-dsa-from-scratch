#pragma once

namespace whudsa {
class BPlusTree {
public:
    explicit BPlusTree(int order = 4);
    ~BPlusTree();
    BPlusTree(const BPlusTree&) = delete;
    BPlusTree& operator=(const BPlusTree&) = delete;

    void insert(int key, int value);                                  // CORE TODO
    bool find(int key, int& value) const;                             // CORE TODO
    bool erase(int key);                                              // CORE TODO
    int rangeQuery(int low, int high, int* outKeys, int* outValues, int maxOut) const; // CORE TODO

private:
    struct Node {
        bool leaf;
        int keyCount;
        int* keys;
        int* values;     // 叶节点使用
        Node** children; // 内部节点使用
        Node* next;      // 叶链
    };
    Node* root_;
    int order_;

    Node* makeNode(bool leaf) const;
    void destroy(Node* node);
    Node* findLeaf(int key) const; // CORE TODO helper
    void splitLeaf(Node* leaf);     // CORE TODO helper
    void splitInternal(Node* node); // CORE TODO helper
    void rebalanceAfterErase(Node* node); // CORE TODO helper
};
}
