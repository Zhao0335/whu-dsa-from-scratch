#pragma once
// 函数实现要求：
// 每个接口都必须完成声明对应的功能，处理边界情况，并维护数据结构不变量。
// - BitmapIndex：位图索引，按位保存和查询状态。
// - set：检查下标后修改对应元素。
// - clear：释放或重置元素，保留可复用的容量。
// - test：读取指定位置的位。
// - size：返回当前元素数量。
// 核心实现不得依赖 STL 容器和算法。
namespace whudsa {
class BitmapIndex {
public:
    explicit BitmapIndex(int bitCount); ~BitmapIndex();
    void set(int index); void clear(int index); bool test(int index) const; int size() const;
private: // 待完成：将位压缩存储到整数或字节数组中。
};
}
