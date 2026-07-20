---
id: 0178
language: c
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: []
notes: "The canonical C Hello World using printf from <stdio.h>."
author: ChidcGithub
date: 2026-07-20
---

# #0178 · C classic printf

## Description

The canonical C Hello World using `printf` from `<stdio.h>`. The program includes `<stdio.h>` and calls `printf("Hello, World!\n")` to print the greeting to standard output, then returns `0` from `main`. This is the form popularized by Kernighan & Ritchie and reproduced in nearly every C textbook since — the baseline against which every other C Hello World variant is measured.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) { printf("Hello, World!\n"); return 0; }
```

## Run

```bash
cd hello-worlds/c/0178-classic-printf
gcc main.c -o hello
./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential statements in `main` calling a library function |
| output | `stdout` | Output written to standard output via `printf` |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | K&R-era C (late 1970s, pre-ANSI C89 standardization) |
| tags | `[]` | Canonical form; no special technique |

## Reference

- Brian W. Kernighan & Dennis M. Ritchie, *The C Programming Language* (1st ed., 1978) — the origin of the "Hello, World!" trope.
- ISO/IEC 9899 — C language standard (descendant of K&R C).
