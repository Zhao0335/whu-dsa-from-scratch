# CORE TODO 总表

这张表回答一个问题：**每个模块到底哪些内容需要你自己写。**

凡是没有列在这里的构造/析构/拷贝/内存释放/简单 getter 等，默认属于支撑代码。

| 阶段 | 模块 | 需要自己实现的核心内容 |
|---|---|---|
| 线性表 | SeqList | `pushBack`, `insert`, `erase`, `find` |
| 线性表 | SinglyLinkedList | `pushFront`, `pushBack`, `insert`, `erase`, `removeFirst`, `find`, `reverse` |
| 线性表 | DoublyLinkedList | `pushFront`, `pushBack`, `insert`, `erase`, `getFromBack` |
| 线性表 | CircularLinkedList | `pushBack`, `insert`, `erase` |
| 线性表 | UnrolledLinkedList | 块定位、`insert`, `erase`, `pushBack`、必要的分裂/合并 |
| 栈队列 | ArrayStack | `push`, `pop` |
| 栈队列 | LinkedStack | `push`, `pop` |
| 栈队列 | CircularQueue | `push`, `pop`、回绕逻辑 |
| 栈队列 | LinkedQueue | `push`, `pop` |
| 字符串 | SeqString | `append`, `insert`, `erase`, `substring`, `compare` |
| 字符串 | LinkedString | `charAt`, `append`, `insert`, `erase` |
| 字符串算法 | Naive/KMP/BM | 匹配算法本体 |
| 树 | BinaryTree | 层序插入、`height`, `leafCount`, 前/中/后/层序遍历 |
| 树 | ArrayBinaryTree | `set/get/exists` 与父子下标公式 |
| 树 | GeneralTree | `addRoot`, `addChild`, `childCount` |
| 树 | HuffmanTree | 建树、WPL、编码、解码 |
| 堆 | BinaryHeap | `siftUp`, `siftDown`, `push`, `pop`, `build` |
| 堆 | D-ary Heap | d 叉上滤/下滤、`push`, `pop` |
| 堆 | LeftistHeap | 合并规则、`push`, `pop`, `merge` |
| 堆 | SkewHeap | 合并规则、`push`, `pop`, `merge` |
| 堆 | BinomialHeap | 合并同阶树、根链合并、`push`, `pop`, `merge` |
| 图结构 | AdjacencyMatrix | `addEdge`, `removeEdge`, `hasEdge`, `weight`, `degree` |
| 图结构 | AdjacencyList | `addEdge`，理解 `head/to/next/weight` |
| 图算法 | Traversal/Connectivity | DFS、BFS、连通性 |
| 并查集 | DisjointSet | `find`, `unite`, `same`, `componentSize` |
| 排序 | sorting/ | 六种排序算法本体 |
| 图应用 | shortest_path/mst/topological/critical | Dijkstra/Floyd、Prim/Kruskal、拓扑、关键路径 |
| 查找 | Sequential/Binary/Indexed | 查找算法本体 |
| 查找树 | BST | `insert`, `contains`, `erase` |
| 查找树 | AVL | 旋转、`insert`, `erase`, `contains`, 平衡检查 |
| 哈希 | Open Addressing | 探查、`insert`, `erase`, `contains`, `get` |
| 哈希 | Chaining | 桶链操作、`insert`, `erase`, `contains`, `get` |
| 索引 | InvertedIndex | 建倒排表、查询 |
| 索引 | BitmapIndex | 位操作 `set/clear/test` |
| 索引 | BTree/BPlusTree | 搜索、分裂、插入、借/并、删除；B+ 叶链与范围查询 |
| 算法设计 | algorithm/ | 枚举、回溯、分支限界、分治、DP、贪心 |

## 优先级

免修考试时间紧时优先：

```text
SeqList
SinglyLinkedList
Stack / CircularQueue
BinaryTree + Traversal
BinaryHeap
AdjacencyList + DFS/BFS
DisjointSet
QuickSort / MergeSort
BinarySearch
BST / Hash
KMP
Dijkstra
Prim / Kruskal
TopologicalSort
```

`UnrolledLinkedList`、LinkedString、Leftist/Skew/Binomial Heap、完整 BM、B/B+Tree 等保留课程覆盖，但放在后面。
