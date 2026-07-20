---
id: 0111
language: cpp
paradigm: meta
output: stdout
platform: cli
era: contemporary
tags: [one-liner]
notes: "User-defined literal operator returns the greeting; one-liner main."
author: ChidcGithub
date: 2026-07-20
---

# #0111 · C++ User-Defined Literal One-Liner

## Description

A contemporary C++ Hello World where the greeting is produced by a user-defined literal operator. The line `const char* operator""_hello(unsigned long long){ return "Hello, World!"; }` defines a literal suffix `_hello` that, when appended to any integer literal, yields the greeting string. The body of `main` is a single statement — `std::cout<<1_hello<<std::endl;` — that writes the result of evaluating the literal `1_hello` to standard output. The numeric value `1` is ignored; only the suffix matters. This entry showcases the C++11 user-defined literal mechanism in a one-liner form, treating the greeting as a value returned by a custom literal operator.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
const char* operator""_hello(unsigned long long){ return "Hello, World!"; }
int main(){ std::cout<<1_hello<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0111-user-literal-oneliner
g++ -std=c++20 main.cpp -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `meta` | Greeting produced by a user-defined literal operator (compile-time-recognised token) |
| output | `stdout` | `std::cout` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | User-defined literals refined across C++11–C++14, contemporary idiom |
| tags | `[one-liner]` | `main` body is a single statement |

## Reference

- [cppreference — User-defined literals](https://en.cppreference.com/w/cpp/language/user_literal)
