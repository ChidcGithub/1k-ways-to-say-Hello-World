---
id: 0106
language: cpp
paradigm: generic
output: stderr
platform: cli
era: modern
tags: []
notes: "Uses std::type_traits to conditionally print; output to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0106 · Type Traits Meta

## Description

A function template `greet<T>` consults `std::is_convertible_v<T,const char*>` at runtime and, when the trait is true, streams the argument to `std::cerr`. Unlike #0105's `if constexpr` (which discards the wrong branch at compile time) this version keeps both branches in the binary and selects at runtime — useful when the type is not known at instantiation time, or as a deliberate demonstration of the trait-by-trait dispatch pattern. The greeting therefore lands on `stderr` rather than `stdout`, mirroring several earlier stderr-themed entries in the series.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <type_traits>
template<typename T> void greet(T t){ if(std::is_convertible_v<T,const char*>){ std::cerr<<t<<std::endl; } }
int main(){ greet("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/cpp/0106-type-traits-meta
g++ -std=c++20 main.cpp -o hello.exe && hello.exe 2>&1
```

The greeting is written to `stderr`; the `2>&1` redirect merges it with `stdout` so it is visible in the same terminal.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 source compiled with `g++` |
| paradigm | `generic` | Function template gated by a `std::type_traits` query |
| output | `stderr` | Writes via `std::cerr` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::is_convertible_v` is C++17; the underlying trait is C++11, firmly modern |
| tags | `[]` | The runtime-trait-gated print is the only idiom worth noting |
