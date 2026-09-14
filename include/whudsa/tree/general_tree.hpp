#pragma once

namespace whudsa {
class GeneralTree {
public:
    GeneralTree();
    ~GeneralTree();
    GeneralTree(const GeneralTree&) = delete;
    GeneralTree& operator=(const GeneralTree&) = delete;

    int addRoot(int value);                  // CORE TODO
    int addChild(int parentId, int value);   // CORE TODO
    int nodeCount() const;
    int childCount(int nodeId) const;        // CORE TODO

private:
    // 固定采用“孩子-兄弟”表示；id 就是 nodes_ 中的下标。
    struct Node {
        int value;
        int id;
        Node* firstChild;
        Node* nextSibling;
    };
    Node** nodes_;
    int count_;
    int capacity_;
    Node* root_;

    void ensureCapacity(int minCapacity);
    Node* nodeById(int id) const;
};
}
