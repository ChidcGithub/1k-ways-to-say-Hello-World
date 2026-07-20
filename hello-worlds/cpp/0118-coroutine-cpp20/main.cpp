#include <iostream>
#include <coroutine>
#include <utility>
#include <string>

struct GreetAwaiter {
    std::string msg;
    bool await_ready() { return false; }
    void await_suspend(std::coroutine_handle<>) {}
    std::string await_resume() { return msg; }
};

struct Task {
    struct promise_type {
        Task get_return_object() { return {}; }
        std::suspend_never initial_suspend() { return {}; }
        std::suspend_never final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() {}
    };
};

Task greet() {
    std::cout << "Hello, World!" << std::endl;
    co_return;
}

int main() {
    greet();
    return 0;
}
