#include <iostream>
#include "Stack.h"

int main() {
    try {
        Stack<int> stack(5);

        for (int i = 0; i < 7; ++i) {
            stack.push(i * 10);
        }

        std::cout << "Stack elements: ";
        while (!stack.isEmpty()) {
            std::cout << stack.pop() << " ";
        }

        std::cout << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
