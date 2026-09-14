#pragma once

namespace whudsa {
class BitmapIndex {
public:
    explicit BitmapIndex(int bitCount);
    ~BitmapIndex();
    BitmapIndex(const BitmapIndex&) = delete;
    BitmapIndex& operator=(const BitmapIndex&) = delete;

    void set(int index);          // CORE TODO
    void clear(int index);        // CORE TODO
    bool test(int index) const;   // CORE TODO
    int size() const;

private:
    unsigned char* bytes_;
    int bitCount_;
    int byteCount_;
    void checkIndex(int index) const;
};
}
