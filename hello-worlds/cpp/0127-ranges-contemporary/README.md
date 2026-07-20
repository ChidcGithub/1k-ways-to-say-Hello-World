---
id: 0127
language: cpp
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "C++20 std::ranges to iterate over the greeting characters; contemporary functional style."
author: ChidcGithub
date: 2026-07-20
---

# #0127 · std::ranges Contemporary Hello World

## Description

A contemporary functional-style Hello World that drives the output through a C++20 ranges pipeline. The greeting string `s` is piped through `std::views::all` — the no-op view that returns a view over the entire underlying range without copying or transforming — and the resulting range is consumed by a range-based `for` loop that emits one character at a time to `std::cout`. While `all` is functionally a passthrough here (and the loop would behave identically without it), its presence demonstrates the ranges composition syntax (`s | std::views::all`) that scales to non-trivial pipelines like `s | std::views::filter(...) | std::views::transform(...)`. The greeting is built character-by-character through iteration over a lazy view rather than printed in one shot, which is the hallmark of the functional paradigm in this collection.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <ranges>
#include <string>
int main(){ std::string s="Hello, World!"; for(char c: s | std::views::all){ std::cout<<c; } std::cout<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0127-ranges-contemporary
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

> Antivirus note: the user's environment deletes generated `.exe` files, so syntax-only verification (`g++ -std=c++20 -fsyntax-only main.cpp`) is the supported verification path on this machine.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Iteration is over a lazy `std::views` range pipeline rather than an indexed loop |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | `std::ranges` / `std::views::all` are C++20 (2020), contemporary era |
| tags | `[]` | No special technique worth indexing beyond the ranges-pipeline idiom |

## Reference

- [cppreference — std::ranges](https://en.cppreference.com/w/cpp/ranges)
- [cppreference — std::views::all](https://en.cppreference.com/w/cpp/ranges/all_view)
- [P0896 R18 — The One Ranges Proposal](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p0896r4.pdf)
