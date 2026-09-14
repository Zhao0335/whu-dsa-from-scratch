# WHU-DSA From Scratch

武汉大学《数据结构与算法》手搓练习仓库。

这个仓库的目标不是实现一个工程级 STL 替代品，而是用于复习课程、准备不提供 STL 的免修考试，并训练从底层实现数据结构与算法的能力。

## 先看什么

第一次打开仓库，请按顺序阅读：

1. [`START_HERE.md`](START_HERE.md)：仓库结构、学习顺序、每一步具体做什么。
2. [`PRACTICE_RULES.md`](PRACTICE_RULES.md)：核心代码允许和禁止使用的东西。
3. [`COURSE_MAP.md`](COURSE_MAP.md)：教学日历与仓库模块对应关系。
4. [`ROADMAP.md`](ROADMAP.md)：完成进度。

## 这个仓库故意不给答案

- `include/`：只给公共接口和 TODO，不给核心实现。
- `src/`：只给空实现文件和 TODO。
- `tests/`：给验收测试或验收入口，不给实现。
- `notes/`：只给知识点问题清单，不给模板代码。

## 第一个任务

从 `SeqList` 开始：

```text
include/whudsa/linear/seq_list.hpp
src/linear/seq_list.cpp
tests/linear/test_seq_list.cpp
```

第一次配置：

```bash
cmake -S . -B build
cmake --build build
```

默认构建只检查仓库基础设施，不会编译所有未完成练习。

写完 `SeqList` 后，直接构建对应测试 target；它会在编译成功后自动运行测试：

```bash
cmake --build build --target test_seq_list
```
