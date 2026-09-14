#pragma once
namespace whudsa {
void buildKmpFailure(const char* pattern, int* failure);
int kmpSearch(const char* text, const char* pattern);
}
