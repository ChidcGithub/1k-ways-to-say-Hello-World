---
id: 0206
language: c
paradigm: generic
output: stdout
platform: cli
era: classic
tags: []
notes: "Generic macro GREET() expands to print the greeting; type-agnostic."
author: ChidcGithub
date: 2026-07-20
---

# #0206 · C Macro Generic

## Description

A function-like macro `GREET()` encapsulates the greeting logic. Because macros are textual expansions rather than typed functions, the macro is effectively type-agnostic — it can be invoked wherever a statement is valid and expanded into whatever the body contains. The classic C preprocessor is the only "generic" mechanism in the pre-C11 era.

## Source Code

`main.c`:

```c
#include <stdio.h>
#define GREET() printf("Hello, World!\n")
int main(void) { GREET(); return 0; }
```

## Run

```bash
cd hello-worlds/c/0206-macro-generic
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `generic` | Function-like macro is type-agnostic |
| output | `stdout` | Output written via `printf` to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Preprocessor macros standardized in C89/C90 |
| tags | `[]` | No special technique beyond the macro |

## Reference

- ISO/IEC 9899:1990 — C90 preprocessor semantics for function-like macros.
