---
id: 0117
language: cpp
paradigm: concurrent
output: file
platform: cli
era: contemporary
tags: [parallel]
notes: "std::packaged_task wraps a greeting function; result written to file."
author: ChidcGithub
date: 2026-07-20
---

# #0117 · Packaged Task File Hello

## Description

A concurrent Hello World that wraps a no-argument greeting function in `std::packaged_task<std::string()>`, moves it onto a worker thread, and retrieves the greeting string via the associated `std::future`. The main thread then writes the result to `hello.txt` with `std::ofstream` and echoes it to stdout for verification. Unlike the simple `std::ofstream` entry (#0061), this one models a future-based value-returning async computation whose result happens to be persisted to disk.

## Source Code

`main.cpp`:

```cpp
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
```

## Run

```bash
cd hello-worlds/cpp/0117-packaged-task
g++ -std=c++20 main.cpp -o hello
./hello
```

After running, a file `hello.txt` will appear next to `main.cpp` containing `Hello, World!`, and the same string will be printed to stdout.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using `<future>`, `<thread>`, and `<fstream>` from the standard library |
| paradigm | `concurrent` | A `std::packaged_task` is moved onto a worker `std::thread` |
| output | `file` | The greeting is written to `hello.txt`; stdout is a verification echo |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | `std::packaged_task` + `std::future` is contemporary async C++ |
| tags | `[parallel]` | Demonstrates future-based parallel value computation |

## Reference

- [C++ Reference: `std::packaged_task`](https://en.cppreference.com/w/cpp/thread/packaged_task)
- [C++ Reference: `std::future`](https://en.cppreference.com/w/cpp/thread/future)
