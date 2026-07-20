#include <iostream>
#include <fstream>
#include <string>

class Greeter {
public:
    static Greeter& instance() {
        static Greeter g;
        return g;
    }

    void greet() {
        std::ofstream out("hello.txt");
        out << "Hello, World!" << std::endl;
    }

private:
    Greeter() {}
    Greeter(const Greeter&) = delete;
    Greeter& operator=(const Greeter&) = delete;
};

int main() {
    Greeter::instance().greet();

    std::ifstream in("hello.txt");
    std::string line;
    std::getline(in, line);
    std::cout << line << std::endl;

    std::remove("hello.txt");
    return 0;
}
