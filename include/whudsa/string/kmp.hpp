#pragma once
namespace whudsa {
// CORE TODO：先构造 failure/next，再完成 KMP 匹配。
void buildKmpFailure(const char* pattern, int* failure);
int kmpSearch(const char* text, const char* pattern);
}
