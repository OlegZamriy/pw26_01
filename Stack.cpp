#include "Stack.h"

template <typename T>
Stack<T>::Stack(size_t max) : top(nullptr), size(0), max_size(max) {}

template <typename T>
Stack<T>::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

template <typename T>
void Stack<T>::push(T val) {
    if (size >= max_size) {
        throw std::overflow_error("Stack overflow");
    }

    StackNode<T>* newNode = new StackNode<T>(val);
    newNode->next = top;
    top = newNode;
    ++size;
}

template <typename T>
T Stack<T>::pop() {
    if (isEmpty()) {
        throw std::underflow_error("Stack underflow");
    }

    T poppedValue = top->data;
    StackNode<T>* temp = top;
    top = top->next;
    delete temp;
    --size;

    return poppedValue;
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return top == nullptr;
}

template class Stack<int>;
template class Stack<double>;
