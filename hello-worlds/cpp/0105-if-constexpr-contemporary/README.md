---
id: 0105
language: cpp
paradigm: generic
output: stdout
platform: cli
era: contemporary
tags: []
notes: "C++17 if constexpr in a template to dispatch based on type; prints greeting for const char*."
author: ChidcGithub
date: 2026-07-20
---

# #0105 · if constexpr Contemporary

## Description

A function template `greet<T>` uses C++17 `if constexpr (std::is_same_v<T,const char*>)` to discard the wrong branch at compile time and emit only the print path for `const char*`. The `else` branch (which would print `(unsupported)`) is not instantiated at all for the call in `main`, so it does not even need to compile for non-string types — a sharper tool than #0103's SFINAE (which disables the candidate) or #0101's specialisation (which requires a second body). `if constexpr` is the contemporary, in-body form of type-based dispatch and the most readable of the three.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <type_traits>
template<typename T> void greet(T t){ if constexpr(std::is_same_v<T,const char*>){ std::cout<<t<<std::endl; } else { std::cout<<"(unsupported)"<<std::endl; } }
int main(){ greet("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/cpp/0105-if-constexpr-contemporary
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 source compiled with `g++` |
| paradigm | `generic` | Function template dispatched by `if constexpr` on a type trait |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | `if constexpr` is C++17 (2017); combined with `std::is_same_v` it sits in the contemporary era |
| tags | `[]` | `if constexpr` is now idiomatic, no obfuscation or code-golf angle |
