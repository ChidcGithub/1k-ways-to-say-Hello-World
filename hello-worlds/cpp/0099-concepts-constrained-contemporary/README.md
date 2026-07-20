---
id: 0099
language: cpp
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "C++20 concepts: constrain a template to Printable; prints greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0099 · C++ Concepts Constrained Contemporary

## Description

A contemporary functional Hello World that uses C++20 concepts to constrain a function template. The `requires std::convertible_to<T, const char*>` clause on `greet` guarantees at instantiation time that the argument can be converted to a C-style string, so `greet("Hello, World!")` type-checks but `greet(42)` would fail with a clear concept-based diagnostic. Concepts replace SFINAE and `enable_if` with a readable, intention-revealing constraint, making this a textbook contemporary demonstration of constrained generic functional programming in C++.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <concepts>
template<typename T> requires std::convertible_to<T,const char*> void greet(T s){ std::cout<<s<<std::endl; }
int main(){ greet("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/cpp/0099-concepts-constrained-contemporary
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Generic function template constrained by a concept — typed functional polymorphism |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | `requires` clauses and `std::convertible_to` are C++20 concepts (contemporary) |
| tags | `[]` | No special technique worth indexing beyond the concepts idiom |

## Reference

- [cppreference — Constraints and concepts](https://en.cppreference.com/w/cpp/language/constraints)
- [cppreference — std::convertible_to](https://en.cppreference.com/w/cpp/concepts/convertible_to)
