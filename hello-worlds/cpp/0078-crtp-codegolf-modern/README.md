---
id: 0078
language: cpp
paradigm: oop
output: stdout
platform: cli
era: modern
tags: [code-golf]
notes: "CRTP (Curiously Recurring Template Pattern) minimized to print the greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0078 · CRTP Code-Golf Modern

## Description

A minimal CRTP (Curiously Recurring Template Pattern) base template hands the greeting down to a derived `Greeter`. The base does all the work; the derived class is an empty struct that merely inherits `Base<Greeter>`. The result is the smallest CRTP-shaped program that prints `Hello, World!`.

## Source Code

`main.cpp`:

```cpp
#include <iostream>

template <class D>
struct Base {
    void greet() { std::cout << "Hello, World!" << std::endl; }
};

struct Greeter : Base<Greeter> {};

int main() {
    Greeter g; g.greet();
}
```

## Run

```bash
cd hello-worlds/cpp/0078-crtp-codegolf-modern
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 (g++) |
| paradigm | `oop` | Class hierarchy via CRTP template |
| output | `stdout` | Printed via `std::cout` |
| platform | `cli` | Run from the terminal |
| era | `modern` | CRTP is a modern C++ template idiom |
| tags | `[code-golf]` | Source kept as tight as possible |
