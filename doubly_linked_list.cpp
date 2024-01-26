#include "doubly_linked_list.h"
#include <stdexcept>
#include<iostream>

DoublyLinkedList::DoublyLinkedList() : head(nullptr) {}

DoublyLinkedList::~DoublyLinkedList() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void DoublyLinkedList::insertAtEnd(int val) {
    Node* newNode = new Node(val);
    if (!newNode) {
        throw std::bad_alloc();
    }

    if (!head) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }
}

void DoublyLinkedList::removeFromFront() {
    if (!head) {
        throw std::out_of_range("Attempting to delete from an empty list");
    }

    Node* temp = head;
    head = head->next;
    if (head) {
        head->prev = nullptr;
    }

    delete temp;
}

void DoublyLinkedList::display() const {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
