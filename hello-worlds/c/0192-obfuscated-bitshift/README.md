---
id: 0192
language: c
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: [obfuscated]
notes: "Vintage obfuscated: uses bit shifts and XOR to compute ASCII values."
author: ChidcGithub
date: 2026-07-20
---

# #0192 · C obfuscated bitshift

## Description

A vintage-style obfuscated Hello World where every character's ASCII code is derived from bitwise operations rather than written as a literal. Starting from the base value `h = 0x48` (`'H'`), each subsequent character is computed with XOR (which can both set and clear bits), OR, and bit shifts (`1 << 5`). The greeting is then emitted with `%c` format specifiers. XOR is essential here because OR alone can only set bits and cannot reach characters like `'e'` (0x65) from `'H'` (0x48) — the bitwise derivation is what makes the entry genuinely obfuscated rather than a costume over plain literals.

Verified ASCII outputs: `H=72, e=101, l=108, o=111, ,=44,  =32, W=87, r=114, d=100, !=33`.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) {
    int h=0x48, e=h^0x2d, l=e^0x09, o=l|3, c=0x2c, s=1<<5, w=0x57, r=o^0x1d, d=l^0x08, b=(1<<5)|1;
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,e,l,l,o,c,s,w,o,r,l,d,b);
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0192-obfuscated-bitshift
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential statements in `main` |
| output | `stdout` | Output via `printf` to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | Bit-trickery reminiscent of early IOCCC-style obfuscated C |
| tags | `[obfuscated]` | Greeting derived purely from bitwise XOR/OR/shift operations |

## Reference

- ASCII table — target codes (`H=72`, `e=101`, `l=108`, `o=111`, `,=44`, ` =32`, `W=87`, `r=114`, `d=100`, `!=33`).
- ISO/IEC 9899 — bitwise operators `^`, `|`, `<<` (6.5.10–6.5.7).
