#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - binarySearch：在升序数组中二分查找，找不到返回 -1。
// - firstGreaterEqual：用二分查找第一个大于等于目标的位置。
// - lastLessEqual：用二分查找最后一个小于等于目标的位置。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa { int binarySearch(const int* a,int n,int target); int firstGreaterEqual(const int* a,int n,int target); int lastLessEqual(const int* a,int n,int target); }
