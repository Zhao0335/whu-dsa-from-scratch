#include "whudsa/searching/hash_chaining.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
HashChaining::HashChaining(int bucketCount)
    : buckets_(nullptr), bucketCount_(bucketCount > 0 ? bucketCount : 1), size_(0) {
    buckets_ = new Node*[bucketCount_];
    for (int i = 0; i < bucketCount_; ++i) buckets_[i] = nullptr;
}
HashChaining::~HashChaining() {
    for (int i = 0; i < bucketCount_; ++i) {
        Node* p = buckets_[i];
        while (p) { Node* next = p->next; delete p; p = next; }
    }
    delete[] buckets_;
}
int HashChaining::size() const { return size_; }
int HashChaining::bucketIndex(int key) const {
    int x = key % bucketCount_;
    return x < 0 ? x + bucketCount_ : x;
}

// ==================== CORE TODO ====================
bool HashChaining::insert(int key, int value) {
    // 在对应桶链上处理冲突；重复 key 不插入。
    throw std::logic_error("TODO: HashChaining::insert");
}
bool HashChaining::erase(int key) {
    throw std::logic_error("TODO: HashChaining::erase");
}
bool HashChaining::contains(int key) const {
    throw std::logic_error("TODO: HashChaining::contains");
}
bool HashChaining::get(int key, int& value) const {
    throw std::logic_error("TODO: HashChaining::get");
}

}
