---
id: 0201
language: c
paradigm: functional
output: file
platform: cli
era: classic
tags: []
notes: "Recursive function writes greeting to file character by character."
author: ChidcGithub
date: 2026-07-20
---

# #0201 · C Recursion File

## Description

A recursive `write_rec` writes the greeting into `hello.txt` one byte at a time using `fputc`, recursing on `s + 1` until the null terminator, then emits a trailing newline. After the file is closed, `main` reports the side effect on stdout.

## Source Code

`main.c`:

```c
#include <stdio.h>
void write_rec(FILE *f, const char *s) {
    if (*s) { fputc(*s, f); write_rec(f, s + 1); }
    else { fputc('\n', f); }
}
int main(void) {
    FILE *f = fopen("hello.txt", "w");
    write_rec(f, "Hello, World!");
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0201-recursion-file
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `functional` | Greeting produced through a self-recursive function |
| output | `file` | Primary output is written to `hello.txt` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `FILE *` recursion, classic C stdio |
| tags | `[]` | No special technique beyond recursion + file I/O |

## Reference

- ISO/IEC 9899:1990 — `fopen`, `fputc`, `fclose` from `<stdio.h>`.
