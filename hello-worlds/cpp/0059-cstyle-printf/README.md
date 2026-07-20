---
id: 0059
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: []
notes: "C-style printf from <cstdio>; C++ as a better C (vintage approach)."
author: ChidcGithub
date: 2026-07-20
---

# #0059 · C-Style printf Hello

## Description

A C++ program that uses the C standard library's `printf` from `<cstdio>` instead of the C++ iostreams library. This is the "C++ as a better C" vintage approach: the program is technically C++ (compiled with `-std=c++20`) but uses the same `printf` call that K&R C made famous. The only C++-specific feature in use is the `<cstdio>` header (which places `printf` in the `std` namespace, though it is also available in the global namespace).

## Source Code

`main.cpp`:

```cpp
#include <cstdio>
int main() { printf("Hello, World!\n"); }
```

## Run

```bash
cd hello-worlds/cpp/0059-cstyle-printf
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Compiled as C++20, but uses only the C standard library subset |
| paradigm | `procedural` | A single call to a C library function; no C++-specific abstractions |
| output | `stdout` | `printf` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `printf` predates C++ entirely (K&R C, late 1970s); using it in C++ reflects the "better C" era |
| tags | `[]` | No special technique; the C-heritage form |

## Reference

- [C++ Reference: `std::printf`](https://en.cppreference.com/w/cpp/io/c/printf)
- Brian W. Kernighan & Dennis M. Ritchie, *The C Programming Language* (1978) — origin of the `printf("Hello, World!\n")` idiom.
