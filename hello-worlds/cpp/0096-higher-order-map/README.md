---
id: 0096
language: cpp
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Higher-order function: map over a vector of chars, transform identity, print."
author: ChidcGithub
date: 2026-07-20
---

# #0096 · C++ Higher-Order Map

## Description

A modern functional Hello World that frames the greeting as a `map` operation: `std::transform` walks a `std::vector<char>` of the greeting's characters and applies an identity lambda `[](char c){ return c; }` in place. The transformed range is then reconstructed into a `std::string` and printed. Although the mapping is the identity function (so the output equals the input), the structure demonstrates the canonical functional `map` pipeline — apply a pure function to each element of a functor — expressed idiomatically through the C++ STL.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
int main(){ std::vector<char> v{'H','e','l','l','o',',',' ','W','o','r','l','d','!'}; std::transform(v.begin(),v.end(),v.begin(),[](char c){return c;}); std::string s(v.begin(),v.end()); std::cout<<s<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0096-higher-order-map
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | `std::transform` is the STL equivalent of `map`, applying a pure lambda to each element |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::transform` plus lambdas are C++11 era (modern) |
| tags | `[]` | No special technique worth indexing beyond the map idiom |

## Reference

- [cppreference — std::transform](https://en.cppreference.com/w/cpp/algorithm/transform)
- [cppreference — Lambda expressions](https://en.cppreference.com/w/cpp/language/lambda)
