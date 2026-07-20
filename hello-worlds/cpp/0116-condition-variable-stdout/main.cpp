#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>

int main() {
    std::mutex m;
    std::condition_variable cv;
    bool ready = false;
    std::thread t([&] {
        std::unique_lock<std::mutex> lk(m);
        cv.wait(lk, [&] { return ready; });
        std::cout << "Hello, World!" << std::endl;
    });
    {
        std::lock_guard<std::mutex> lk(m);
        ready = true;
    }
    cv.notify_one();
    t.join();
    return 0;
}
