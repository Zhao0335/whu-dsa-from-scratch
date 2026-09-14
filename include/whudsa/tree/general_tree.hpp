#pragma once
namespace whudsa {
class GeneralTree {
public:
    GeneralTree(); ~GeneralTree();
    int addRoot(int value); int addChild(int parentId,int value);
    int nodeCount() const; int childCount(int nodeId) const;
private: // TODO: design child-sibling representation and ids.
};
}
