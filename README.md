# WHU-DSA From Scratch

武汉大学《数据结构与算法》免修/机试复习仓库。

这个仓库只做一件事：**练数据结构和算法本体，不把复习时间耗在 C++ 工程细节上。**

## 你只写 `CORE TODO`

仓库中的代码分两类：

- **支撑代码**：构造/析构、拷贝、内存释放、简单 getter、边界检查、扩容等。已经写好，只需要能读懂。
- **CORE TODO**：顺序表搬移、链表改指针、栈/队列进出、树/堆维护、图算法、排序、查找、KMP、并查集等。必须自己实现。

原则：**没有标 `CORE TODO` 的代码不要主动重写。**

## 从哪里开始

先读：

1. [`START_HERE.md`](START_HERE.md)：学习顺序和使用方法。
2. [`CORE_TODO_MAP.md`](CORE_TODO_MAP.md)：每个模块到底要自己写哪些函数。
3. [`PRACTICE_RULES.md`](PRACTICE_RULES.md)：允许/禁止使用的东西。
4. [`COURSE_MAP.md`](COURSE_MAP.md)：课程内容到仓库文件的映射。
5. [`ROADMAP.md`](ROADMAP.md)：进度表。

第一个任务仍然是 `SeqList`：

```text
include/whudsa/linear/seq_list.hpp
src/linear/seq_list.cpp
tests/linear/test_seq_list.cpp
```

配置：

```bash
cmake -S . -B build
cmake --build build
```

练某一项时只构建对应 target，例如：

```bash
cmake --build build --target test_seq_list
```

未完成的核心函数会抛出 `TODO`，定位到对应 `CORE TODO` 后实现即可。

## 仓库不要求你额外练什么

第一轮复习不要求：Rule of Three / Rule of Five、模板库设计、Allocator、迭代器体系、复杂异常层次、工程级 STL 兼容接口。

这些内容并非没价值，只是不属于这个仓库当前的考试复习目标。
