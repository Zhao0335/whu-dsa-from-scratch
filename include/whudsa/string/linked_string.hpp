#pragma once
namespace whudsa {
class LinkedString {
public:
    LinkedString(); explicit LinkedString(const char* text); ~LinkedString();
    int length() const; char charAt(int index) const;
    void append(char ch); void insert(int index, char ch); void erase(int index);
private: // TODO: choose per-node or block-based linked string representation.
};
}
