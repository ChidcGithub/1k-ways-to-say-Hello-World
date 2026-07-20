---
id: 0092
language: cpp
paradigm: functional
output: stderr
platform: cli
era: contemporary
tags: []
notes: "Monadic-style chaining via std::optional (contemporary) with .and_then; prints to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0092 · C++ Optional Chain stderr Contemporary

## Description

A contemporary functional Hello World that builds the greeting through monadic chaining of `std::optional<std::string>` values using the C++23 `.and_then` combinator. The seed `addHello()` returns `std::optional("Hello")`, which is then chained through `addRest` to append `", World!"`. Each step is a function `std::string -> std::optional<std::string>`, the signature `.and_then` expects; the empty optional short-circuits the chain. The result, if present, is written to `std::cerr`. This entry showcases the monadic `optional` API standardised in C++23.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <optional>
#include <string>
std::optional<std::string> addHello(){ return "Hello"; }
std::optional<std::string> addRest(std::string s){ return s+", World!"; }
int main(){ auto r=addHello().and_then(addRest); if(r) std::cerr<<*r<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0092-optional-chain-stderr-contemporary
g++ -std=c++23 main.cpp -o hello.exe && hello.exe 2>&1
```

The greeting is written to `stderr`; the `2>&1` redirect merges it with `stdout` so it is visible in the same terminal. Note: `.and_then` requires C++23, so `-std=c++23` is used instead of `-std=c++20`.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++23` |
| paradigm | `functional` | Monadic chaining via `std::optional::and_then` — functions as values composed through a monad |
| output | `stderr` | Writes via `std::cerr` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | `std::optional::and_then` is C++23 (2024), contemporary era |
| tags | `[]` | No special technique worth indexing beyond the monadic-chain idiom |

## Reference

- [cppreference — std::optional::and_then](https://en.cppreference.com/w/cpp/utility/optional/and_then)
- [P0798 R10 — Monadic operations for std::optional](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p0798r10.html)
