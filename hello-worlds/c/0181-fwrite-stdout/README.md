---
id: 0181
language: c
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses fwrite() to write raw bytes to stdout."
author: ChidcGithub
date: 2026-07-20
---

# #0181 · C fwrite stdout

## Description

A C Hello World that writes raw bytes to stdout using `fwrite`. Unlike `printf`/`puts`, `fwrite` performs no formatting and appends no implicit newline — the caller specifies a buffer, an element size (`1` byte), a count (`14` bytes), and a destination stream (`stdout`). This is the unformatted binary I/O primitive of the C standard library; the greeting is emitted byte-for-byte exactly as it appears in the string literal, including the explicit `\n`.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) { fwrite("Hello, World!\n", 1, 14, stdout); return 0; }
```

## Run

```bash
cd hello-worlds/c/0181-fwrite-stdout
gcc main.c -o hello
./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Single call to `fwrite` in `main` |
| output | `stdout` | Written to the `stdout` stream via `fwrite` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `fwrite` is part of the C89 standard library, post-K&R formalization |
| tags | `[]` | Unformatted binary I/O; no special technique |

## Reference

- [cppreference — fwrite](https://en.cppreference.com/w/c/io/fwrite)
- ISO/IEC 9899:1990 (C89) §4.9.8 — the `fwrite` function.
