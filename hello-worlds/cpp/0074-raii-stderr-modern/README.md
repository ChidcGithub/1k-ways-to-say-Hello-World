---
id: 0074
language: cpp
paradigm: oop
output: stderr
platform: cli
era: modern
tags: []
notes: "RAII greeter: constructor stores message, destructor prints to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0074 · RAII stderr Modern

## Description

An RAII `Greeter` stores its message in the constructor and prints it from the destructor. Because the destructor fires automatically when `g` goes out of scope at the end of `main`, the greeting appears on `stderr` without any explicit call. This demonstrates C++'s resource-acquisition-is-initialization guarantee being used for side-effecting behavior.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <string>

class Greeter {
    std::string msg;
public:
    Greeter(std::string m) : msg(std::move(m)) {}
    ~Greeter() {
        std::cerr << msg << std::endl;
    }
};

int main() {
    Greeter g("Hello, World!");
}
```

## Run

```bash
cd hello-worlds/cpp/0074-raii-stderr-modern
g++ -std=c++20 main.cpp -o hello.exe && hello.exe 2>&1
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 (g++) |
| paradigm | `oop` | Class with constructor/destructor managing behavior |
| output | `stderr` | Destructor writes via `std::cerr` |
| platform | `cli` | Run from the terminal |
| era | `modern` | `std::string` move semantics and RAII idioms are modern C++ (post-2011) |
| tags | `[]` | RAII is the technique, not a special tag |
