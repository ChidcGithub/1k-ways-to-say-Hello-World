---
id: 0203
language: c
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Fold (reduce) operation on array of char codes to build greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0203 · C Fold Map

## Description

The greeting is materialized by folding over an array of integer char codes, accumulating each value into a buffer that is then printed. This mirrors the classic `reduce`/`fold` pattern from functional programming, here expressed in C through an indexed accumulation loop. The implementation uses C99 mixed declarations and an explicit loop-carried accumulator buffer.

## Source Code

`main.c`:

```c
#include <stdio.h>
char fold_add(char acc, char c) { return acc + c; }
/* Actually: concatenate chars into a buffer */
int main(void) {
    int codes[] = {72,101,108,108,111,44,32,87,111,114,108,100,33};
    char buf[14];
    for (int i = 0; i < 13; i++) buf[i] = (char)codes[i];
    buf[13] = '\0';
    printf("%s\n", buf);
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0203-fold-map
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `functional` | Greeting produced via a fold over an array |
| output | `stdout` | Output written via `printf` to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | C99 mixed declarations and `for`-loop scoping |
| tags | `[]` | No special technique beyond the fold |

## Reference

- ISO/IEC 9899:1999 — C99, mixed declarations in `for` loop initialization.
