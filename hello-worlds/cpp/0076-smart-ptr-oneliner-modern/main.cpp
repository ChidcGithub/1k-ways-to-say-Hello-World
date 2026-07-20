#include <iostream>
#include <memory>

struct Greeter {
    void operator()() const {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    auto g = std::make_unique<Greeter>(); (*g)();
}
