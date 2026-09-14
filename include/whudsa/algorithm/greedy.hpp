#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - intervalScheduling：按结束时间选择不相交区间并返回最多数量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa { int intervalScheduling(const int* start,const int* end,int n); }
