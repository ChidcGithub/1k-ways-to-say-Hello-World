// 0067-argv-stderr-modern
// Modern C++: takes the greeting from argv[1] (if present) and writes it to
// stderr via std::cerr. Falls back to "Hello, World!" when no arg is given.

#include <iostream>

int main(int argc, char* argv[]) {
    if (argc > 1) {
        std::cerr << argv[1] << std::endl;
    } else {
        std::cerr << "Hello, World!" << std::endl;
    }
    return 0;
}
