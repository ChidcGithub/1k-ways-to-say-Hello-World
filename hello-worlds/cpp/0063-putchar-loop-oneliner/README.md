---
id: 0063
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: [one-liner]
notes: "One-liner: range-for over a char array calling putchar (vintage C-style)."
author: ChidcGithub
date: 2026-07-20
---

# #0063 · Putchar Loop One-Liner Hello

## Description

A vintage-flavored one-liner: a range-based for loop iterates over the characters of the string literal `"Hello, World!"` (a `const char[14]` array, including the null terminator), and each non-null character is emitted with `putchar`. The `if(c)` guard skips the null terminator that the range-for would otherwise visit. The entire body of `main` is a single statement, mixing C++11 range-for syntax with the C standard library's `putchar` — a deliberately terse, K&R-spirited form.

## Source Code

`main.cpp`:

```cpp
#include <cstdio>
int main() { for(char c : "Hello, World!") if(c) putchar(c); }
```

## Run

```bash
cd hello-worlds/cpp/0063-putchar-loop-oneliner
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 source using the C++11 range-for with the C standard library's `putchar` |
| paradigm | `procedural` | A single loop with no classes, closures, or higher-order functions |
| output | `stdout` | `putchar` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | The constituent pieces (`putchar`, pointer-decayed string iteration) are K&R-era C; the range-for is the only modern touch |
| tags | `[one-liner]` | The entire body of `main` is a single statement on one source line |

## Reference

- [C++ Reference: `std::putchar`](https://en.cppreference.com/w/cpp/io/c/putchar)
- [C++ Reference: Range-based for loop](https://en.cppreference.com/w/cpp/language/range-for)
