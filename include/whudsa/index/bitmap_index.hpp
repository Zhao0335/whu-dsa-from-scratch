#pragma once
namespace whudsa {
class BitmapIndex {
public:
    explicit BitmapIndex(int bitCount); ~BitmapIndex();
    void set(int index); void clear(int index); bool test(int index) const; int size() const;
private: // TODO: pack bits into integer/byte storage.
};
}
