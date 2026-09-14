#include "whudsa/linear/seq_list.hpp"

#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================

SeqList::SeqList() : SeqList(4) {}

SeqList::SeqList(int initialCapacity)
    : data_(nullptr), size_(0), capacity_(initialCapacity > 0 ? initialCapacity : 1) {
    data_ = new int[capacity_];
}

SeqList::SeqList(const SeqList& other)
    : data_(new int[other.capacity_]), size_(other.size_), capacity_(other.capacity_) {
    for (int i = 0; i < size_; ++i) {
        data_[i] = other.data_[i];
    }
}

SeqList& SeqList::operator=(const SeqList& other) {
    if (this == &other) {
        return *this;
    }

    int* newData = new int[other.capacity_];
    for (int i = 0; i < other.size_; ++i) {
        newData[i] = other.data_[i];
    }

    delete[] data_;
    data_ = newData;
    size_ = other.size_;
    capacity_ = other.capacity_;
    return *this;
}

SeqList::~SeqList() {
    delete[] data_;
}

int SeqList::size() const {
    return size_;
}

int SeqList::capacity() const {
    return capacity_;
}

bool SeqList::empty() const {
    return size_ == 0;
}

int SeqList::get(int index) const {
    if (index < 0 || index >= size_) {
        throw std::out_of_range("SeqList::get index out of range");
    }
    return data_[index];
}

void SeqList::set(int index, int value) {
    if (index < 0 || index >= size_) {
        throw std::out_of_range("SeqList::set index out of range");
    }
    data_[index] = value;
}

void SeqList::clear() {
    size_ = 0;
}

void SeqList::ensureCapacity(int minCapacity) {
    if (capacity_ >= minCapacity) {
        return;
    }

    int newCapacity = capacity_ > 0 ? capacity_ * 2 : 1;
    while (newCapacity < minCapacity) {
        newCapacity *= 2;
    }

    int* newData = new int[newCapacity];
    for (int i = 0; i < size_; ++i) {
        newData[i] = data_[i];
    }

    delete[] data_;
    data_ = newData;
    capacity_ = newCapacity;
}

// ==================== CORE TODO：只写下面 4 个函数 ====================

void SeqList::pushBack(int value) {
    // TODO:
    // 1. 保证至少还有 1 个位置可写（可直接调用 ensureCapacity）
    // 2. 把 value 放到表尾
    // 3. 更新 size_
    throw std::logic_error("TODO: SeqList::pushBack");
}

void SeqList::insert(int index, int value) {
    // TODO:
    // 1. 合法插入位置为 [0, size_]
    // 2. 必要时扩容
    // 3. 从后往前搬移元素
    // 4. 写入 value 并更新 size_
    throw std::logic_error("TODO: SeqList::insert");
}

void SeqList::erase(int index) {
    // TODO:
    // 1. 合法删除位置为 [0, size_)
    // 2. 从前往后覆盖被删除位置
    // 3. 更新 size_
    throw std::logic_error("TODO: SeqList::erase");
}

int SeqList::find(int value) const {
    // TODO:
    // 从左到右顺序查找，返回第一次出现的位置；找不到返回 -1。
    throw std::logic_error("TODO: SeqList::find");
}

} // namespace whudsa
