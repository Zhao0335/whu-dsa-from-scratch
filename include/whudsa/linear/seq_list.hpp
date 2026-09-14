#pragma once

// SeqList 练习范围：只练顺序表的核心操作，不把 C++ 对象生命周期当成考点。
//
// 已由仓库提供、你不用实现：
// - 构造 / 析构
// - 拷贝构造 / 赋值运算符
// - size / capacity / empty
// - get / set 的下标检查
// - clear
// - 动态数组扩容辅助函数 ensureCapacity
//
// 你需要实现的核心算法：
// - pushBack：尾插
// - insert：指定位置插入并搬移元素
// - erase：删除并搬移元素
// - find：顺序查找
//
// 核心实现不得依赖 STL 容器和算法。

namespace whudsa {

class SeqList {
public:
    // ===== 支撑代码：不用写 =====
    SeqList();
    explicit SeqList(int initialCapacity);
    SeqList(const SeqList& other);
    SeqList& operator=(const SeqList& other);
    ~SeqList();

    int size() const;
    int capacity() const;
    bool empty() const;
    int get(int index) const;
    void set(int index, int value);
    void clear();

    // ===== CORE TODO：你只需要写这些 =====
    void pushBack(int value);
    void insert(int index, int value);
    void erase(int index);
    int find(int value) const;

private:
    // 顺序表的内部表示已经固定，不要求你额外设计 C++ 类结构。
    // 需要理解三个变量各自代表什么，但不用把“类设计”当作练习内容。
    int* data_;
    int size_;
    int capacity_;

    // 支撑代码：负责扩容和搬迁旧数组，你可以直接调用。
    void ensureCapacity(int minCapacity);
};

} // namespace whudsa
