---
id: 0085
language: cpp
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Immediately-invoked lambda expression (IIFE) printing the greeting; one-liner main body."
author: ChidcGithub
date: 2026-07-20
---

# #0085 · C++ IIFE One-Liner

## Description

A modern C++ Hello World whose `main` body is a single statement: an immediately-invoked lambda expression (IIFE). The lambda `[](){ std::cout<<"Hello, World!"<<std::endl; }` captures nothing (`[]`), takes no arguments, and is invoked in place with the trailing `()`. This mirrors the IIFE pattern popularized in JavaScript and applied here to C++11 lambdas. It differs from a canonical C++ Hello World (`std::cout << "Hello, World!";`) by wrapping the side effect in a first-class closure that is defined and called in the same expression — showcasing C++'s functional capabilities in a one-liner form.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
int main(){ [](){ std::cout<<"Hello, World!"<<std::endl; }(); }
```

## Run

```bash
cd hello-worlds/cpp/0085-lambda-immediate-oneliner
g++ -std=c++20 main.cpp -o hello.exe
hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in the C++ programming language |
| paradigm | `functional` | Body is a first-class lambda invoked in place (IIFE) |
| output | `stdout` | `std::cout` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses C++11 lambda expressions (modern C++) |
| tags | `[one-liner]` | `main` body is a single statement |

## Reference

- [Lambda expressions — cppreference](https://en.cppreference.com/w/cpp/language/lambda)
- [IIFE pattern — Wikipedia](https://en.wikipedia.org/wiki/Immediately_invoked_function_expression)
