#include "whudsa/searching/hash_open_addressing.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
HashOpenAddressing::HashOpenAddressing(int capacity)
    : table_(nullptr), capacity_(capacity > 2 ? capacity : 3), size_(0) {
    table_ = new Slot[capacity_];
    for (int i = 0; i < capacity_; ++i) table_[i].state = 0;
}
HashOpenAddressing::~HashOpenAddressing() { delete[] table_; }
int HashOpenAddressing::size() const { return size_; }
int HashOpenAddressing::hashIndex(int key) const {
    int x = key % capacity_;
    return x < 0 ? x + capacity_ : x;
}
void HashOpenAddressing::ensureCapacity() {
    if ((size_ + 1) * 10 < capacity_ * 7) return;
    int oldCapacity = capacity_;
    Slot* old = table_;
    capacity_ = capacity_ * 2 + 1;
    table_ = new Slot[capacity_];
    for (int i = 0; i < capacity_; ++i) table_[i].state = 0;
    for (int i = 0; i < oldCapacity; ++i) {
        if (old[i].state != 1) continue;
        int pos = old[i].key % capacity_; if (pos < 0) pos += capacity_;
        while (table_[pos].state == 1) pos = (pos + 1) % capacity_;
        table_[pos] = old[i];
    }
    delete[] old;
}

// ==================== CORE TODO ====================
bool HashOpenAddressing::insert(int key, int value) {
    // 调 ensureCapacity；线性探查；记住第一个 deleted；重复 key 不插入。
    throw std::logic_error("TODO: HashOpenAddressing::insert");
}
bool HashOpenAddressing::erase(int key) {
    // 找到后标记为 deleted，不能直接变成 empty。
    throw std::logic_error("TODO: HashOpenAddressing::erase");
}
bool HashOpenAddressing::contains(int key) const {
    throw std::logic_error("TODO: HashOpenAddressing::contains");
}
bool HashOpenAddressing::get(int key, int& value) const {
    throw std::logic_error("TODO: HashOpenAddressing::get");
}

}
