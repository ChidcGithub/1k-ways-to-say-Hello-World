#include <iostream>
#include <string>

class Greeter {
    std::string msg;
public:
    Greeter(std::string m) : msg(std::move(m)) {}
    ~Greeter() {
        std::cerr << msg << std::endl;
    }
};

int main() {
    Greeter g("Hello, World!");
}
