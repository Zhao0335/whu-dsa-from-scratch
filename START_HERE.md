# 从这里开始：仓库结构、学习顺序与验收方法

这份文件解决四个问题：

1. 仓库每个目录是干什么的？
2. 实际应该按什么顺序实现？
3. 每一步具体修改哪些文件？
4. 每个阶段怎么确认自己真的会了？

---

# 一、先看懂仓库结构

```text
whu-dsa-from-scratch/
├── include/whudsa/      # 公共接口。只给函数声明和 TODO，不给算法实现
├── src/                 # 你真正写实现的地方。初始只有 TODO
├── tests/               # 对应模块验收测试
├── examples/            # 组合练习，例如 Josephus、迷宫 BFS
├── notes/               # 复杂度、性质、易错点、课程理论
├── scripts/             # 自动检查核心代码是否偷用了 STL
├── CMakeLists.txt       # 构建入口
├── README.md            # GitHub 首页
├── COURSE_MAP.md        # 课程范围 -> 仓库文件映射
├── PRACTICE_RULES.md    # 统一规则
└── ROADMAP.md           # 进度表
```

一个结构通常由三份文件组成。例如顺序表：

```text
include/whudsa/linear/seq_list.hpp   公共接口
src/linear/seq_list.cpp              你的实现
tests/linear/test_seq_list.cpp       验收测试
```

`.hpp` 只回答“外部可以调用什么”；`.cpp` 才回答“内部到底怎么做”。

本仓库刻意不预先给 private 成员，因为“内部数据怎么表示”本身就是你应该练习的内容。

---

# 二、怎么编译

第一次：

```bash
cmake -S . -B build
cmake --build build
```

默认构建只检查项目基础设施，因此仓库刚解压时应该成功。

每个练习 target 都是 `EXCLUDE_FROM_ALL`，只有你主动构建时才会编译。例如：

```bash
cmake --build build --target test_seq_list
```

在你还没实现 SeqList 时，这个 target **预期会链接失败**。这不是仓库坏了，而是在提醒你函数还没有实现。

实现后直接执行同一条命令。这个 target 会在成功链接后自动运行测试：

```bash
cmake --build build --target test_seq_list
```

---

# 三、统一学习流程

对每个模块都执行下面步骤：

1. 打开 `.hpp`，读接口和 TODO。
2. 自己决定内部成员变量和不变量。
3. 在 `.cpp` 写最小可用实现。
4. 构建并运行对应测试 target。
5. 根据失败信息修正实现并补边界处理。
6. 重新运行测试 target。
7. 在 `notes/` 写复杂度和易错点。
8. 隔一段时间闭卷重写核心代码。
9. 完成后更新 `ROADMAP.md`。

---

# 四、实际实现顺序

实现顺序不是完全照教学日历抄，因为后续算法有依赖关系。例如 Kruskal 需要排序和并查集，所以并查集、排序会放在完整图应用之前。

## Phase 0：基础设施与复杂度

先读：

```text
PRACTICE_RULES.md
COURSE_MAP.md
notes/complexity.md
```

你需要补完 `notes/complexity.md` 中的问题：

- O、Ω、Θ 分别是什么意思？
- 最好、平均、最坏复杂度怎么区分？
- 时间/空间复杂度怎么估计？
- 顺序表扩容为什么涉及均摊复杂度？
- 分治递推怎么分析？

验证：默认 CMake configure/build 成功。

---

## Phase 1：线性表

按顺序：

```text
SeqList
SinglyLinkedList
DoublyLinkedList
CircularLinkedList
UnrolledLinkedList
```

### 1. SeqList

只处理：

```text
include/whudsa/linear/seq_list.hpp
src/linear/seq_list.cpp
tests/linear/test_seq_list.cpp
notes/linear.md
```

你需要自己设计：

```text
动态数组指针
当前元素个数
当前容量
扩容策略
```

公共接口已经给好，但 private 区域留空。

验证：

```bash
cmake --build build --target test_seq_list
```

至少通过：空表、首尾/中间插入、首尾/中间删除、扩容、find、clear。

必须会解释：随机访问 O(1)、中间插入 O(n)、尾插为何可均摊 O(1)。

### 2. SinglyLinkedList

文件：

```text
include/whudsa/linear/singly_linked_list.hpp
src/linear/singly_linked_list.cpp
tests/linear/test_singly_linked_list.cpp
```

自己设计 Node、head/tail 是否需要、size 是否维护。

重点验证：空链表、单节点、删头、删尾、反转。

### 3. DoublyLinkedList

重点不是“会写 Node”，而是每次修改后 `prev/next` 两个方向都正确。

### 4. CircularLinkedList

重点先写清：如何表示空表？循环何时结束？保存 head 还是 tail？

组合练习：`examples/josephus.cpp`。

### 5. UnrolledLinkedList

课程覆盖型内容。理解“每个节点存一个小数组”以及数组/链表折中即可，第一遍不用追求工业级实现。

Phase 1 结束后补完 `notes/linear.md` 的复杂度对比表。

---

## Phase 2：栈与队列

顺序：

```text
ArrayStack
LinkedStack
CircularQueue
LinkedQueue
```

对应目录：

```text
include/whudsa/stack_queue/
src/stack_queue/
tests/stack_queue/
```

重点：

- ArrayStack：数组管理、扩容、top/push/pop。
- LinkedStack：为什么链表头适合当栈顶。
- CircularQueue：front/rear 的定义、空/满条件、下标回绕。
- LinkedQueue：删除最后一个节点以后 head/tail 的状态。

组合验证：

```text
examples/bracket_matching.cpp   使用自己的 Stack
examples/maze_bfs.cpp           使用自己的 Queue
```

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

核心实现禁止 `std::string` 代替自己的字符串结构。

KMP 要拆开理解：构造 failure/next + 匹配。不要只记一个模板。

BM：先完成坏字符规则，再处理好后缀规则。

---

## Phase 4：树和二叉树

顺序：

```text
BinaryTree
ArrayBinaryTree
GeneralTree / Forest
HuffmanTree
```

BinaryTree 先递归遍历，再非递归遍历。

非递归 DFS 必须复用自己的 Stack；层序遍历必须复用自己的 Queue。

Huffman 第一遍可以先写结构，等 Phase 5 的 BinaryHeap 完成后回头把优先队列替换成自己的实现。

---

## Phase 5：优先级队列

顺序：

```text
BinaryHeap
D-ary Heap
LeftistHeap
SkewHeap
BinomialHeap
```

BinaryHeap 是高优先级：必须熟悉 siftUp、siftDown、buildHeap。

禁止 `std::priority_queue` 和标准 heap 算法。

D-ary Heap 用来确认你真的理解堆，而不是只背二叉堆下标公式。

后三种是课程覆盖内容，先理解 merge 的核心性质，再追求完整度。

---

## Phase 6：图基础

先只实现图本身，不急着 Dijkstra/Kruskal：

```text
AdjacencyMatrix
AdjacencyList
DFS
BFS
Connectivity
```

邻接表必须有数组式版本：

```text
head[]
to[]
next[]
weight[]
```

而不是 `vector<vector<Edge>>`。

DFS/BFS 要复用自己的 Stack/Queue。

---

## Phase 7：并查集

实现：

```text
find
unite
same
path compression
union by size / rank
```

重点不是只记两行模板，要能解释树为什么会变矮。

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

每种排序都记录：最好/平均/最坏时间、额外空间、稳定性。

统一用空数组、单元素、升序、逆序、全相同、大量重复、随机数据测试。

测试代码允许使用 `std::sort` 做标准答案；核心实现不允许。

---

## Phase 9：图应用

现在前置依赖已经齐：Graph + Heap + DSU + Sort。

顺序：

```text
Dijkstra（朴素）
Dijkstra（自己的 BinaryHeap）
Floyd
Prim
Kruskal
Topological Sort
Critical Path
```

Kruskal 必须真正调用自己的排序和 DisjointSet。

---

## Phase 10：查找

顺序：

```text
Sequential Search
Binary Search
Indexed Search
BST
AVL
Hash Open Addressing
Hash Chaining
```

Binary Search 至少实现 exact、first >= x、last <= x，不用 lower_bound/upper_bound。

AVL 必须为 LL/RR/LR/RL 分别准备测试。

Hash 要理解 load factor、collision、rehash，不只是能插入。

---

## Phase 11：索引

顺序：

```text
InvertedIndex
BitmapIndex
BTree
BPlusTree
```

这部分难度高、考试优先级通常低于基础结构，但教学日历明确覆盖，所以仓库保留完整位置。

BTree 推荐：search -> split -> insert -> borrow/merge -> erase。

BPlusTree 推荐：search -> insert -> split -> range query -> delete。

---

## Phase 12：算法设计基础

目录：

```text
include/whudsa/algorithm/
src/algorithm/
tests/algorithm/
```

按思想复习：

```text
枚举
回溯
分支限界
分治
动态规划
贪心
```

这里重点是“怎么设计”，不要求所有内容都封装成类。

---

## Phase 13：闭卷与综合

最终不再新增模块。

随机抽：SeqList、LinkedList、Stack、Queue、Heap、DSU、BST、AVL、Hash，完全不看仓库重写。

随机抽：KMP、DFS、BFS、Dijkstra、Floyd、Prim、Kruskal、Topo、QuickSort、MergeSort、BinarySearch，完全不依赖 STL 核心容器重写。

三个组合验证：

```text
Graph + BinaryHeap + Dijkstra
Graph + Sort + DSU + Kruskal
BinaryHeap + HuffmanTree + Huffman Coding
```

---

# 五、优先级

如果免修考试时间紧，优先做到闭卷能写：

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

然后再补 AVL、Huffman、CriticalPath、D-ary Heap。

块状链表、LinkedString、Leftist/Skew/Binomial Heap、完整 BM、B/B+Tree 等保留课程覆盖，但可放后面。

---

# 六、你现在只做什么

现在不要同时开树、图、堆。

只打开：

```text
include/whudsa/linear/seq_list.hpp
src/linear/seq_list.cpp
tests/linear/test_seq_list.cpp
notes/linear.md
```

第一步先在 `seq_list.hpp` 的 private 区域自己设计内部表示，然后去 `seq_list.cpp` 实现构造、析构和最基本的 `size/empty`，再逐步完成增删查改。
