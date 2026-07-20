#include <iostream>

int main() {
    int codes[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
    for (int c : codes) std::cout << (char)c;
    std::cout << std::endl;
    return 0;
}
