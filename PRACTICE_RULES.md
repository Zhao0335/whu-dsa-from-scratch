# 练习规则

## 1. 核心实现目录

以下目录是练习主体：

```text
include/whudsa/
src/
```

在这里禁止直接使用：

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

## 2. 测试目录

`tests/` 可以使用标准库做参考答案，例如用 `std::sort` 验证你自己的排序结果。

测试代码的任务是发现错误，不需要为了“纯手搓”而降低测试能力。

## 3. 接口不是答案

仓库会提前给出主要公共接口，目的是让各阶段测试可以稳定编写。你真正需要自己决定并实现的是：

- 内部存储结构；
- 成员变量；
- 核心算法；
- 边界处理；
- 内存管理；
- 复杂度取舍。

如果你认为某个接口不合理，可以修改，但要同步修改对应测试。

## 4. 完成标准

一个模块只有同时满足以下条件才算完成：

1. 基本功能实现；
2. 边界测试通过；
3. 无明显内存泄漏、重复释放和悬空指针问题；
4. 对应 `notes/` 中写完复杂度；
5. 能解释内部表示和不变量；
6. 隔一段时间后能不看原代码重写核心版本。

## 5. 不要过度工程化

第一轮以 `int` 为主，不需要急着做模板、Allocator、异常层次、迭代器体系等工程功能。

目标是数据结构与算法，而不是复刻 STL。
