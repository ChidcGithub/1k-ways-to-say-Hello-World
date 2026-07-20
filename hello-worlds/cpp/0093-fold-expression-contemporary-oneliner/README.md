---
id: 0093
language: cpp
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: [one-liner]
notes: "C++17 fold expression over a parameter pack to print the greeting; one-liner body."
author: ChidcGithub
date: 2026-07-20
---

# #0093 · C++ Fold Expression Contemporary One-Liner

## Description

A contemporary functional Hello World that uses a C++17 fold expression to expand a parameter pack into a single `std::cout` insertion chain. The binary left fold `(std::cout<<...<<t)` becomes `std::cout<<t1<<t2<<t3` at instantiation time, so `printAll("Hello",", ","World!")` emits `Hello, World!` followed by a newline. The entire `main` body is a single line, making this a genuine one-liner driven by pack expansion rather than by string concatenation.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
template<typename... T> void printAll(T... t){ (std::cout<<...<<t)<<std::endl; }
int main(){ printAll("Hello",", ","World!"); }
```

## Run

```bash
cd hello-worlds/cpp/0093-fold-expression-contemporary-oneliner
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Variadic template with pack expansion — functions applied to a pack of arguments |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | Fold expressions are a C++17 feature (contemporary) |
| tags | `[one-liner]` | The `main` body is a single statement |

## Reference

- [cppreference — Fold expressions](https://en.cppreference.com/w/cpp/language/fold)
- [cppreference — Parameter packs](https://en.cppreference.com/w/cpp/language/parameter_pack)
