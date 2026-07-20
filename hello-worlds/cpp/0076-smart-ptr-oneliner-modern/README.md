---
id: 0076
language: cpp
paradigm: oop
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Uses std::make_unique with a Greeter functor; one-liner main body."
author: ChidcGithub
date: 2026-07-20
---

# #0076 · Smart Pointer One-Liner Modern

## Description

A `Greeter` functor (a struct with `operator()`) is heap-allocated via `std::make_unique` and immediately invoked by dereferencing the smart pointer. The body of `main` is a single chained statement that constructs, owns, and calls the greeter.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <memory>

struct Greeter {
    void operator()() const {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    auto g = std::make_unique<Greeter>(); (*g)();
}
```

## Run

```bash
cd hello-worlds/cpp/0076-smart-ptr-oneliner-modern
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 (g++) |
| paradigm | `oop` | Functor class with `operator()` invoked through a smart pointer |
| output | `stdout` | Printed via `std::cout` |
| platform | `cli` | Run from the terminal |
| era | `modern` | `std::unique_ptr`/`std::make_unique` are modern C++ (post-2011/2014) |
| tags | `[one-liner]` | Body of `main` is a single statement |
