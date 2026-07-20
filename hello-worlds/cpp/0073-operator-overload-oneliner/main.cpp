#include <iostream>

class Greeter {};

std::ostream& operator<<(std::ostream& os, const Greeter&) {
    return os << "Hello, World!";
}

int main() {
    std::cout << Greeter() << std::endl;
}
