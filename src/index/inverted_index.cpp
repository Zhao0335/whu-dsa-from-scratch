#include "whudsa/index/inverted_index.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
InvertedIndex::InvertedIndex() : entries_(new Entry[8]), entryCount_(0), entryCapacity_(8) {}
InvertedIndex::~InvertedIndex() {
    for (int i = 0; i < entryCount_; ++i) delete[] entries_[i].docIds;
    delete[] entries_;
}
void InvertedIndex::ensureEntryCapacity(int minCapacity) {
    if (entryCapacity_ >= minCapacity) return;
    int nextCapacity = entryCapacity_ * 2;
    while (nextCapacity < minCapacity) nextCapacity *= 2;
    Entry* next = new Entry[nextCapacity];
    for (int i = 0; i < entryCount_; ++i) next[i] = entries_[i];
    delete[] entries_;
    entries_ = next;
    entryCapacity_ = nextCapacity;
}
void InvertedIndex::ensureDocCapacity(Entry& entry, int minCapacity) {
    if (entry.capacity >= minCapacity) return;
    int nextCapacity = entry.capacity > 0 ? entry.capacity * 2 : 4;
    while (nextCapacity < minCapacity) nextCapacity *= 2;
    int* next = new int[nextCapacity];
    for (int i = 0; i < entry.count; ++i) next[i] = entry.docIds[i];
    delete[] entry.docIds;
    entry.docIds = next;
    entry.capacity = nextCapacity;
}
bool InvertedIndex::sameWord(const char* a, const char* b) {
    int i = 0;
    while (a[i] && b[i] && a[i] == b[i]) ++i;
    return a[i] == b[i];
}
void InvertedIndex::copyWord(char* dst, const char* src, int maxChars) {
    int i = 0;
    for (; i + 1 < maxChars && src[i]; ++i) dst[i] = src[i];
    dst[i] = '\0';
}

// ==================== CORE TODO ====================
void InvertedIndex::addDocument(int docId, const char* text) {
    // 自己做词项切分、查找/创建 Entry，并把 docId 加入倒排表；同一文档同一词项不要重复加入。
    throw std::logic_error("TODO: InvertedIndex::addDocument");
}
int InvertedIndex::search(const char* term, int* outDocIds, int maxOut) const {
    // 找到词项后把文档编号写入输出数组并返回实际写入数量。
    throw std::logic_error("TODO: InvertedIndex::search");
}

}
