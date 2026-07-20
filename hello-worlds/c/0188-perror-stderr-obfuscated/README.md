---
id: 0188
language: c
paradigm: procedural
output: stderr
platform: cli
era: classic
tags: [obfuscated]
notes: "Uses perror() to print greeting to stderr (prefixed with the string)."
author: ChidcGithub
date: 2026-07-20
---

# #0188 · C perror stderr obfuscated

## Description

A deliberately quirky Hello World that abuses `perror()` to emit the greeting to standard error. `perror()` is intended for printing error messages alongside the current `errno` string, but here the greeting is passed as the prefix. The call writes `Hello, World!: <errno string>\n` to `stderr`; because `errno` is `0` at program start, the appended portion is typically `Success` (or the platform's equivalent), so the primary output is the greeting on `stderr`.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) { perror("Hello, World!"); return 0; }
```

## Run

```bash
cd hello-worlds/c/0188-perror-stderr-obfuscated
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Single statement in `main` calling a library function |
| output | `stderr` | `perror()` writes to the standard error stream |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `perror()` dates back to early POSIX/C standardization |
| tags | `[obfuscated]` | Repurposes an error-reporting function to print a greeting |

## Reference

- ISO/IEC 9899 — `perror` (7.21.10.4) writes to `stderr`.
