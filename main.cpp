#include <iostream>
#include "calculator.h"

int main() {
    try {
        std::string input;
        std::cout << "������ ����� � ��������� ������: ";
        std::cin >> input;

        int result = calculateDecimalValue(input);
        std::cout << "���������: " << result << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "�������: ���������� ��� �������� int." << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "�������: ������� ���������� �����." << std::endl;
    }

    return 0;
}
