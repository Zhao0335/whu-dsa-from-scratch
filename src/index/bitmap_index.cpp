#include "whudsa/index/bitmap_index.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
BitmapIndex::BitmapIndex(int bitCount)
    : bytes_(nullptr), bitCount_(bitCount > 0 ? bitCount : 0), byteCount_((bitCount_ + 7) / 8) {
    bytes_ = byteCount_ ? new unsigned char[byteCount_] : nullptr;
    for (int i = 0; i < byteCount_; ++i) bytes_[i] = 0;
}
BitmapIndex::~BitmapIndex() { delete[] bytes_; }
int BitmapIndex::size() const { return bitCount_; }
void BitmapIndex::checkIndex(int index) const {
    if (index < 0 || index >= bitCount_) throw std::out_of_range("BitmapIndex index");
}

// ==================== CORE TODO ====================
void BitmapIndex::set(int index) {
    // 算出 byte 下标和 bit 偏移，用按位或置 1。
    throw std::logic_error("TODO: BitmapIndex::set");
}
void BitmapIndex::clear(int index) {
    // 用掩码把对应位清 0。
    throw std::logic_error("TODO: BitmapIndex::clear");
}
bool BitmapIndex::test(int index) const {
    throw std::logic_error("TODO: BitmapIndex::test");
}

}
