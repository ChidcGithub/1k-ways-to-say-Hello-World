#include <iostream>

template <class D>
struct Base {
    void greet() { std::cout << "Hello, World!" << std::endl; }
};

struct Greeter : Base<Greeter> {};

int main() {
    Greeter g; g.greet();
}
