#pragma once

namespace whudsa {
class BTree {
public:
    explicit BTree(int minimumDegree = 2);
    ~BTree();
    BTree(const BTree&) = delete;
    BTree& operator=(const BTree&) = delete;

    bool contains(int key) const; // CORE TODO
    void insert(int key);         // CORE TODO
    bool erase(int key);          // CORE TODO

private:
    struct Node {
        bool leaf;
        int keyCount;
        int* keys;       // 最多 2*t_-1 个关键字
        Node** children; // 最多 2*t_ 个孩子
    };
    Node* root_;
    int t_;

    Node* makeNode(bool leaf) const;
    void destroy(Node* node);
    void splitChild(Node* parent, int childIndex);            // CORE TODO helper
    void insertNonFull(Node* node, int key);                  // CORE TODO helper
    bool eraseFromNode(Node* node, int key);                  // CORE TODO helper
};
}
