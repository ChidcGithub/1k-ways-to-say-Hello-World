---
id: 0088
language: cpp
paradigm: functional
output: stderr
platform: cli
era: modern
tags: []
notes: "Composes two functions (add exclamation + add comma) and prints result to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0088 · C++ Compose to stderr

## Description

A modern functional Hello World that composes two lambdas — `addComma` and `addBang` — using a higher-order `compose` combinator that returns a new function `g ∘ f`. The composed function is applied to the seed `"Hello"` to produce the full greeting, which is then written to `std::cerr` rather than `std::cout`. Function composition is a cornerstone idiom of functional programming, here expressed with C++14 generic lambdas and `auto` return types. Redirecting to stderr makes the entry distinct from typical stdout output and exercises a separate stream.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <string>
auto addComma=[](std::string s){ return s+", World"; };
auto addBang=[](std::string s){ return s+"!"; };
auto compose=[](auto f,auto g){ return [=](std::string s){ return g(f(s)); }; };
int main(){ auto fn=compose(addComma,addBang); std::cerr<<fn("Hello")<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0088-compose-stderr
g++ -std=c++20 main.cpp -o hello.exe && hello.exe 2>&1
```

The greeting is written to `stderr`; the `2>&1` redirect merges it with `stdout` so it is visible in the same terminal.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Uses a higher-order `compose` combinator returning a new function |
| output | `stderr` | Writes via `std::cerr` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Generic lambdas with `auto` parameters are C++14 (2014), modern era |
| tags | `[]` | No special technique worth indexing beyond the composition idiom |

## Reference

- [cppreference — Lambda expressions](https://en.cppreference.com/w/cpp/language/lambda)
- [cppreference — std::cerr](https://en.cppreference.com/w/cpp/io/cerr)
