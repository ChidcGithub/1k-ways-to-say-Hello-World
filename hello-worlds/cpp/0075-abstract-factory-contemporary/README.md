---
id: 0075
language: cpp
paradigm: oop
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Abstract factory creating greeter objects; uses std::make_unique (contemporary C++14+)."
author: ChidcGithub
date: 2026-07-20
---

# #0075 · Abstract Factory Contemporary

## Description

An `IGreeter` interface and a `HelloGreeter` implementation are decoupled through a `Factory` that hands back a `std::unique_ptr<IGreeter>`. `main` depends only on the interface and never names the concrete type, illustrating the abstract-factory pattern with contemporary C++14's `std::make_unique`.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <memory>

struct IGreeter {
    virtual void greet() = 0;
    virtual ~IGreeter() = default;
};

struct HelloGreeter : IGreeter {
    void greet() override {
        std::cout << "Hello, World!" << std::endl;
    }
};

struct Factory {
    std::unique_ptr<IGreeter> create() {
        return std::make_unique<HelloGreeter>();
    }
};

int main() {
    Factory f;
    auto g = f.create();
    g->greet();
}
```

## Run

```bash
cd hello-worlds/cpp/0075-abstract-factory-contemporary
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 (g++) |
| paradigm | `oop` | Interface, implementation, and factory class |
| output | `stdout` | Printed via `std::cout` |
| platform | `cli` | Run from the terminal |
| era | `contemporary` | `std::make_unique` is a C++14 contemporary idiom |
| tags | `[]` | Pattern usage without any special technique |
