---
id: 0219
language: c
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: [polyglot]
notes: "Source valid as both C and C++; uses #ifdef __cplusplus guard."
author: ChidcGithub
date: 2026-07-20
---

# #0219 · C/C++ Polyglot

## Description

A single source file that compiles as both ISO C and ISO C++. The `#ifdef __cplusplus` guard emits `extern "C"` only when the C++ compiler is active, giving `main` C linkage in C++ while leaving the C build untouched. Both toolchains accept the resulting `int main(void)` and the `printf` call.

## Source Code

`main.c`:

```c
#include <stdio.h>
#ifdef __cplusplus
extern "C"
#endif
int main(void) { printf("Hello, World!\n"); return 0; }
```

## Run

```bash
cd hello-worlds/c/0219-polyglot-c-cpp
gcc -std=c11 main.c -o hello_c.exe && ./hello_c.exe
g++ -std=c++17 main.c -o hello_cpp.exe && ./hello_cpp.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Primary target is C; also valid as C++ |
| paradigm | `procedural` | Single `main` function with a `printf` call |
| output | `stdout` | Greeting written to stdout via `printf` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `extern "C"` linkage guard is a long-standing C/C++ interop idiom |
| tags | `[polyglot]` | Same source compiles under two languages |

## Reference

- ISO/IEC 14882:2017 §9.2.1 — Linkage specifications.
- ISO/IEC 9899:2011 §6.9 — External definitions.
