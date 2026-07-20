#include <fstream>
#include <string>
#include <iostream>

class FileWriter {
    std::ofstream f;
public:
    explicit FileWriter(const std::string& path) : f(path) {}
    void write(const std::string& s) { f << s; }
    ~FileWriter() {}
};

int main() {
    {
        FileWriter w("hello.txt");
        w.write("Hello, World!");
    }
    std::ifstream in("hello.txt");
    std::string line;
    if (std::getline(in, line)) {
        std::cout << line << std::endl;
    }
    return 0;
}
