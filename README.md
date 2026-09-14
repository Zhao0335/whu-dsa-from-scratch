# WHU-DSA From Scratch

武汉大学《数据结构与算法》手搓练习仓库。

这个仓库的目标不是实现一个工程级 STL 替代品，也不是系统训练 C++ 对象模型，而是用于复习课程、准备不提供 STL 的免修考试，并训练核心数据结构与算法的手写能力。

## 先看什么

第一次打开仓库，请按顺序阅读：

1. [`START_HERE.md`](START_HERE.md)：仓库结构、学习顺序、每一步具体做什么。
2. [`PRACTICE_RULES.md`](PRACTICE_RULES.md)：哪些代码需要你写，哪些属于仓库提供的支撑代码。
3. [`COURSE_MAP.md`](COURSE_MAP.md)：教学日历与仓库模块对应关系。
4. [`ROADMAP.md`](ROADMAP.md)：完成进度。

## 练习原则

仓库现在明确区分两类代码：

- **支撑代码**：构造/析构、拷贝语义、简单访问器、测试样板等，与数据结构算法本身关系不大的 C++ 细节，仓库直接提供。
- **CORE TODO**：真正需要你自己实现的顺序表插删查、链表操作、堆调整、并查集、排序、图算法、KMP 等课程核心内容。

你需要理解内部表示和不变量，但不需要为了练一道数据结构题先补一整套 C++ 工程代码。

## 第一个任务

从 `SeqList` 开始：

```text
include/whudsa/linear/seq_list.hpp
src/linear/seq_list.cpp
tests/linear/test_seq_list.cpp
```

当前 `SeqList` 已经提供生命周期管理和扩容等支撑代码。你只需要实现：

```text
pushBack
insert
erase
find
```

第一次配置：

```bash
cmake -S . -B build
cmake --build build
```

然后构建并运行对应测试：

```bash
cmake --build build --target test_seq_list
```

测试失败时只看 `CORE TODO`，不要去补仓库已经提供的支撑代码。
