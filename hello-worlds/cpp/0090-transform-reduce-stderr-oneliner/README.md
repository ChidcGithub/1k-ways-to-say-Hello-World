---
id: 0090
language: cpp
paradigm: functional
output: stderr
platform: cli
era: modern
tags: [one-liner]
notes: "std::transform_reduce over a char array to build the string; one-liner body; output to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0090 · C++ transform_reduce stderr One-Liner

## Description

A modern functional Hello World whose entire `main` body is a single expression statement: `std::transform_reduce` folds over the 13 characters of the string literal `"Hello, World!"`, mapping each `char` to a single-character `std::string` via the unary transform and concatenating pairs with the binary `+`. The result is streamed directly to `std::cerr`. The single-range `transform_reduce` is the C++17 parallel-friendly analogue of `std::accumulate`, here used purely functionally over a char range, with the body collapsed to one statement.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <numeric>
#include <string>
int main(){ std::cerr<<std::transform_reduce("Hello, World!","Hello, World!"+13,std::string(""),[](std::string a,std::string b){return a+b;},[](char c){return std::string(1,c);})<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0090-transform-reduce-stderr-oneliner
g++ -std=c++20 main.cpp -o hello.exe && hello.exe 2>&1
```

The greeting is written to `stderr`; the `2>&1` redirect merges it with `stdout` so it is visible in the same terminal.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Uses `std::transform_reduce` — a parallel-friendly fold over a range |
| output | `stderr` | Writes via `std::cerr` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::transform_reduce` is C++17 (2017), modern era |
| tags | `[one-liner]` | The body of `main` is a single expression statement |

## Reference

- [cppreference — std::transform_reduce](https://en.cppreference.com/w/cpp/algorithm/transform_reduce)
