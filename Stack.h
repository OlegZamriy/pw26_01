#ifndef STACK_H
#define STACK_H

#include <stdexcept>

template <typename T>
class StackNode {
public:
    T data;
    StackNode* next;

    StackNode(T val) : data(val), next(nullptr) {}
};

template <typename T>
class Stack {
private:
    StackNode<T>* top;
    size_t size;
    const size_t max_size; 

public:
    Stack(size_t max_size = 100);
    ~Stack();

    void push(T val);
    T pop();
    bool isEmpty() const;
};

#endif // STACK_H
