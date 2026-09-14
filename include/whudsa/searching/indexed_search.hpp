#pragma once
namespace whudsa {
// CORE TODO：先定位索引块，再在块内顺序查找。
int indexedSearch(const int* data, int n, const int* blockMax, const int* blockStart, int blockCount, int target);
}
