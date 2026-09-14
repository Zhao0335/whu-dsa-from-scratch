#pragma once
namespace whudsa {
class InvertedIndex {
public:
    InvertedIndex(); ~InvertedIndex();
    void addDocument(int docId,const char* text);
    int search(const char* term,int* outDocIds,int maxOut) const;
private: // TODO: later reuse your own string/hash/list structures.
};
}
