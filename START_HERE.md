# 从这里开始：怎么用这个仓库复习《数据结构与算法》

这份仓库现在只服务一个目标：**练课程和考试真正会考的数据结构与算法，不把时间耗在 C++ 工程细节上。**

---

# 一、先搞清楚两类代码

以后看到代码先分成两类：

```text
支撑代码：仓库直接提供，你只需要会读
CORE TODO：你必须自己实现，并且以后要能闭卷重写
```

支撑代码一般包括：

- 构造函数、析构函数；
- 拷贝构造、赋值运算符；
- 简单 getter / setter；
- 重复性的边界检查；
- 为测试服务的样板代码；
- 与课程考点关系不大的 C++ 类机制。

你真正练的是：

- 数组元素怎么搬；
- 链表指针怎么连；
- 栈、队列怎么进出；
- 树、堆怎么维护结构；
- 图怎么遍历和求最短路 / MST；
- 排序、查找、KMP、并查集等算法怎么写。

**看到 `CORE TODO` 才动手。没有标成核心练习的支撑代码不要主动重写。**

---

# 二、仓库结构

```text
whu-dsa-from-scratch/
├── include/whudsa/      # 接口、固定内部表示、核心函数声明
├── src/                 # 支撑代码 + 你要完成的 CORE TODO
├── tests/               # 对应模块验收测试
├── examples/            # 组合练习
├── notes/               # 复杂度、性质、易错点
├── scripts/             # 检查是否偷用 STL
├── CMakeLists.txt
├── README.md
├── COURSE_MAP.md
├── PRACTICE_RULES.md
└── ROADMAP.md
```

例如顺序表：

```text
include/whudsa/linear/seq_list.hpp
src/linear/seq_list.cpp
tests/linear/test_seq_list.cpp
```

`.hpp` 里会把考试级实现需要的数据成员直接告诉你；你要理解它们，但不要求自己设计一套复杂的 C++ 类。

`.cpp` 中已经写好的部分是支撑代码，标有 `CORE TODO` 的部分才是作业。

---

# 三、怎么编译

第一次：

```bash
cmake -S . -B build
cmake --build build
```

单独练某个结构时，只构建对应 target。例如：

```bash
cmake --build build --target test_seq_list
```

如果某个 `CORE TODO` 还没实现，测试可能直接报 `TODO`；这就是你下一步要写的位置。

---

# 四、每个模块统一怎么学

每个模块固定按这个流程：

1. 先看 `.hpp`，搞懂内部表示和每个核心接口要干什么。
2. 看 `.cpp`，跳过已经写好的支撑代码。
3. 只实现 `CORE TODO`。
4. 构建对应测试 target。
5. 根据失败样例修边界。
6. 在 `notes/` 里记复杂度、关键不变量、最容易写错的地方。
7. 过一段时间后，不看仓库闭卷重写核心版本。

不再要求你为了一个数据结构额外练 Rule of Three / Rule of Five、模板、Allocator、迭代器等内容。

---

# 五、实际学习顺序

## Phase 0：复杂度基础

先读：

```text
PRACTICE_RULES.md
COURSE_MAP.md
notes/complexity.md
```

至少会：O / Ω / Θ、最好/平均/最坏、空间复杂度、基本递推分析。

---

## Phase 1：线性表

顺序：

```text
SeqList
SinglyLinkedList
DoublyLinkedList
CircularLinkedList
UnrolledLinkedList
```

重点不是类怎么写，而是结构操作本身。

### SeqList

当前已经给定内部表示：

```cpp
int* data_;
int size_;
int capacity_;
```

仓库已经替你处理：

```text
构造 / 析构
拷贝构造 / 赋值
size / capacity / empty
get / set
clear
扩容辅助函数
```

你现在只写：

```text
pushBack
insert
erase
find
```

必须会解释：

```text
随机访问 O(1)
顺序查找 O(n)
中间插入 O(n)
中间删除 O(n)
```

验收：

```bash
cmake --build build --target test_seq_list
```

### SinglyLinkedList

核心关注：

```text
头插 / 尾插
按位置插入
删除
查找
反转
```

要搞清楚 `head`、必要时的 `tail`，以及空链表/单节点边界。

### DoublyLinkedList

核心关注：每次修改节点时，`prev` 和 `next` 两个方向都要保持一致。

### CircularLinkedList

核心关注：循环什么时候结束、删除头尾后环是否仍然闭合。

组合练习：`examples/josephus.cpp`。

### UnrolledLinkedList

课程覆盖型内容，理解“链表节点里放小数组”的思想即可，优先级低于普通顺序表和链表。

---

## Phase 2：栈与队列

顺序：

```text
ArrayStack
LinkedStack
CircularQueue
LinkedQueue
```

必须掌握：

```text
Stack: push / pop / top
Queue: push / pop / front
CircularQueue: front / rear 回绕和空满条件
```

组合练习：括号匹配、迷宫 BFS。

---

## Phase 3：字符串

顺序：

```text
SeqString
LinkedString
Naive Match
KMP
Boyer-Moore
```

重点优先级：

```text
朴素匹配
KMP next/failure 构造
KMP 匹配过程
```

不要用 `std::string` 替代自己的核心实现。

---

## Phase 4：树和二叉树

顺序：

```text
BinaryTree
ArrayBinaryTree
GeneralTree / Forest
HuffmanTree
```

先练递归遍历：前序、中序、后序；再练非递归；最后层序遍历。

---

## Phase 5：堆和优先队列

优先顺序：

```text
BinaryHeap
D-ary Heap
LeftistHeap
SkewHeap
BinomialHeap
```

考试重点是 BinaryHeap：

```text
siftUp
siftDown
buildHeap
push
pop
```

后三种优先级明显更低。

---

## Phase 6：图基础

先实现：

```text
AdjacencyMatrix
AdjacencyList
DFS
BFS
Connectivity
```

邻接表重点掌握数组式写法：

```text
head[]
to[]
next[]
weight[]
```

---

## Phase 7：并查集

只盯核心：

```text
find
unite
same
path compression
union by size / rank
```

---

## Phase 8：排序

顺序：

```text
Insertion
Selection
Bubble
Quick
Merge
Heap
```

重点：Quick / Merge / Heap。

每种排序至少知道时间复杂度、额外空间、稳定性。

---

## Phase 9：图应用

顺序：

```text
Dijkstra
Floyd
Prim
Kruskal
Topological Sort
Critical Path
```

重点优先级：Dijkstra、Prim、Kruskal、Topo。

---

## Phase 10：查找

顺序：

```text
Sequential Search
Binary Search
Indexed Search
BST
AVL
Hash
```

Binary Search 至少会：exact、first >= x、last <= x。

---

## Phase 11：索引结构

```text
InvertedIndex
BitmapIndex
BTree
BPlusTree
```

课程覆盖，但考试时间紧时优先级低于前面基础结构。

---

## Phase 12：算法设计思想

```text
枚举
回溯
分支限界
分治
动态规划
贪心
```

重点是能识别问题属于哪种思想，并写出基本状态/转移/搜索框架。

---

## Phase 13：闭卷综合

最后阶段随机抽结构，不看仓库重写：

```text
SeqList
LinkedList
Stack
Queue
BinaryTree
BinaryHeap
AdjacencyList
DisjointSet
BST
HashTable
```

随机抽算法：

```text
KMP
DFS / BFS
QuickSort / MergeSort
BinarySearch
Dijkstra
Prim / Kruskal
TopologicalSort
```

---

# 六、时间紧时的优先级

优先闭卷会写：

```text
SeqList
SinglyLinkedList
Stack
CircularQueue
BinaryTree + Traversal
BinaryHeap
AdjacencyList
DFS / BFS
DisjointSet
QuickSort / MergeSort
BinarySearch
BST
HashTable
KMP
Dijkstra
Prim / Kruskal
TopologicalSort
```

再补：AVL、Huffman、CriticalPath、D-ary Heap。

块状链表、LinkedString、Leftist/Skew/Binomial Heap、完整 BM、B/B+Tree 放后面。

---

# 七、你现在只做什么

现在不要开别的文件。

只看：

```text
include/whudsa/linear/seq_list.hpp
src/linear/seq_list.cpp
tests/linear/test_seq_list.cpp
```

然后只实现这四个函数：

```cpp
SeqList::pushBack
SeqList::insert
SeqList::erase
SeqList::find
```

**构造、析构、拷贝、赋值、扩容辅助代码都已经给你，不用碰。**

四个函数通过 `test_seq_list` 后，再进入单链表。
