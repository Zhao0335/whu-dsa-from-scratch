#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - SeqList：顺序表对象，负责初始化、复制和销毁动态数组。
// - size：返回当前元素数量。
// - capacity：返回底层数组容量。
// - empty：判断元素数量是否为零。
// - get：检查下标后返回对应元素。
// - set：检查下标后修改对应元素。
// - pushBack：必要时扩容后把元素追加到顺序表末尾。
// - insert：检查插入位置，向后移动元素后插入新值。
// - erase：检查下标，向前移动后续元素并减少元素数量。
// - find：顺序查找值，返回首次出现的下标；找不到时返回 -1。
// - clear：释放或重置元素，保留可复用的容量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class SeqList {
public:
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
    void pushBack(int value);
    void insert(int index, int value);
    void erase(int index);
    int find(int value) const;
    void clear();

private:
    // 待完成：自行设计内部存储结构和辅助函数。
};
} // 命名空间 whudsa
