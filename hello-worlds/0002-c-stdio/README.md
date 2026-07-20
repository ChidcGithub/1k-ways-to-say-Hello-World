---
id: 0002
language: c
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: []
notes: "K&R-era C; uses <stdio.h> and printf."
author: ChidcGithub
date: 2026-07-20
---

# #0002 · C stdio

## Description

The canonical C Hello World using `stdio.h` and `printf`. K&R-era C: the program includes `<stdio.h>` and calls `printf` to print the greeting to standard output, then returns `0` from `main`. This is the form popularized by Kernighan & Ritchie and reproduced in nearly every C textbook since.

## Source Code

`main.c`:

```c
#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/0002-c-stdio
gcc main.c -o hello.exe
./hello.exe
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
