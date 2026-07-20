---
id: 0189
language: c
paradigm: procedural
output: stderr
platform: cli
era: modern
tags: []
notes: "Reads greeting from argv[1] if provided, else defaults; prints to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0189 · C argv stderr

## Description

A small C program that reads the greeting from `argv[1]` when supplied and falls back to the literal `"Hello, World!"` otherwise, then writes it to standard error with `fprintf(stderr, ...)`. This contrasts with the canonical 0002 entry, which writes a fixed string to `stdout`. Routing a normal greeting through `stderr` is unusual but legitimate: `stderr` is unbuffered and survives even when `stdout` is piped or redirected.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(int argc, char *argv[]) {
    const char *msg = (argc > 1) ? argv[1] : "Hello, World!";
    fprintf(stderr, "%s\n", msg);
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0189-argv-stderr
gcc main.c -o hello && ./hello
./hello "Custom greeting"
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential statements in `main` |
| output | `stderr` | Output written to standard error via `fprintf(stderr, ...)` |
| platform | `cli` | Runs as a command-line executable and accepts `argv` |
| era | `modern` | Uses ANSI C89/C11 `fprintf` and `argv` conventions |
| tags | `[]` | No special technique beyond standard CLI argument handling |

## Reference

- ISO/IEC 9899 — `fprintf` (7.21.6.1) and program argument access via `main(int argc, char *argv[])`.
