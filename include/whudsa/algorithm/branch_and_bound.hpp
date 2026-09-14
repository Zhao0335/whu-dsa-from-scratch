#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - knapsackBranchAndBound：用上界剪枝求 0/1 背包最大总价值。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa { int knapsackBranchAndBound(const int* weight,const int* value,int n,int capacity); }
