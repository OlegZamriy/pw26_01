#ifndef CUSTOM_EXCEPTIONS_H
#define CUSTOM_EXCEPTIONS_H

#include <stdexcept>

class MathException : public std::runtime_error {
public:
    MathException(const std::string& message) : std::runtime_error(message) {}
};

class FileException : public std::runtime_error {
public:
    FileException(const std::string& message) : std::runtime_error(message) {}
};

class MemoryException : public std::bad_alloc {
public:
    MemoryException() : std::bad_alloc() {}
};

#endif // CUSTOM_EXCEPTIONS_H
