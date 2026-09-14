#pragma once

namespace whudsa {
class SeqString {
public:
    SeqString();
    explicit SeqString(const char* text);
    SeqString(const SeqString& other);
    SeqString& operator=(const SeqString& other);
    ~SeqString();

    int length() const;
    bool empty() const;
    char charAt(int index) const;
    void append(char ch);                    // CORE TODO
    void append(const SeqString& other);      // CORE TODO
    void insert(int index, char ch);          // CORE TODO
    void erase(int index, int count = 1);     // CORE TODO
    SeqString substring(int start, int count) const; // CORE TODO
    int compare(const SeqString& other) const;        // CORE TODO
    const char* c_str() const;

private:
    char* data_;
    int length_;
    int capacity_; // 包含结尾 '\0' 所需空间
    void ensureCapacity(int minCapacity);
    void checkIndex(int index) const;
};
}
