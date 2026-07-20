---
id: 0179
language: c
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: [code-golf]
notes: "Code-golfed: uses puts() which auto-appends newline; shortest standard C hello world."
author: ChidcGithub
date: 2026-07-20
---

# #0179 · C puts code golf

## Description

A code-golfed C Hello World that minimizes character count. The whole program is two lines: an `#include <stdio.h>` directive and a one-line `main` that calls `puts("Hello, World!")`. `puts` is preferred over `printf` because it appends a newline for free (saving two characters `\n`) and requires no format string. The body of `main` has no explicit `return` statement: under the C99 standard, `main` is the only function for which falling off the end implicitly returns `0`. The source file is **53 characters** excluding the trailing newline (54 bytes on disk with the trailing newline).

### Character count breakdown

| Component | Characters |
|-----------|-----------:|
| `#include <stdio.h>` | 18 |
| newline | 1 |
| `int main(){puts("Hello, World!");}` | 34 |
| **Total (excl. trailing newline)** | **53** |
| Total bytes on disk (with trailing `\n`) | 54 |

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(){puts("Hello, World!");}
```

## Run

```bash
cd hello-worlds/c/0179-puts-codegolf
gcc main.c -o hello
./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Single call to `puts` in `main` |
| output | `stdout` | `puts` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `puts` from `<stdio.h>` is a C-era (K&R) I/O routine |
| tags | `[code-golf]` | Source minimized to 53 characters excluding trailing newline |

## Reference

- [cppreference — puts](https://en.cppreference.com/w/c/io/puts)
- C99 standard: implicit `return 0;` from `main` (§5.1.2.2.3).
