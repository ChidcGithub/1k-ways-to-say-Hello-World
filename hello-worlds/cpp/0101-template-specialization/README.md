---
id: 0101
language: cpp
paradigm: generic
output: stdout
platform: cli
era: classic
tags: []
notes: "Explicit template specialization for const char* with a custom greeting message."
author: ChidcGithub
date: 2026-07-20
---

# #0101 · Template Specialization

## Description

A primary template `greet<T>()` prints a placeholder `(default)`, while an explicit specialisation for `const char*` overrides it to print `Hello, World!`. The call site names the specialisation directly via `greet<const char*>()`. Compared with #0100 (where the template body does all the work for every `T`), this entry demonstrates the classic specialisation pattern: a generic shell plus a type-specific override, the building block of type-based dispatch in pre-`if constexpr` C++.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
template<typename T> void greet(){ std::cout<<"(default)"<<std::endl; }
template<> void greet<const char*>(){ std::cout<<"Hello, World!"<<std::endl; }
int main(){ greet<const char*>(); }
```

## Run

```bash
cd hello-worlds/cpp/0101-template-specialization
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 source compiled with `g++` |
| paradigm | `generic` | Primary template + explicit specialisation |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Explicit specialisation has been in C++ since the ISO/ANSI era (1998) |
| tags | `[]` | No special technique beyond the specialisation idiom |
