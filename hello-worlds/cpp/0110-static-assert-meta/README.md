---
id: 0110
language: cpp
paradigm: meta
output: stdout
platform: cli
era: modern
tags: []
notes: "static_assert verifies message length at compile time; prints at runtime."
author: ChidcGithub
date: 2026-07-20
---

# #0110 · C++ Static Assert Meta

## Description

A modern C++ Hello World that uses `static_assert` to verify a property of the greeting at compile time, then prints it at runtime. The line `static_assert(sizeof("Hello, World!")-1==13, "length check")` is evaluated entirely by the compiler: `sizeof("Hello, World!")` is 14 (13 visible characters plus the implicit null terminator), so subtracting 1 yields the expected length 13. If the literal were ever edited to a different length, the program would fail to compile. Only after this compile-time check passes does `std::cout<<msg<<std::endl;` execute at runtime. This entry showcases `static_assert` (C++11) as a meta-programming tool for compile-time invariants.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <cstring>
int main(){ constexpr const char* msg="Hello, World!"; static_assert(sizeof("Hello, World!")-1==13,"length check"); std::cout<<msg<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0110-static-assert-meta
g++ -std=c++20 main.cpp -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `meta` | `static_assert` enforces a compile-time invariant on the greeting |
| output | `stdout` | `std::cout` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `static_assert` introduced in C++11 (modern C++) |
| tags | `[]` | No special technique worth indexing beyond the static-assert idiom |

## Reference

- [cppreference — static_assert declaration](https://en.cppreference.com/w/cpp/language/static_assert)
