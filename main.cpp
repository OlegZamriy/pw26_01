#include <iostream>
#include "custom_exceptions.h"

int main() {
    try {
        throw MathException("Division by zero");

    }
    catch (const MathException& e) {
        std::cerr << "MathException: " << e.what() << std::endl;

    }
    catch (const FileException& e) {
        std::cerr << "FileException: " << e.what() << std::endl;

    }
    catch (const MemoryException& e) {
        std::cerr << "MemoryException: " << e.what() << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "A common mistake: " << e.what() << std::endl;
    }
   
    return 0;
}
