#include <iostream>
#include "doubly_linked_list.h"

int main() {
    try {
        DoublyLinkedList myList;

        myList.insertAtEnd(1);
        myList.insertAtEnd(2);
        myList.insertAtEnd(3);

        myList.display();

        myList.removeFromFront();
        myList.display();

        myList.removeFromFront(); 
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    catch (const std::bad_alloc& e) {
        std::cerr << "Error: Failed to allocate memory" << std::endl;
    }

    return 0;
}
