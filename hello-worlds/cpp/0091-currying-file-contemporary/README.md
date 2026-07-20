---
id: 0091
language: cpp
paradigm: functional
output: file
platform: cli
era: contemporary
tags: []
notes: "Curried function building the greeting; writes result to a file (contemporary)."
author: ChidcGithub
date: 2026-07-20
---

# #0091 · C++ Currying File Contemporary

## Description

A contemporary functional Hello World that builds the greeting through manual currying: `greet(a)(b)(c)` is a chain of three lambdas, each capturing its argument by value and returning the next. The curried call `greet("Hello")(", World")("!")` produces the full string, which is then written to `hello.txt` and echoed to `stdout` for verification. Currying is a hallmark of functional languages like Haskell; this entry demonstrates it idiomatically in C++ using nested generic lambdas, with the filesystem as the durable destination.

## Source Code

`main.cpp`:

```cpp
#include <fstream>
#include <iostream>
#include <string>
auto greet=[](std::string a){ return [=](std::string b){ return [=](std::string c){ return a+b+c; }; }; };
int main(){ auto r=greet("Hello")(", World")("!"); std::ofstream f("hello.txt"); f<<r; f.close(); std::cout<<r<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0091-currying-file-contemporary
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

After running, a file `hello.txt` will appear next to `main.cpp` containing `Hello, World!`, and the same string will be printed to `stdout`.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Uses currying — a function returning functions returning a function |
| output | `file` | The greeting is written to `hello.txt` on disk; `stdout` is only a verification echo |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | Generic lambdas with captures are C++14/17 era (contemporary) |
| tags | `[]` | No special technique worth indexing beyond the currying idiom |

## Reference

- [cppreference — Lambda expressions](https://en.cppreference.com/w/cpp/language/lambda)
- [cppreference — std::ofstream](https://en.cppreference.com/w/cpp/io/basic_ofstream)
