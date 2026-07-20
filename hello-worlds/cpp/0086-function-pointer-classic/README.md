---
id: 0086
language: cpp
paradigm: functional
output: stdout
platform: cli
era: classic
tags: []
notes: "Classic function pointer: greet() invoked through a pointer; pre-lambda functional style."
author: ChidcGithub
date: 2026-07-20
---

# #0086 · C++ Function Pointer Classic

## Description

A pre-lambda functional Hello World in C++: the free function `greet()` is referenced through a function pointer `void (*fp)()`, which is then invoked with `fp()`. Function pointers are the original mechanism by which C and C++ treat functions as first-class values, predating `std::function` and lambdas by decades. This entry captures that classic style deliberately, using only `<iostream>` and a raw pointer-to-function — no templates, no captures, no modern machinery.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
void greet(){ std::cout<<"Hello, World!"<<std::endl; }
int main(){ void(*fp)()=greet; fp(); }
```

## Run

```bash
cd hello-worlds/cpp/0086-function-pointer-classic
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Treats a function as a value by storing it in a function pointer |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Function pointers predate C++98, `std::function`, and lambdas by decades |
| tags | `[]` | No special technique worth indexing beyond the classic idiom |

## Reference

- [cppreference — Pointers to functions](https://en.cppreference.com/w/cpp/language/pointer#Pointers_to_functions)
