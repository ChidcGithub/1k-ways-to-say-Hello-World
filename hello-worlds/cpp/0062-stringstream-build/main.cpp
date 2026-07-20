#include <iostream>
#include <sstream>

int main() {
    std::ostringstream oss;
    oss << "Hello" << ", " << "World!";
    std::cout << oss.str() << std::endl;
    return 0;
}
