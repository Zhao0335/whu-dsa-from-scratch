# 从这里开始

这个仓库的目标是：**把《数据结构与算法》课程中真正需要手写的结构操作和算法练熟。**

## 一、你看到的代码只有两类

```text
支撑代码：已经写好，不要求默写
CORE TODO：你自己实现，考试前应能闭卷写出
```

支撑代码主要处理 C++ 类机制和重复劳动，例如：构造/析构、深拷贝、动态数组释放、简单 getter、通用边界检查和扩容辅助。

你负责的是结构和算法本体。例如数组搬移、链表改指针、循环队列回绕、堆上滤下滤、树遍历、图算法、排序查找等。

## 二、仓库结构

```text
include/whudsa/      接口 + 固定内部表示
src/                 支撑代码 + CORE TODO
tests/               验收测试
examples/            组合练习
notes/               理论、复杂度、易错点
CORE_TODO_MAP.md      每个模块要写什么
COURSE_MAP.md         教学内容到文件映射
ROADMAP.md            进度
```

不要在 `.hpp` 里重新设计一套工程级类。内部表示已经给定，你只需要理解为什么这样表示。

## 三、统一练习流程

1. 打开对应 `.hpp`，先看懂成员变量和不变量。
2. 打开 `.cpp`，找到 `CORE TODO`。
3. 只写核心函数。
4. 构建对应测试 target。
5. 修正边界错误。
6. 记录复杂度和最容易错的点。
7. 隔几天闭卷重写核心版本。

配置：

```bash
cmake -S . -B build
cmake --build build
```

例如练顺序表：

```bash
cmake --build build --target test_seq_list
```

未完成的核心函数通常会抛出 `TODO`。

## 四、学习顺序

### Phase 1：线性表

```text
SeqList -> SinglyLinkedList -> DoublyLinkedList -> CircularLinkedList -> UnrolledLinkedList
```

重点：数组搬移、链表指针、首尾边界、反转。块状链表第一轮优先级较低。

### Phase 2：栈与队列

```text
ArrayStack -> LinkedStack -> CircularQueue -> LinkedQueue
```

重点：LIFO/FIFO、循环队列的 front/rear 与回绕。

### Phase 3：字符串

```text
SeqString -> LinkedString -> Naive Match -> KMP -> Boyer-Moore
```

KMP 必须拆成 next/failure 构造和匹配两部分理解。

### Phase 4：树

```text
BinaryTree -> ArrayBinaryTree -> GeneralTree -> HuffmanTree
```

重点：递归/非递归遍历、树高、叶子数、Huffman 建树。

### Phase 5：优先级队列

```text
BinaryHeap -> D-ary Heap -> LeftistHeap -> SkewHeap -> BinomialHeap
```

BinaryHeap 是高优先级，必须熟练 `siftUp/siftDown/buildHeap`。后三种先掌握 merge 规则。

### Phase 6：图基础

```text
AdjacencyMatrix -> AdjacencyList -> DFS/BFS -> Connectivity
```

邻接表采用数组式：`head[] / to[] / next[] / weight[]`。

### Phase 7：并查集

```text
find -> path compression -> union by size/rank -> same/componentSize
```

### Phase 8：排序

```text
Insertion -> Selection -> Bubble -> Quick -> Merge -> Heap
```

记录最好/平均/最坏时间、额外空间和稳定性。

### Phase 9：图应用

```text
Dijkstra -> Floyd -> Prim -> Kruskal -> TopologicalSort -> CriticalPath
```

### Phase 10：查找

```text
Sequential -> Binary -> Indexed -> BST -> AVL -> Hash
```

### Phase 11：索引

```text
InvertedIndex -> BitmapIndex -> BTree -> BPlusTree
```

这一阶段课程覆盖但考试优先级通常较低。

### Phase 12：算法设计

```text
Enumeration -> Backtracking -> Branch and Bound -> Divide and Conquer -> DP -> Greedy
```

## 五、现在做什么

你现在继续 `SeqList`，只写：

```text
pushBack
insert
erase
find
```

写完运行：

```bash
cmake --build build --target test_seq_list
```

之后按 `CORE_TODO_MAP.md` 逐项往下走即可。
