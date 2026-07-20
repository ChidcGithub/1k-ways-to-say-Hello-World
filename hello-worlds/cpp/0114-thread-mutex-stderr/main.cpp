#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <string>

int main() {
    std::mutex m;
    std::vector<std::thread> ts;
    std::vector<std::string> parts = {"Hello", ", ", "World!"};
    for (auto& p : parts) {
        ts.emplace_back([&m, p]() {
            std::lock_guard<std::mutex> lk(m);
            std::cerr << p;
        });
    }
    for (auto& t : ts) t.join();
    std::cerr << std::endl;
    return 0;
}
