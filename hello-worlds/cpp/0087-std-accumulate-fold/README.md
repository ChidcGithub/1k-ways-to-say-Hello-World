---
id: 0087
language: cpp
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Folds over a vector of string fragments using std::accumulate (left fold)."
author: ChidcGithub
date: 2026-07-20
---

# #0087 · C++ std::accumulate Fold

## Description

A modern functional Hello World that builds the greeting by folding over a `std::vector<std::string>` of fragments with `std::accumulate` — the C++ equivalent of a left fold. Each fragment (`"Hello"`, `", "`, `"World!"`) is concatenated onto the accumulator (an empty `std::string`), producing the final string via `operator+`. Unlike a loop-based concatenation, this treats the fragments as data and the binary operation as the combinator — the canonical functional fold pattern, expressed idiomatically with the `<numeric>` standard algorithm.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <numeric>
#include <vector>
#include <string>
int main(){ std::vector<std::string> parts={"Hello",", ","World!"}; std::string r=std::accumulate(parts.begin(),parts.end(),std::string("")); std::cout<<r<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0087-std-accumulate-fold
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Uses `std::accumulate` — a left fold over a range |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::accumulate` and initializer lists are C++11 (2011), modern era |
| tags | `[]` | No special technique worth indexing beyond the standard fold idiom |

## Reference

- [cppreference — std::accumulate](https://en.cppreference.com/w/cpp/algorithm/accumulate)
