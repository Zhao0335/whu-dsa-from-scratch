#pragma once

namespace whudsa {
class LinkedString {
public:
    LinkedString();
    explicit LinkedString(const char* text);
    ~LinkedString();
    LinkedString(const LinkedString&) = delete;
    LinkedString& operator=(const LinkedString&) = delete;

    int length() const;
    char charAt(int index) const;           // CORE TODO
    void append(char ch);                   // CORE TODO
    void insert(int index, char ch);        // CORE TODO
    void erase(int index);                  // CORE TODO

private:
    struct Node { char ch; Node* next; };
    Node* head_;
    Node* tail_;
    int length_;
    void clearNodes();
};
}
