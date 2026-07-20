#include <iostream>
#include <thread>
#include <atomic>

int main() {
    std::atomic<bool> done{false};
    std::thread t([&done]() {
        std::cout << "Hello, World!" << std::endl;
        done = true;
    });
    while (!done) std::this_thread::yield();
    t.join();
    return 0;
}
