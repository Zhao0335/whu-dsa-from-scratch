#include "whudsa/linear/seq_list.hpp"
#include <cassert>
using whudsa::SeqList;
int main() {
    SeqList a(1);
    assert(a.size() == 0);
    assert(a.empty());
    a.pushBack(10);
    assert(a.size() == 1 && a.get(0) == 10);
    a.pushBack(20); // 应当触发从很小初始容量开始的扩容
    assert(a.size() == 2 && a.get(1) == 20);
    a.insert(1, 15);
    assert(a.size() == 3 && a.get(0) == 10 && a.get(1) == 15 && a.get(2) == 20);
    assert(a.find(15) == 1);
    assert(a.find(999) == -1);
    a.erase(0);
    assert(a.size() == 2 && a.get(0) == 15);
    a.erase(a.size() - 1);
    assert(a.size() == 1 && a.get(0) == 15);
    a.set(0, 7);
    assert(a.get(0) == 7);
    SeqList b = a;
    b.set(0, 99);
    assert(a.get(0) == 7 && b.get(0) == 99); // 深拷贝
    a.clear();
    assert(a.empty());
    return 0;
}
