#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - subsetSumEnumeration：枚举所有子集，存在目标和时返回成功约定值。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa { int subsetSumEnumeration(const int* a,int n,int target); }
