#include "whudsa/disjoint_set/disjoint_set.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
DisjointSet::DisjointSet(int n) : parent_(nullptr), size_(nullptr), n_(n > 0 ? n : 0) {
    if (n_) {
        parent_ = new int[n_];
        size_ = new int[n_];
        for (int i = 0; i < n_; ++i) { parent_[i] = i; size_[i] = 1; }
    }
}
DisjointSet::~DisjointSet() { delete[] parent_; delete[] size_; }
void DisjointSet::check(int x) const {
    if (x < 0 || x >= n_) throw std::out_of_range("DisjointSet index");
}

// ==================== CORE TODO ====================
int DisjointSet::find(int x) {
    // 必须做路径压缩。
    throw std::logic_error("TODO: DisjointSet::find");
}
void DisjointSet::unite(int a, int b) {
    // 按 size_ 合并，小树挂到大树。
    throw std::logic_error("TODO: DisjointSet::unite");
}
bool DisjointSet::same(int a, int b) {
    throw std::logic_error("TODO: DisjointSet::same");
}
int DisjointSet::componentSize(int x) {
    throw std::logic_error("TODO: DisjointSet::componentSize");
}

}
