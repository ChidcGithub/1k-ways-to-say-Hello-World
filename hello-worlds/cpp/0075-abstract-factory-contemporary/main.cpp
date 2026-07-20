#include <iostream>
#include <memory>

struct IGreeter {
    virtual void greet() = 0;
    virtual ~IGreeter() = default;
};

struct HelloGreeter : IGreeter {
    void greet() override {
        std::cout << "Hello, World!" << std::endl;
    }
};

struct Factory {
    std::unique_ptr<IGreeter> create() {
        return std::make_unique<HelloGreeter>();
    }
};

int main() {
    Factory f;
    auto g = f.create();
    g->greet();
}
