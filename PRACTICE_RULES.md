# 练习规则

## 1. 只实现 `CORE TODO`

每个结构模块都采用同一模式：

```text
.hpp：接口 + 已经给定的内部表示
.cpp：支撑代码 + CORE TODO
```

你只改 `CORE TODO`。构造函数、析构函数、拷贝、动态内存释放、简单访问器、重复性的边界检查等由仓库提供。

这样做的目的不是把结构“做简单”，而是把练习时间集中到真正的数据结构和算法操作上。

## 2. 哪些算核心练习

典型核心操作包括：

- 顺序表：元素搬移、插入、删除、查找；
- 链表：节点连接、插入、删除、反转；
- 栈/队列：push/pop、循环回绕；
- 字符串：插入删除、模式匹配、KMP/BM；
- 树：遍历、BST/AVL、Huffman；
- 堆：上滤、下滤、建堆、合并；
- 图：邻接结构、DFS/BFS、最短路、MST、拓扑排序、关键路径；
- 并查集：find、路径压缩、按大小/秩合并；
- 排序、查找、索引和算法设计。

## 3. 核心实现禁止直接用 STL 替答案

`include/whudsa/` 和 `src/` 的核心实现中禁止直接使用：

```text
std::vector
std::list
std::deque
std::stack
std::queue
std::priority_queue
std::map
std::set
std::unordered_map
std::unordered_set
std::sort
std::lower_bound
std::upper_bound
std::make_heap
std::push_heap
std::pop_heap
```

字符串核心实现中不能用 `std::string` 代替自己的字符串结构。

支撑代码允许使用 `<stdexcept>` 等基础库来做报错，但不会用 STL 容器替代课程结构。

## 4. 测试目录可以用标准库

`tests/` 可以使用标准库作为参考答案。测试的目标是发现错误，而不是为了“纯手搓”降低验证能力。

## 5. 你仍然必须理解内部表示

虽然 private 成员由仓库给定，但必须能解释：

- 每个成员变量代表什么；
- 数据结构的不变量是什么；
- 核心操作为什么正确；
- 时间/空间复杂度是什么；
- 空结构、单元素、首尾位置等边界如何处理。

## 6. 完成标准

一个模块完成需要：

1. 所有 `CORE TODO` 实现；
2. 对应测试通过；
3. 能解释核心不变量和复杂度；
4. 隔一段时间后能不看仓库重写核心版本。

不要求为了完成模块额外实现模板、Allocator、迭代器或 Rule of Five。
