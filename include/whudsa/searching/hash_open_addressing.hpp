#pragma once

namespace whudsa {
class HashOpenAddressing {
public:
    explicit HashOpenAddressing(int capacity = 11);
    ~HashOpenAddressing();
    HashOpenAddressing(const HashOpenAddressing&) = delete;
    HashOpenAddressing& operator=(const HashOpenAddressing&) = delete;

    bool insert(int key, int value);        // CORE TODO
    bool erase(int key);                    // CORE TODO
    bool contains(int key) const;           // CORE TODO
    bool get(int key, int& value) const;    // CORE TODO
    int size() const;

private:
    // state: 0=空槽，1=占用，2=删除标记。
    struct Slot { int key; int value; unsigned char state; };
    Slot* table_;
    int capacity_;
    int size_;

    int hashIndex(int key) const;
    void ensureCapacity(); // 支撑扩容：避免把时间花在动态数组工程代码上
};
}
