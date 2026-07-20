---
id: 0113
language: cpp
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "Thread sets a promise, main reads the future; thread-based message passing."
author: ChidcGithub
date: 2026-07-20
---

# #0113 · C++ Thread Promise Future

## Description

A modern C++ Hello World that passes the greeting between threads via an explicit promise/future pair. `main` creates a `std::promise<std::string> p`, obtains its `std::future<std::string>` via `p.get_future()`, then spawns a worker thread `t` that captures `p` by reference and calls `p.set_value("Hello, World!")`. Meanwhile `main` blocks on `f.get()` to receive the value and prints it, then `t.join()` waits for the worker to finish. This is the low-level promise/future message-passing idiom, more explicit than `std::async` (#0112): the programmer directly owns both the writing end (`promise`) and the reading end (`future`), as well as the thread lifetime.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <thread>
#include <future>
#include <string>
int main(){ std::promise<std::string> p; std::future<std::string> f=p.get_future(); std::thread t([&p](){ p.set_value("Hello, World!"); }); std::cout<<f.get()<<std::endl; t.join(); }
```

## Run

```bash
cd hello-worlds/cpp/0113-thread-promise-future
g++ -std=c++20 main.cpp -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `concurrent` | Greeting handed from worker thread to `main` via promise/future |
| output | `stdout` | `std::cout` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::promise`, `std::future`, `std::thread` introduced in C++11 (modern C++) |
| tags | `[parallel]` | Worker thread runs in parallel with `main` until `.get()` / `.join()` |

## Reference

- [cppreference — std::promise](https://en.cppreference.com/w/cpp/thread/promise)
- [cppreference — std::thread](https://en.cppreference.com/w/cpp/thread/thread)
