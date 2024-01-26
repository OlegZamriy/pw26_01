#include <iostream>
#include "calculator.h"

int main() {
    try {
        std::string input;
        std::cout << "Введіть число у десятковій системі: ";
        std::cin >> input;

        int result = calculateDecimalValue(input);
        std::cout << "Результат: " << result << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Помилка: перевищено межі діапазону int." << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Помилка: введено нечисловий рядок." << std::endl;
    }

    return 0;
}
