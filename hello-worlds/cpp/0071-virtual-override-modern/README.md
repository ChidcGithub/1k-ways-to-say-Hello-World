---
id: 0071
language: cpp
paradigm: oop
output: stdout
platform: cli
era: modern
tags: []
notes: "Base class with virtual greet(), derived overrides using 'override' keyword (modern C++11)."
author: ChidcGithub
date: 2026-07-20
---

# #0071 · Virtual override modern

## Description

A modern C++11 Hello World built on virtual dispatch. A `Base` struct declares `virtual void greet()` with an empty body, and a derived `Greeter` struct overrides it using the explicit `override` keyword — a C++11 addition that turns mismatched signatures (e.g., a typo in the method name or a missing `const`) into compile errors rather than silent shadowing. In `main`, a `Greeter` object is heap-allocated and bound to a `Base*`; calling `greet()` through that base pointer invokes the derived implementation via the vtable, printing `"Hello, World!"` to `std::cout`. The entry is tagged `modern` because `override` (alongside `final` and `= default`) is a C++11 feature and the code relies on virtual dispatch through a base pointer rather than static method calls.

## Source Code

`main.cpp`:

```cpp
#include <iostream>

struct Base {
    virtual void greet() { }
};

struct Greeter : Base {
    void greet() override {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    Base* b = new Greeter();
    b->greet();
    delete b;
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0071-virtual-override-modern
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in C++ |
| paradigm | `oop` | Inheritance + virtual dispatch through a base pointer |
| output | `stdout` | `std::cout` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses the C++11 `override` keyword for explicit overriding |
| tags | `[]` | No special technique beyond idiomatic modern C++ virtual dispatch |

## Reference

- [cppreference — override (since C++11)](https://en.cppreference.com/w/cpp/language/override)
- [cppreference — virtual functions](https://en.cppreference.com/w/cpp/language/virtual)
