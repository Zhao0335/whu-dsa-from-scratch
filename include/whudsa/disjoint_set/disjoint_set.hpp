#pragma once
namespace whudsa {
class DisjointSet {
public:
    explicit DisjointSet(int n); ~DisjointSet();
    int find(int x); void unite(int a,int b); bool same(int a,int b); int componentSize(int x);
private: // TODO: design parent/rank/size arrays and path compression.
};
}
