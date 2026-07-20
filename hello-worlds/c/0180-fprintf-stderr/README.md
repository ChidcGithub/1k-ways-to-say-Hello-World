---
id: 0180
language: c
paradigm: procedural
output: stderr
platform: cli
era: vintage
tags: []
notes: "Writes to stderr using fprintf(stderr, ...)."
author: ChidcGithub
date: 2026-07-20
---

# #0180 · C fprintf stderr

## Description

A C Hello World that writes to the standard error stream (`stderr`) instead of standard output. The program calls `fprintf(stderr, "Hello, World!\n")`, where `fprintf` is the generalized form of `printf` that takes an explicit `FILE *` destination. Writing to `stderr` is the conventional way to emit diagnostics that should not be captured by stdout redirection — the greeting appears on the terminal even when stdout is piped to a file or another process.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) { fprintf(stderr, "Hello, World!\n"); return 0; }
```

## Run

```bash
cd hello-worlds/c/0180-fprintf-stderr
gcc main.c -o hello
./hello 2>&1
```

> Note: redirect `2>&1` so stderr is visible alongside stdout in the same shell.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential statements in `main` calling a library function |
| output | `stderr` | Output written to standard error via `fprintf(stderr, ...)` |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `fprintf` and the `stderr` stream date to early C (K&R / C89) |
| tags | `[]` | Standard diagnostic-output idiom; no special technique |

## Reference

- [cppreference — fprintf](https://en.cppreference.com/w/c/io/fprintf)
- [cppreference — stderr](https://en.cppreference.com/w/c/io)
