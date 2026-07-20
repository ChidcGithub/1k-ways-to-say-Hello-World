---
id: 0220
language: c
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [polyglot]
notes: "Polyglot: valid as both C and Python; prints greeting in each."
author: ChidcGithub
date: 2026-07-20
---

# #0220 · C/Python Polyglot

## Description

A single file that is simultaneously valid C and valid Python. In C, the `#if 0` ... `#endif` blocks are skipped by the preprocessor, leaving only `#include <stdio.h>` and the `main` function. In Python, `#if 0` is a comment line, so `print("Hello, World!")` executes; the `'''` triple-quote that follows opens a string literal that swallows the C source, and a matching `'''` closes it. Both interpreters therefore run without error and emit the greeting.

## Source Code

`main.c`:

```c
#if 0
print("Hello, World!")
'''
#endif
#include <stdio.h>
int main(void) { printf("Hello, World!\n"); return 0; }
#if 0
'''
#endif
```

## Run

```bash
cd hello-worlds/c/0220-polyglot-python-c
gcc -std=c11 main.c -o hello.exe && ./hello.exe
python main.c
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Primary target is C; also runnable as Python 3 |
| paradigm | `procedural` | C `main` function plus a Python statement |
| output | `stdout` | Both paths emit the greeting on stdout |
| platform | `cli` | Runs as a command-line executable or script |
| era | `modern` | Relies on Python 3 `print` function syntax |
| tags | `[polyglot]` | Same source runs under two interpreters |

## Reference

- Python 3 Language Reference §2.1.5 — Comments.
- ISO/IEC 9899:2011 §6.10.1 — Conditional inclusion.
