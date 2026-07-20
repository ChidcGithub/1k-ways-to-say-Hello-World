---
id: 0118
language: cpp
paradigm: concurrent
output: stdout
platform: cli
era: contemporary
tags: []
notes: "C++20 coroutine that co_returns the greeting; main resumes and prints."
author: ChidcGithub
date: 2026-07-20
---

# #0118 · Coroutine cpp20 Hello

## Description

A C++20 coroutine Hello World. The `greet()` function is a coroutine (it uses `co_return;`) whose promise type uses `std::suspend_never` for both initial and final suspend, so it runs to completion synchronously when called from `main`. A minimal `GreetAwaiter` is defined to demonstrate the awaiter protocol (`await_ready`, `await_suspend`, `await_resume`). Unlike the thread-based concurrent entries, this one achieves cooperative scheduling within a single thread using C++20 coroutine machinery.

## Source Code

`main.cpp`:

```cpp
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
```

## Run

```bash
cd hello-worlds/cpp/0118-coroutine-cpp20
g++ -std=c++20 main.cpp -o hello
./hello
```

Expected output: `Hello, World!`

Note: requires a compiler with C++20 coroutine support (GCC 10+, Clang 8+, MSVC 19.20+).

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using `<coroutine>` from the standard library |
| paradigm | `concurrent` | Uses C++20 coroutines (cooperative, single-thread concurrency) |
| output | `stdout` | The greeting is written to `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | Coroutines were standardized in C++20 (2020) |
| tags | `[]` | No special technique tag beyond the coroutine mechanism itself |

## Reference

- [C++ Reference: Coroutines](https://en.cppreference.com/w/cpp/language/coroutines)
- [C++20 Coroutines: A mechanism for symmetric transfer](https://en.cppreference.com/w/cpp/coroutine_traits)
