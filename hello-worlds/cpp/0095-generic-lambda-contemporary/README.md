---
id: 0095
language: cpp
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "C++14 generic lambda with auto parameter; prints the greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0095 · C++ Generic Lambda Contemporary

## Description

A contemporary functional Hello World that uses a C++14 generic lambda — a lambda with `auto` parameter type — to define a polymorphic printer. The lambda `[](auto s){ std::cout<<s<<std::endl; }` accepts any type whose `operator<<` overload is visible, so `greet("Hello, World!")` works for string literals just as it would for `int`, `std::string`, or any printable type. This demonstrates template-like polymorphism in a first-class function value, the C++ equivalent of a generic higher-order function.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
int main(){ auto greet=[](auto s){ std::cout<<s<<std::endl; }; greet("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/cpp/0095-generic-lambda-contemporary
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | First-class lambda value used as a generic higher-order function |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | Generic lambdas with `auto` parameters are a C++14 feature (contemporary) |
| tags | `[]` | No special technique worth indexing beyond the generic-lambda idiom |

## Reference

- [cppreference — Generic lambdas](https://en.cppreference.com/w/cpp/language/lambda#Generic_lambdas)
- [cppreference — Lambda expressions](https://en.cppreference.com/w/cpp/language/lambda)
