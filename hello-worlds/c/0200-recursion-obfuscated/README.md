---
id: 0200
language: c
paradigm: functional
output: stdout
platform: cli
era: classic
tags: [obfuscated]
notes: "Recursive function prints greeting character by character using pointer arithmetic."
author: ChidcGithub
date: 2026-07-20
---

# #0200 · C Recursion Obfuscated

## Description

A recursive `print_rec` walks the greeting string one character at a time via pointer arithmetic, emitting each `char` through `putchar` and recursing on `s + 1` until the null terminator is reached, where it writes a trailing newline. The logic is intentionally compressed to obscure the typical `printf` flow.

## Source Code

`main.c`:

```c
#include <stdio.h>
void print_rec(const char *s) {
    if (*s) { putchar(*s); print_rec(s + 1); }
    else { putchar('\n'); }
}
int main(void) { print_rec("Hello, World!"); return 0; }
```

## Run

```bash
cd hello-worlds/c/0200-recursion-obfuscated
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `functional` | Greeting produced through a self-recursive function |
| output | `stdout` | Output via `putchar` to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Recursion and pointer arithmetic, classic C |
| tags | `[obfuscated]` | Compressed pointer-based recursion that hides the obvious `printf` |

## Reference

- IOCCC (International Obfuscated C Code Contest) — inspiration for terse C idioms.
