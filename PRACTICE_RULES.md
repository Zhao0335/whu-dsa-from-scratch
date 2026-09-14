# 练习规则

## 1. 这个仓库到底练什么

目标是武汉大学《数据结构与算法》课程和“不提供 STL”的机试/免修考试，不是训练 C++ 工程细节。

因此，从现在开始把代码分成两类：

```text
支撑代码：仓库直接提供，不作为练习内容
CORE TODO：你真正需要自己实现的核心数据结构/算法
```

### 支撑代码通常包括

- 构造函数、析构函数；
- 拷贝构造、赋值运算符等对象生命周期代码；
- 为测试服务的样板代码；
- 简单 getter / setter 和重复性的边界检查；
- 与考点无关的 C++ 工程化细节。

这些代码可以读懂，但**不要求闭卷手写**。

### 你真正要写的是

- 顺序表插入、删除、查找；
- 链表节点连接、删除、反转；
- 栈 / 队列核心操作；
- 堆的 siftUp / siftDown / buildHeap；
- 并查集 find / unite / 路径压缩；
- 排序、查找；
- 树的遍历、BST / AVL 操作；
- 图的 DFS / BFS / 最短路 / MST / 拓扑排序；
- KMP 等课程内算法。

判断标准很简单：**如果它主要是在考 C++ 类机制，而不是数据结构或算法本身，就不应该占用你的复习时间。**

---

## 2. 核心实现目录的 STL 限制

以下目录是练习主体：

```text
include/whudsa/
src/
```

在 `CORE TODO` 的实现中禁止直接使用：

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

字符串章节的核心实现中，也不能直接用 `std::string` 代替自己的字符串结构。

支撑代码可以使用必要的标准库设施，例如异常类型；但不能偷偷替你实现核心算法。

---

## 3. 头文件里的 private 成员怎么办

仓库会直接给出适合课程练习的内部表示，例如顺序表会直接给：

```cpp
int* data_;
int size_;
int capacity_;
```

你需要理解这些成员代表什么、维护什么不变量，但**不要求你为了练一个算法先设计一套 C++ 类架构**。

如果某个模块有多种经典表示，仓库会明确指定当前练习采用哪一种。

---

## 4. 测试目录

`tests/` 可以使用标准库做参考答案，例如用 `std::sort` 验证你自己的排序结果。

测试代码的任务是发现错误，不需要为了“纯手搓”而降低测试能力。

有些测试也会覆盖仓库提供的支撑代码，例如对象复制是否正常；这不代表这些内容是你的练习任务。

---

## 5. 完成标准

一个模块完成，主要看下面四件事：

1. `CORE TODO` 全部实现并通过测试；
2. 能解释数据结构的内部表示和关键不变量；
3. 能说出核心操作的时间 / 空间复杂度；
4. 隔一段时间后能不看代码重写考试级核心版本。

不再要求为了这个仓库专门掌握模板、Allocator、迭代器体系、Rule of Five 等工程内容。

---

## 6. 当前 SeqList 的范围

`SeqList` 中仓库已经替你完成：

```text
构造 / 析构
拷贝构造 / 赋值
size / capacity / empty
get / set
clear
扩容辅助函数
```

你现在只实现：

```text
pushBack
insert
erase
find
```

这四个写完并通过 `test_seq_list`，就进入下一个数据结构。
