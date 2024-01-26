#include "calculator.h"
#include <stdexcept>

int calculateDecimalValue(const std::string& input) {
    try {
        size_t pos;
        int result = std::stoi(input, &pos);

        if (pos != input.length()) {
            throw std::invalid_argument("Incorrect number format");
        }

        return result;
    }
    catch (const std::out_of_range& e) {
        throw; 
    }
    catch (const std::invalid_argument& e) {
        throw; 
    }
}
