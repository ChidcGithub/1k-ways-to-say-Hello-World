#include <fstream>
#include <iostream>
#include <string>

int main() {
    {
        std::ofstream out("hello.txt");
        out << "Hello, World!";
    }
    std::ifstream in("hello.txt");
    std::string line;
    std::getline(in, line);
    std::cout << line << std::endl;
    return 0;
}
