---
id: 0109
language: cpp
paradigm: meta
output: stdout
platform: cli
era: modern
tags: []
notes: "constexpr array of char built at compile time from ASCII codes; printed at runtime."
author: ChidcGithub
date: 2026-07-20
---

# #0109 · C++ Constexpr Meta Array

## Description

A modern C++ Hello World where the greeting is materialised at compile time as a `constexpr` array of `char`, with each byte specified by its ASCII decimal code rather than a character literal. The array `{72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, 0}` decodes to `"Hello, World!\0"`. A second `constexpr size_t LEN = sizeof(MSG) - 1;` is computed at compile time from the array, demonstrating that both the data and its derived length are constant-expression meta-values available before runtime. Only the `std::cout<<MSG<<std::endl;` statement in `main` executes at runtime. This entry showcases the `constexpr` array declaration (C++11) as a compile-time meta-data technique.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
constexpr char MSG[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, 0};
constexpr size_t LEN = sizeof(MSG) - 1;
int main(){ std::cout<<MSG<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0109-constexpr-meta-array
g++ -std=c++20 main.cpp -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `meta` | Greeting stored as a `constexpr` array whose bytes are compile-time constants |
| output | `stdout` | `std::cout` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `constexpr` variables introduced in C++11 (modern C++) |
| tags | `[]` | No special technique worth indexing beyond the constexpr-meta idiom |

## Reference

- [cppreference — constexpr specifier](https://en.cppreference.com/w/cpp/language/constexpr)
- [ASCII table](https://en.wikipedia.org/wiki/ASCII)
