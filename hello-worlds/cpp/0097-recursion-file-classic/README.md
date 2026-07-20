---
id: 0097
language: cpp
paradigm: functional
output: file
platform: cli
era: classic
tags: []
notes: "Recursive function builds the string char-by-char; writes result to file."
author: ChidcGithub
date: 2026-07-20
---

# #0097 · C++ Recursion File Classic

## Description

A classic functional Hello World that builds the greeting through structural recursion. `build(s, i)` returns the empty string when `i` reaches the end of `s`, otherwise it returns `s[i]` concatenated with `build(s, i+1)`. Each call peels off one character and defers the rest to the recursive call, so `build("Hello, World!", 0)` reconstructs the entire string through 14 nested stack frames. The result is written to `hello.txt` and echoed to `stdout`. This is plain C++98-style recursion — no lambdas, no `constexpr`, no templates — placing it firmly in the classic era.

## Source Code

`main.cpp`:

```cpp
#include <fstream>
#include <iostream>
#include <string>
std::string build(const std::string& s,size_t i){ if(i>=s.size()) return ""; return std::string(1,s[i])+build(s,i+1); }
int main(){ std::string r=build("Hello, World!",0); std::ofstream f("hello.txt"); f<<r; f.close(); std::cout<<r<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0097-recursion-file-classic
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

After running, a file `hello.txt` will appear next to `main.cpp` containing `Hello, World!`, and the same string will be printed to `stdout`.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Pure recursive function with no mutable state — classic Church-style recursion |
| output | `file` | The greeting is written to `hello.txt` on disk; `stdout` is only a verification echo |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Plain pre-C++11 recursion with `std::string` concatenation (classic) |
| tags | `[]` | No special technique worth indexing beyond the recursion idiom |

## Reference

- [cppreference — std::string](https://en.cppreference.com/w/cpp/string/basic_string)
- [cppreference — std::ofstream](https://en.cppreference.com/w/cpp/io/basic_ofstream)
