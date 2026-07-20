---
id: 0089
language: cpp
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Recursive lambda via std::function printing the greeting char by char (contemporary)."
author: ChidcGithub
date: 2026-07-20
---

# #0089 · C++ Recursive Lambda Contemporary

## Description

A contemporary functional Hello World that uses a recursive lambda wrapped in `std::function<void(const std::string&, size_t)>` to print the greeting one character at a time. The lambda captures itself by reference (`[&]`), recursing on the index until it reaches the end of the string, then emits a newline. Lambdas in C++ cannot refer to themselves by name directly; `std::function` provides the named storage required for self-reference, making this a clear demonstration of contemporary functional recursion in C++.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <functional>
#include <string>
int main(){ std::function<void(const std::string&,size_t)> rec=[&](const std::string& s,size_t i){ if(i<s.size()){ std::cout<<s[i]; rec(s,i+1); } else { std::cout<<std::endl; } }; rec("Hello, World!",0); }
```

## Run

```bash
cd hello-worlds/cpp/0089-recursive-lambda-contemporary
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Uses a recursive first-class lambda (function as value, self-application) |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | `std::function` + lambdas with capture are C++14/17 era (contemporary) |
| tags | `[]` | No special technique worth indexing beyond the recursive-lambda idiom |

## Reference

- [cppreference — std::function](https://en.cppreference.com/w/cpp/utility/functional/function)
- [cppreference — Lambda captures](https://en.cppreference.com/w/cpp/language/lambda#Lambda_capture)
