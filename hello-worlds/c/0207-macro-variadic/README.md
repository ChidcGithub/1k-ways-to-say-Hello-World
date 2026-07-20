---
id: 0207
language: c
paradigm: generic
output: stdout
platform: cli
era: modern
tags: []
notes: "Variadic macro __VA_ARGS__ to construct greeting from parts."
author: ChidcGithub
date: 2026-07-20
---

# #0207 · C Macro Variadic

## Description

A variadic function-like macro `GREET(...)` forwards its arguments to `printf` via `__VA_ARGS__`. The caller can compose the greeting from any number of parts, all forwarded as a single textual expansion. Variadic macros were a C99 addition and are the modern "generic" mechanism for forwarding argument lists.

## Source Code

`main.c`:

```c
#include <stdio.h>
#define GREET(...) printf(__VA_ARGS__)
int main(void) { GREET("Hello, World!\n"); return 0; }
```

## Run

```bash
cd hello-worlds/c/0207-macro-variadic
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `generic` | Variadic macro forwards an arbitrary argument list |
| output | `stdout` | Output written via `printf` to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Variadic macros (`__VA_ARGS__`) introduced in C99 |
| tags | `[]` | No special technique beyond the variadic macro |

## Reference

- ISO/IEC 9899:1999 — C99 variadic macros and `__VA_ARGS__`.
