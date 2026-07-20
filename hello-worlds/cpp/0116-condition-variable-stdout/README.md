---
id: 0116
language: cpp
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "Condition variable signals the worker thread to print; main waits."
author: ChidcGithub
date: 2026-07-20
---

# #0116 · Condition Variable stdout Hello

## Description

A concurrent Hello World where a worker thread waits on a `std::condition_variable` until the main thread flips a `ready` flag and notifies it, at which point the worker prints `Hello, World!` to `std::cout`. Unlike the spin-wait atomics entry (#0115), this one uses proper blocking wait/wakeup: the worker sleeps instead of busy-looping, which is the idiomatic pattern for producer/consumer handoff introduced with C++11.

## Source Code

`main.cpp`:

```cpp
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
```

## Run

```bash
cd hello-worlds/cpp/0116-condition-variable-stdout
g++ -std=c++20 main.cpp -o hello
./hello
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using `<condition_variable>` and `<mutex>` from the standard library |
| paradigm | `concurrent` | A worker `std::thread` blocks on a condition variable |
| output | `stdout` | The greeting is written to `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::condition_variable` arrived with C++11 (2011) |
| tags | `[parallel]` | Demonstrates multi-thread synchronization via wait/notify |

## Reference

- [C++ Reference: `std::condition_variable`](https://en.cppreference.com/w/cpp/thread/condition_variable)
- [C++ Reference: `std::unique_lock`](https://en.cppreference.com/w/cpp/thread/unique_lock)
