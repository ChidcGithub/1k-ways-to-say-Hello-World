---
id: 0098
language: cpp
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "std::for_each over the characters with a lambda that prints each."
author: ChidcGithub
date: 2026-07-20
---

# #0098 · C++ STL For-Each Modern

## Description

A modern functional Hello World that uses `std::for_each` to iterate over the characters of `Hello, World!`, applying a lambda that prints each character. `std::for_each` is the STL's canonical side-effectful `map_` — it walks the range and applies a callable, leaving the result of the call discarded but allowing the callable to perform output. A trailing `std::endl` flushes the line after the iteration completes. This is the idiomatic modern-C++ way to express "do something with each element" without an explicit index loop.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <algorithm>
#include <string>
int main(){ std::string s="Hello, World!"; std::for_each(s.begin(),s.end(),[](char c){ std::cout<<c; }); std::cout<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0098-stl-for-each-modern
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | `std::for_each` applies a first-class lambda to each element — the STL `forEach` combinator |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::for_each` with lambdas is C++11 era (modern) |
| tags | `[]` | No special technique worth indexing beyond the for-each idiom |

## Reference

- [cppreference — std::for_each](https://en.cppreference.com/w/cpp/algorithm/for_each)
- [cppreference — Lambda expressions](https://en.cppreference.com/w/cpp/language/lambda)
