---
id: 0104
language: cpp
paradigm: generic
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "constexpr template meta-function returns the greeting; one-liner main."
author: ChidcGithub
date: 2026-07-20
---

# #0104 · Constexpr Meta One-Liner

## Description

A class template `Greeting<N>` exposes a `static constexpr const char* value` holding the greeting — a tiny compile-time meta-function keyed on an integer `N`. `main` collapses to a single statement that streams `Greeting<0>::value` to `std::cout`. Although `value` is known at compile time and the template could in principle dispatch to different strings for different `N`, here every instantiation returns the same greeting, so the entry functions as a one-liner that demonstrates how template-meta constants are accessed. Contrasts with #0100 (a function template that takes the value at runtime) by moving the value into the type system itself.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
template<int N> struct Greeting{ static constexpr const char* value="Hello, World!"; };
int main(){ std::cout<<Greeting<0>::value<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0104-constexpr-meta-oneliner
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 source compiled with `g++` |
| paradigm | `generic` | Class template with a `constexpr` static member — compile-time meta-value |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `constexpr` static members are C++11 (2011), modern era |
| tags | `[one-liner]` | `main` body is a single streaming statement |
