---
id: 0100
language: cpp
paradigm: generic
output: stdout
platform: cli
era: classic
tags: []
notes: "Basic function template greet<T>() prints any type; instantiated with const char*."
author: ChidcGithub
date: 2026-07-20
---

# #0100 · Template Basic

## Description

The simplest possible generic-programming Hello World: a function template `greet<T>` that forwards whatever it receives to `std::cout`. Because the template parameter is deduced from the argument, calling `greet("Hello, World!")` instantiates `greet<const char*>` and prints the greeting. No specialisation, no constraints, no traits — the entry exists to anchor the generic-paradigm series at its most reduced form, against which the later template entries (specialisation, SFINAE, `if constexpr`, …) can be contrasted.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
template<typename T> void greet(T msg){ std::cout<<msg<<std::endl; }
int main(){ greet("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/cpp/0100-template-basic
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 source compiled with `g++` |
| paradigm | `generic` | A function template parameterised over `T` |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Function templates have been in C++ since the ISO/ANSI era (1998) |
| tags | `[]` | Nothing beyond the basic template idiom worth indexing |
