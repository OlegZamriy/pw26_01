#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

class DoublyLinkedList {
private:
    struct Node {
        int data;
        Node* prev;
        Node* next;
        Node(int val) : data(val), prev(nullptr), next(nullptr) {}
    };

    Node* head;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void insertAtEnd(int val);
    void removeFromFront();

    void display() const;
};

#endif // DOUBLY_LINKED_LIST_H
