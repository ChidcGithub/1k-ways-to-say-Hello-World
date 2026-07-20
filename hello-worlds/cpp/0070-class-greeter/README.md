---
id: 0070
language: cpp
paradigm: oop
output: stdout
platform: cli
era: classic
tags: []
notes: "Class-based Greeter with a greet() method; classic C++ OOP."
author: ChidcGithub
date: 2026-07-20
---

# #0070 · Class Greeter

## Description

A classic object-oriented C++ Hello World. The greeting behavior is encapsulated in a `Greeter` class with a single public method `greet()` that writes `"Hello, World!"` to `std::cout`. `main` simply instantiates a `Greeter` object and invokes `greet()` on it. This is the textbook OOP shape taught in classic C++ courses: a class bundles state (here, none) and behavior (`greet`), and clients interact with the object through its public interface rather than calling free functions. The entry is tagged `classic` because this style of single-responsibility class with manual object instantiation predates the modern-C++ era of smart pointers, templates-everywhere, and value semantics.

## Source Code

`main.cpp`:

```cpp
#include <iostream>

class Greeter {
public:
    void greet() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    Greeter g;
    g.greet();
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0070-class-greeter
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in C++ |
| paradigm | `oop` | Behavior is encapsulated in a `Greeter` class with a `greet()` method |
| output | `stdout` | `std::cout` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Single-responsibility class with manual instantiation; classic pre-modern C++ OOP |
| tags | `[]` | No special technique; textbook OOP |
