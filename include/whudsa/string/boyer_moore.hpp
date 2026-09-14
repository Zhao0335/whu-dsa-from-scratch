#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - boyerMooreSearch：利用坏字符等规则跳跃比较并返回首次匹配下标。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa { int boyerMooreSearch(const char* text, const char* pattern); }
