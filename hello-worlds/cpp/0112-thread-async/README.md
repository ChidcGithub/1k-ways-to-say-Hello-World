---
id: 0112
language: cpp
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "std::async launches an asynchronous task returning the greeting; main waits via .get()."
author: ChidcGithub
date: 2026-07-20
---

# #0112 · C++ Thread Async

## Description

A modern C++ Hello World produced by an asynchronous task. `std::async(std::launch::async, [](){ return std::string("Hello, World!"); })` launches a worker thread that constructs the greeting as a `std::string`, returning a `std::future<std::string>`. The main thread then blocks on `f.get()` to retrieve the value and writes it to `std::cout`. Although the work is trivial, the data flow is genuinely parallel: a separate thread produces the value, and `main` synchronously consumes it through the future. This entry showcases the high-level `std::async` / `std::future` concurrency API introduced in C++11.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <future>
#include <string>
int main(){ std::future<std::string> f=std::async(std::launch::async,[](){ return std::string("Hello, World!"); }); std::cout<<f.get()<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0112-thread-async
g++ -std=c++20 main.cpp -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `concurrent` | Greeting produced on a worker thread, consumed via `std::future` |
| output | `stdout` | `std::cout` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::async` / `std::future` introduced in C++11 (modern C++) |
| tags | `[parallel]` | Worker thread executes the lambda in parallel with `main` |

## Reference

- [cppreference — std::async](https://en.cppreference.com/w/cpp/thread/async)
- [cppreference — std::future](https://en.cppreference.com/w/cpp/thread/future)
