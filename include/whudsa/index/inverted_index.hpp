#pragma once

namespace whudsa {
class InvertedIndex {
public:
    InvertedIndex();
    ~InvertedIndex();
    InvertedIndex(const InvertedIndex&) = delete;
    InvertedIndex& operator=(const InvertedIndex&) = delete;

    void addDocument(int docId, const char* text);                    // CORE TODO
    int search(const char* term, int* outDocIds, int maxOut) const;  // CORE TODO

private:
    struct Entry {
        char term[64];
        int* docIds;
        int count;
        int capacity;
    };
    Entry* entries_;
    int entryCount_;
    int entryCapacity_;

    void ensureEntryCapacity(int minCapacity);
    void ensureDocCapacity(Entry& entry, int minCapacity);
    static bool sameWord(const char* a, const char* b);
    static void copyWord(char* dst, const char* src, int maxChars);
};
}
