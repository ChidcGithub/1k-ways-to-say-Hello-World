---
id: 0125
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: [polyglot]
notes: "Same file valid as both C and C++; prints 'Hello, World!' in each."
author: ChidcGithub
date: 2026-07-20
---

# #0125 · Polyglot C / C++ Hello World

## Description

A polyglot Hello World: a single source file that compiles and runs identically under both C and C++. The file uses only constructs that are well-defined in both languages — `#include <stdio.h>` (the C-hosted header that C++ also exposes), `int main(void)` (a prototype-style declaration that is acceptable in both languages), an explicit `return 0;`, and a `printf` call. Nothing in the file relies on C++-only features (no `<iostream>`, no overloading, no `//` comments in this minimal form) and nothing relies on C-only behavior that C++ rejects (no implicit int, no designated initializers, no `register` keyword semantics). The result is a true polyglot: `gcc main.c -o hello` and `g++ main.cpp -o hello` produce binaries with the same observable behavior.

### Why this is interesting

Most C code is "mostly valid C++", but the two languages have diverged enough that the intersection is narrower than it appears. This entry deliberately stays inside that intersection without resorting to preprocessor tricks (`#ifdef __cplusplus` etc.), making it a clean baseline polyglot rather than a dual-personality file.

## Source Code

`main.cpp`:

```cpp
#include <stdio.h>
int main(void){ printf("Hello, World!\n"); return 0; }
```

## Run

Compile and run as **C++**:

```bash
cd hello-worlds/cpp/0125-polyglot-c-cpp
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

Compile and run as **C** (rename or copy to `.c` first):

```bash
cp main.cpp main.c
gcc -std=c11 main.c -o hello_c.exe
./hello_c.exe
```

Both invocations print `Hello, World!` to standard output.

> Antivirus note: the user's environment deletes generated `.exe` files, so syntax-only verification (`g++ -std=c++20 -fsyntax-only main.cpp` and `gcc -std=c11 -fsyntax-only main.c`) is the supported verification path on this machine.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20`; also valid as C |
| paradigm | `procedural` | Single call to `printf` in `main` |
| output | `stdout` | `printf` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Uses only K&R-compatible constructs (`<stdio.h>`, `int main(void)`, `printf`) |
| tags | `[polyglot]` | Same source compiles cleanly under both C and C++ |

## Reference

- [cppreference — Compatibility of C and C++](https://en.cppreference.com/w/cpp/language/compatibility)
- [Wikipedia — C and C++ compatibility](https://en.wikipedia.org/wiki/Compatibility_of_C_and_C%2B%2B)
