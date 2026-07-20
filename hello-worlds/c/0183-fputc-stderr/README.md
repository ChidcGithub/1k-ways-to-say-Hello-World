---
id: 0183
language: c
paradigm: procedural
output: stderr
platform: cli
era: classic
tags: []
notes: "Writes each character to stderr using fputc()."
author: ChidcGithub
date: 2026-07-20
---

# #0183 · C fputc stderr

## Description

A C Hello World that writes each character of the greeting to stderr one byte at a time using `fputc`. A pointer walks the string literal `"Hello, World!\n"` and on each iteration `fputc(*s++, stderr)` emits the current character to the `stderr` stream and advances the pointer. This is the per-character counterpart of entry #0180 (which used `fprintf(stderr, ...)` for the whole string at once) and the stderr-targeted sibling of entry #0182 (which used `putchar` for stdout).

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) { const char *s = "Hello, World!\n"; while (*s) fputc(*s++, stderr); return 0; }
```

## Run

```bash
cd hello-worlds/c/0183-fputc-stderr
gcc main.c -o hello
./hello 2>&1
```

> Note: redirect `2>&1` so stderr is visible alongside stdout in the same shell.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential loop with character-at-a-time output in `main` |
| output | `stderr` | Each character written to stderr via `fputc` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `fputc` is part of the C89 standard library, post-K&R formalization |
| tags | `[]` | Standard character-output idiom; no special technique |

## Reference

- [cppreference — fputc](https://en.cppreference.com/w/c/io/fputc)
- ISO/IEC 9899:1990 (C89) §4.9.7 — character input/output functions.
