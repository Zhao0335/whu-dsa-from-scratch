#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - sequentialSearch：从头到尾查找目标，找不到返回 -1。
// - sequentialSearchSentinel：使用哨兵减少边界判断，并恢复被改写的数组位置。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa { int sequentialSearch(const int* a,int n,int target); int sequentialSearchSentinel(int* a,int n,int target); }
