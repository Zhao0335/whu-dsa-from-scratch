#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - maxSubarrayDivideConquer：递归处理左右区间和跨中点区间，返回最大子数组和。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa { int maxSubarrayDivideConquer(const int* a,int n); }
