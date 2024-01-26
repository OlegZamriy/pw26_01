#include <iostream>
#include "calculator.h"

int main() {
    try {
        std::string input;
        std::cout << "Enter a number in decimal: ";
        std::cin >> input;

        int result = calculateDecimalValue(input);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Error: Range exceeded int." << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: A non-numeric string was entered." << std::endl;
    }

    return 0;
}
