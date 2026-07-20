---
id: 0079
language: cpp
paradigm: oop
output: stderr
platform: cli
era: classic
tags: []
notes: "Throws a GreetingException carrying 'Hello, World!'; caught and printed to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0079 · C++ Exception to stderr

## Description

A classic object-oriented C++ Hello World that uses the exception mechanism as its output channel. A custom `GreetingException` derives from `std::exception` and carries the greeting string as its `what()` payload. Inside `main`, the exception is thrown and immediately caught, and its message is written to `std::cerr` (standard error stream) rather than `std::cout`. This demonstrates the classic C++ OOP trio — inheritance, virtual override (`what() ... noexcept override`), and RAII-style catch-by-reference — while deliberately routing output to stderr, distinguishing it from canonical `cout`-based entries.

## Source Code

`main.cpp`:

```cpp
#include <exception>
#include <iostream>

class GreetingException : public std::exception {
    const char* msg;
public:
    GreetingException(const char* m) : msg(m) {}
    const char* what() const noexcept override { return msg; }
};

int main() {
    try {
        throw GreetingException("Hello, World!");
    } catch (const GreetingException& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0079-exception-stderr-classic
g++ -std=c++20 main.cpp -o hello.exe
hello.exe 2>&1
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in the C++ programming language |
| paradigm | `oop` | Custom exception class inheriting from `std::exception` with virtual override |
| output | `stderr` | Greeting written to `std::cerr` (standard error) |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Uses pre-modern C++ idioms (raw `const char*`, classic exception hierarchy) |
| tags | `[]` | No special technique beyond OOP exception flow |

## Reference

- [std::exception — cppreference](https://en.cppreference.com/w/cpp/error/exception)
- [std::cerr — cppreference](https://en.cppreference.com/w/cpp/io/cerr)
