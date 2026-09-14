#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - naiveMatch：逐位置比较模式串，返回首次匹配下标。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa { int naiveMatch(const char* text, const char* pattern); }
