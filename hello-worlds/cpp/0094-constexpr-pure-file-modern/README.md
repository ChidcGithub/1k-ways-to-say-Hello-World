---
id: 0094
language: cpp
paradigm: functional
output: file
platform: cli
era: modern
tags: []
notes: "Pure constexpr function computes the greeting at compile time; writes to file at runtime."
author: ChidcGithub
date: 2026-07-20
---

# #0094 · C++ Constexpr Pure File Modern

## Description

A modern functional Hello World that computes the greeting at compile time via a pure `constexpr` function `greet()` returning `"Hello, World!"`. The result is stored in a `constexpr auto` variable, guaranteeing the string literal is fixed at translation time. At runtime, `main` opens `hello.txt`, writes the compile-time-constant message to disk, closes the file, and echoes the same message to `stdout`. The purity of `greet` (no side effects, deterministic) is what makes it eligible for `constexpr`, separating the pure computation from the impure I/O.

## Source Code

`main.cpp`:

```cpp
#include <fstream>
#include <iostream>
constexpr const char* greet(){ return "Hello, World!"; }
int main(){ constexpr auto msg=greet(); std::ofstream f("hello.txt"); f<<msg; f.close(); std::cout<<msg<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0094-constexpr-pure-file-modern
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

After running, a file `hello.txt` will appear next to `main.cpp` containing `Hello, World!`, and the same string will be printed to `stdout`.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Pure `constexpr` function with no side effects, referentially transparent |
| output | `file` | The greeting is written to `hello.txt` on disk; `stdout` is only a verification echo |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `constexpr` functions on non-literal return types like `const char*` are C++11/14 era (modern) |
| tags | `[]` | No special technique worth indexing beyond the constexpr idiom |

## Reference

- [cppreference — constexpr](https://en.cppreference.com/w/cpp/language/constexpr)
- [cppreference — std::ofstream](https://en.cppreference.com/w/cpp/io/basic_ofstream)
