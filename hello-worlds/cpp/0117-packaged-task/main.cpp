#include <iostream>
#include <future>
#include <fstream>
#include <string>
#include <thread>

int main() {
    std::packaged_task<std::string()> task([]() { return std::string("Hello, World!"); });
    std::future<std::string> f = task.get_future();
    std::thread t(std::move(task));
    std::string r = f.get();
    std::ofstream out("hello.txt");
    out << r;
    out.close();
    std::cout << r << std::endl;
    t.join();
    return 0;
}
