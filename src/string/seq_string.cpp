#include "whudsa/string/seq_string.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
static int rawLength(const char* s) {
    if (!s) return 0;
    int n = 0;
    while (s[n] != '\0') ++n;
    return n;
}

SeqString::SeqString() : data_(new char[1]), length_(0), capacity_(1) { data_[0] = '\0'; }
SeqString::SeqString(const char* text) : data_(nullptr), length_(rawLength(text)), capacity_(length_ + 1) {
    data_ = new char[capacity_];
    for (int i = 0; i < length_; ++i) data_[i] = text[i];
    data_[length_] = '\0';
}
SeqString::SeqString(const SeqString& other)
    : data_(new char[other.capacity_]), length_(other.length_), capacity_(other.capacity_) {
    for (int i = 0; i <= length_; ++i) data_[i] = other.data_[i];
}
SeqString& SeqString::operator=(const SeqString& other) {
    if (this == &other) return *this;
    char* next = new char[other.capacity_];
    for (int i = 0; i <= other.length_; ++i) next[i] = other.data_[i];
    delete[] data_;
    data_ = next;
    length_ = other.length_;
    capacity_ = other.capacity_;
    return *this;
}
SeqString::~SeqString() { delete[] data_; }
int SeqString::length() const { return length_; }
bool SeqString::empty() const { return length_ == 0; }
const char* SeqString::c_str() const { return data_; }
void SeqString::checkIndex(int index) const {
    if (index < 0 || index >= length_) throw std::out_of_range("SeqString index");
}
char SeqString::charAt(int index) const { checkIndex(index); return data_[index]; }
void SeqString::ensureCapacity(int minCapacity) {
    if (capacity_ >= minCapacity) return;
    int nextCapacity = capacity_ > 0 ? capacity_ * 2 : 1;
    while (nextCapacity < minCapacity) nextCapacity *= 2;
    char* next = new char[nextCapacity];
    for (int i = 0; i <= length_; ++i) next[i] = data_[i];
    delete[] data_;
    data_ = next;
    capacity_ = nextCapacity;
}

// ==================== CORE TODO ====================
void SeqString::append(char ch) {
    throw std::logic_error("TODO: SeqString::append(char)");
}
void SeqString::append(const SeqString& other) {
    throw std::logic_error("TODO: SeqString::append(string)");
}
void SeqString::insert(int index, char ch) {
    // 合法位置 [0,length_]；从后往前移动，别忘记 '\0'。
    throw std::logic_error("TODO: SeqString::insert");
}
void SeqString::erase(int index, int count) {
    // 删除区间并把后面的字符连同 '\0' 一起前移。
    throw std::logic_error("TODO: SeqString::erase");
}
SeqString SeqString::substring(int start, int count) const {
    throw std::logic_error("TODO: SeqString::substring");
}
int SeqString::compare(const SeqString& other) const {
    throw std::logic_error("TODO: SeqString::compare");
}

}
