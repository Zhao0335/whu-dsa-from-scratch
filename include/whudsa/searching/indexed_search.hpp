#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - indexedSearch：先按索引表定位数据块，再在块内查找目标。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa { int indexedSearch(const int* data,int n,const int* blockMax,const int* blockStart,int blockCount,int target); }
