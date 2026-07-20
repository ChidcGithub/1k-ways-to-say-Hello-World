---
id: 0114
language: cpp
paradigm: concurrent
output: stderr
platform: cli
era: modern
tags: [parallel]
notes: "Multiple threads print parts under a std::mutex to stderr without interleaving."
author: ChidcGithub
date: 2026-07-20
---

# #0114 · Thread Mutex stderr Hello

## Description

A concurrent Hello World that splits the greeting into three parts (`Hello`, `, `, `World!`) and spawns one worker thread per part. Each thread acquires a shared `std::mutex` via `std::lock_guard` before writing its fragment to `std::cerr`, so the parts never interleave even though they are produced in parallel. The main thread joins all workers before emitting the trailing newline. Unlike the single-threaded `std::cerr` entry (#0060), this one demonstrates inter-thread synchronization on a shared output stream.

## Source Code

`main.cpp`:

```cpp
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
```

## Run

```bash
cd hello-worlds/cpp/0114-thread-mutex-stderr
g++ -std=c++20 main.cpp -o hello
./hello
```

To confirm the greeting is on stderr (and not on stdout):

```bash
# POSIX shells
./hello 2>&1 1>/dev/null

# Windows (cmd / PowerShell)
./hello.exe 2>&1 1>nul
```

Expected output (with stderr redirected): `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using `<thread>`, `<mutex>`, `<vector>` from the standard library |
| paradigm | `concurrent` | Spawns multiple `std::thread` workers that run in parallel |
| output | `stderr` | Each fragment is written to `std::cerr` under a mutex |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::thread` and `std::mutex` arrived with C++11 (2011) |
| tags | `[parallel]` | Demonstrates multi-thread parallel execution with mutual exclusion |

## Reference

- [C++ Reference: `std::thread`](https://en.cppreference.com/w/cpp/thread/thread)
- [C++ Reference: `std::lock_guard`](https://en.cppreference.com/w/cpp/thread/lock_guard)
