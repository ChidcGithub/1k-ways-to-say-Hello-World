---
id: 0198
language: c
paradigm: functional
output: stdout
platform: cli
era: classic
tags: []
notes: "Function pointer used to call the greeting function."
author: ChidcGithub
date: 2026-07-20
---

# #0198 · C Function Pointer

## Description

A C Hello World that exercises the function-pointer mechanism. The greeting logic is factored into a standalone `greet` function, and `main` invokes it indirectly through a typed function pointer `fp`. This demonstrates the cornerstone of C's "functional" style — first-class references to functions — without any procedural shortcut.

## Source Code

`main.c`:

```c
#include <stdio.h>
void greet(void) { printf("Hello, World!\n"); }
int main(void) { void (*fp)(void) = greet; fp(); return 0; }
```

## Run

```bash
cd hello-worlds/c/0198-function-pointer
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `functional` | Greeting invoked indirectly via a function pointer |
| output | `stdout` | Output written via `printf` to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Function pointers standardized in C89/C90 |
| tags | `[]` | No special technique beyond the function pointer |

## Reference

- ISO/IEC 9899:1990 — C90 standard where function pointers are part of the language core.
