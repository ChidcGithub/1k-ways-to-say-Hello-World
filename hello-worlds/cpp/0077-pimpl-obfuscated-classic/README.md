---
id: 0077
language: cpp
paradigm: oop
output: stdout
platform: cli
era: classic
tags: [obfuscated]
notes: "PIMPL idiom with obfuscated implementation hidden behind an opaque pointer."
author: ChidcGithub
date: 2026-07-20
---

# #0077 · PIMPL Obfuscated Classic

## Description

The `Greeter` class exposes only a forward-declared `Impl` pointer in its header-style declaration. The implementation lives in the same translation unit but stores the greeting as an array of integer ASCII codes rather than a readable string; `greet()` casts each integer to `char` to reconstruct `Hello, World!` at runtime. The result is the classic PIMPL (pointer-to-implementation) idiom, lightly obfuscated so the literal text never appears in source.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <memory>

class Greeter {
    struct Impl;
    std::unique_ptr<Impl> p;
public:
    Greeter();
    ~Greeter();
    void greet();
};

struct Greeter::Impl {
    int v[13] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
};

Greeter::Greeter() : p(std::make_unique<Impl>()) {}
Greeter::~Greeter() = default;

void Greeter::greet() {
    for (int i = 0; i < 13; ++i) {
        std::cout << static_cast<char>(p->v[i]);
    }
    std::cout << std::endl;
}

int main() {
    Greeter g;
    g.greet();
}
```

## Run

```bash
cd hello-worlds/cpp/0077-pimpl-obfuscated-classic
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 (g++) |
| paradigm | `oop` | Class with private implementation pointer (PIMPL) |
| output | `stdout` | Decoded bytes printed via `std::cout` |
| platform | `cli` | Run from the terminal |
| era | `classic` | PIMPL idiom dates back to early C++ (1990s) |
| tags | `[obfuscated]` | Message hidden as integer ASCII codes |
