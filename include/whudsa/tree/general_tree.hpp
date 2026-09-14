#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - GeneralTree：一般树，使用孩子-兄弟关系和稳定节点编号。
// - addRoot：创建根节点并返回其编号。
// - addChild：在指定父节点下创建孩子并返回新编号。
// - nodeCount：返回节点总数。
// - childCount：统计指定节点的直接孩子数。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class GeneralTree {
public:
    GeneralTree(); ~GeneralTree();
    int addRoot(int value); int addChild(int parentId,int value);
    int nodeCount() const; int childCount(int nodeId) const;
private: // 待完成：设计孩子-兄弟表示以及节点编号规则。
};
}
