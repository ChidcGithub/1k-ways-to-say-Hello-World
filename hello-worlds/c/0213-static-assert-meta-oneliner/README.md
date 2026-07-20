---
id: 0213
language: c
paradigm: meta
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Uses C11 _Static_assert at file scope; one-liner main body."
author: ChidcGithub
date: 2026-07-20
---

# #0213 · C Static Assert Meta One-Liner

## Description

A file-scope `_Static_assert` (C11) checks at compile time that the greeting string `"Hello, World!"` has exactly 14 bytes (13 characters plus the null terminator). The assertion is a compile-time, meta-level check on a property of the greeting literal; the `main` function body is a single line that prints the greeting.

## Source Code

`main.c`:

```c
#include <stdio.h>
_Static_assert(sizeof("Hello, World!") == 14, "Greeting length mismatch");
int main(void){printf("Hello, World!\n");return 0;}
```

## Run

```bash
cd hello-worlds/c/0213-static-assert-meta-oneliner
gcc -std=c11 main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `meta` | Compile-time assertion on a property of the greeting literal |
| output | `stdout` | Output written to stdout via `printf` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `_Static_assert` is a C11 feature |
| tags | `[one-liner]` | `main` body is a single line |

## Reference

- ISO/IEC 9899:2011 §6.7.10 — Static assertions.
