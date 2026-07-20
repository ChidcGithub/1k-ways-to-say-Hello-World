---
id: 0102
language: cpp
paradigm: generic
output: stdout
platform: cli
era: modern
tags: []
notes: "Variadic template prints all arguments via recursion (pre-fold-expression style)."
author: ChidcGithub
date: 2026-07-20
---

# #0102 · Variadic Template Modern

## Description

A variadic function template `printAll(T first, Args... rest)` peels one argument off the pack, prints it, and recurses on the remainder. A no-argument overload terminates the recursion. `main` calls `printAll("Hello", ", ", "World!")` to assemble the greeting piece by piece on `std::cout`. This is the pre-C++17 idiom for processing parameter packs — before fold expressions (`(std::cout << ... << args)`, C++17) replaced the boilerplate — and is included to show how generic argument-list processing looked in early-modern C++ (C++11).

## Source Code

`main.cpp`:

```cpp
#include <iostream>
void printAll(){}
template<typename T,typename... Args> void printAll(T first,Args... rest){ std::cout<<first; printAll(rest...); }
int main(){ printAll("Hello",", ","World!"); std::cout<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0102-variadic-template-modern
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 source compiled with `g++` |
| paradigm | `generic` | Variadic template parameter pack with recursive instantiation |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Variadic templates arrived in C++11 (2011), the start of modern C++ |
| tags | `[]` | The recursion-vs-pack idiom itself is the feature, no extra tag needed |
