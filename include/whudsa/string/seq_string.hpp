#pragma once
namespace whudsa {
class SeqString {
public:
    SeqString(); explicit SeqString(const char* text); SeqString(const SeqString& other); SeqString& operator=(const SeqString& other); ~SeqString();
    int length() const; bool empty() const; char charAt(int index) const;
    void append(char ch); void append(const SeqString& other);
    void insert(int index, char ch); void erase(int index, int count = 1);
    SeqString substring(int start, int count) const; int compare(const SeqString& other) const;
    const char* c_str() const;
private: // TODO: design storage and null-termination policy.
};
}
