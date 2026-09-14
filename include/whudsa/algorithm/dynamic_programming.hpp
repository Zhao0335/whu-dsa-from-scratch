#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - knapsackDP：建立容量状态并求 0/1 背包最大总价值。
// - lcsLength：建立二维状态求两个字符串的最长公共子序列长度。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa { int knapsackDP(const int* weight,const int* value,int n,int capacity); int lcsLength(const char* a,const char* b); }
