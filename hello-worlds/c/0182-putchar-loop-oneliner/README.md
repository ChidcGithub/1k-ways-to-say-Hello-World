---
id: 0182
language: c
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: [one-liner]
notes: "One-liner: prints each character via putchar in a for loop."
author: ChidcGithub
date: 2026-07-20
---

# #0182 · C putchar loop one-liner

## Description

A one-liner C Hello World that emits the greeting one character at a time via `putchar`. The entire body of `main` is a single line: it assigns a pointer to the string literal `"Hello, World!"`, walks it with a `while (*s)` loop calling `putchar(*s++)` on each iteration, then emits a trailing newline with `putchar('\n')` and returns `0`. There is no `printf`, no `puts`, no `fwrite` — just byte-at-a-time character output to stdout. The `[one-liner]` tag reflects that the whole logic of `main` fits on one source line.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void){char*s="Hello, World!";while(*s)putchar(*s++);putchar('\n');return 0;}
```

## Run

```bash
cd hello-worlds/c/0182-putchar-loop-oneliner
gcc main.c -o hello
./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential loop with character-at-a-time output in `main` |
| output | `stdout` | Each character written to stdout via `putchar` |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `putchar` from `<stdio.h>` is a K&R-era C routine |
| tags | `[one-liner]` | The entire body of `main` is a single source line |

## Reference

- [cppreference — putchar](https://en.cppreference.com/w/c/io/putchar)
- K&R C, §7.2 — character input and output.
