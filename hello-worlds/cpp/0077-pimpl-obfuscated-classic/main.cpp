#include <iostream>
#include <memory>

class Greeter {
    struct Impl;
    std::unique_ptr<Impl> p;
public:
    Greeter();
    ~Greeter();
    void greet();
};

struct Greeter::Impl {
    int v[13] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
};

Greeter::Greeter() : p(std::make_unique<Impl>()) {}
Greeter::~Greeter() = default;

void Greeter::greet() {
    for (int i = 0; i < 13; ++i) {
        std::cout << static_cast<char>(p->v[i]);
    }
    std::cout << std::endl;
}

int main() {
    Greeter g;
    g.greet();
}
