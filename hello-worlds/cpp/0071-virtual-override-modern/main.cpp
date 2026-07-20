// 0071-virtual-override-modern
// Modern C++11: a Base with a virtual greet() and a derived Greeter that
// overrides it using the explicit `override` keyword. Dispatch is virtual.

#include <iostream>

struct Base {
    virtual void greet() { }
};

struct Greeter : Base {
    void greet() override {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    Base* b = new Greeter();
    b->greet();
    delete b;
    return 0;
}
