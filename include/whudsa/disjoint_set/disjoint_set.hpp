#pragma once

namespace whudsa {
class DisjointSet {
public:
    explicit DisjointSet(int n);
    ~DisjointSet();
    DisjointSet(const DisjointSet&) = delete;
    DisjointSet& operator=(const DisjointSet&) = delete;

    int find(int x);                 // CORE TODO
    void unite(int a, int b);        // CORE TODO
    bool same(int a, int b);         // CORE TODO
    int componentSize(int x);        // CORE TODO

private:
    int* parent_;
    int* size_;
    int n_;
    void check(int x) const;
};
}
