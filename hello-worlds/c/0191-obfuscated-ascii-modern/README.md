---
id: 0191
language: c
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Obfuscated: greeting assembled from ASCII arithmetic operations."
author: ChidcGithub
date: 2026-07-20
---

# #0191 · C obfuscated ASCII modern

## Description

An obfuscated Hello World that never spells out the greeting as a string literal. Each character's ASCII code is computed as the result of an arithmetic expression — for example, `h = 64 + 8` evaluates to `72` (`'H'`), and the remaining values are written as bare integer literals. The program then prints each value with the `%c` format specifier, reconstructing `Hello, World!` on `stdout`. The arithmetic is intentionally trivial so the output is deterministic and easy to verify.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) {
    int h=64+8, e=101, l=108, o=111, comma=44, sp=32, w=87, r=114, d=100, bang=33;
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,e,l,l,o,comma,sp,w,o,r,l,d,bang);
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0191-obfuscated-ascii-modern
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential statements in `main` |
| output | `stdout` | Output via `printf` to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses C89/C11 arithmetic and `printf` formatting |
| tags | `[obfuscated]` | Greeting derived from arithmetic on ASCII codes rather than a literal |

## Reference

- ASCII table — letter codes (`H=72`, `e=101`, `l=108`, `o=111`, `,=44`, ` =32`, `W=87`, `r=114`, `d=100`, `!=33`).
- ISO/IEC 9899 — `printf` `%c` conversion specifier (7.21.6.1).
