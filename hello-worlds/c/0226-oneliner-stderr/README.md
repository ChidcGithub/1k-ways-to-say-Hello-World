---
id: 0226
language: c
paradigm: procedural
output: stderr
platform: cli
era: vintage
tags: [one-liner]
notes: "One-liner: writes greeting to stderr in minimal form."
author: ChidcGithub
date: 2026-07-20
---

# #0226 · C One-Liner (stderr)

## Description

The whole program fits on a single line: `#include`, `main`, and a single `fputs` call that sends the greeting to the `stderr` stream. `fputs` is chosen over `printf` because it needs no format string, and over `puts` because `puts` writes to `stdout`. This is the smallest non-trivial C program that still routes its output through the standard error channel.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void){fputs("Hello, World!\n",stderr);return 0;}
```

## Run

```bash
cd hello-worlds/c/0226-oneliner-stderr
gcc -std=c11 main.c -o hello.exe
./hello.exe        # greeting appears on stderr, not stdout
./hello.exe 2>&1   # redirect stderr to stdout to see it inline
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | A single function call with no control flow |
| output | `stderr` | Greeting written to `stderr` via `fputs` |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `fputs` and `stderr` are present in K&R C |
| tags | `[one-liner]` | Entire body of `main` is a single statement |

## Reference

- ISO/IEC 9899:2011 §7.21.7.4 — `fputs`.
