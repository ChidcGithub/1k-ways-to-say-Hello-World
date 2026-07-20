---
id: 0115
language: cpp
paradigm: concurrent
output: stdout
platform: cli
era: contemporary
tags: [parallel]
notes: "Uses std::atomic<bool> flag for thread coordination; contemporary atomics."
author: ChidcGithub
date: 2026-07-20
---

# #0115 · Atomic stdout Hello

## Description

A concurrent Hello World that offloads the greeting to a worker thread, then has the main thread spin-wait on an `std::atomic<bool>` flag until the worker is done. The worker prints `Hello, World!` to `std::cout` and then sets `done = true`, while the main thread calls `std::this_thread::yield()` in its busy-wait loop. Unlike the mutex-based entry (#0114), this one uses lock-free atomic synchronization instead of mutual exclusion.

## Source Code

`main.cpp`:

```cpp
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
```

## Run

```bash
cd hello-worlds/cpp/0115-atomic-stdout
g++ -std=c++20 main.cpp -o hello
./hello
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using `<atomic>` and `<thread>` from the standard library |
| paradigm | `concurrent` | Runs a worker `std::thread` coordinated with the main thread |
| output | `stdout` | The greeting is written to `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | Lock-free atomics for inter-thread signaling reflect modern C++20 practice |
| tags | `[parallel]` | Demonstrates multi-thread parallel execution with atomic coordination |

## Reference

- [C++ Reference: `std::atomic`](https://en.cppreference.com/w/cpp/atomic/atomic)
- [C++ Reference: `std::this_thread::yield`](https://en.cppreference.com/w/cpp/thread/yield)
