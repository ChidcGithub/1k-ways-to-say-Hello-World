#include <exception>
#include <iostream>

class GreetingException : public std::exception {
    const char* msg;
public:
    GreetingException(const char* m) : msg(m) {}
    const char* what() const noexcept override { return msg; }
};

int main() {
    try {
        throw GreetingException("Hello, World!");
    } catch (const GreetingException& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
