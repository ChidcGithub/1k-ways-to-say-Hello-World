// 0070-class-greeter
// Classic C++ OOP: a Greeter class with a greet() method.

#include <iostream>

class Greeter {
public:
    void greet() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    Greeter g;
    g.greet();
    return 0;
}
