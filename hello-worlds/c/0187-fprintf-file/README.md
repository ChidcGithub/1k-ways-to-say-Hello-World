---
id: 0187
language: c
paradigm: procedural
output: file
platform: cli
era: classic
tags: []
notes: "Uses fprintf to write greeting directly to a file."
author: ChidcGithub
date: 2026-07-20
---

# #0187 · C fprintf file

## Description

A C Hello World that writes the greeting directly to a file using `fprintf`. Compared to entry #0186 (which first formatted into a stack buffer with `sprintf` and then wrote the buffer with `fputs`), this version collapses the two-step process into a single `fprintf(f, "Hello, World!\n")` call on the open `FILE *`. The program opens `hello.txt` for writing, calls `fprintf` to write the greeting, closes the file, and prints a confirmation message on stdout. The greeting itself lives in `hello.txt`.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) {
    FILE *f = fopen("hello.txt", "w");
    fprintf(f, "Hello, World!\n");
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0187-fprintf-file
gcc main.c -o hello
./hello
cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential calls to `fopen`, `fprintf`, `fclose` in `main` |
| output | `file` | Greeting written to `hello.txt` via `fprintf` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `fprintf` to a `FILE *` is part of the C89 standard library |
| tags | `[]` | Direct file-output idiom; no special technique |

## Reference

- [cppreference — fprintf](https://en.cppreference.com/w/c/io/fprintf)
- [cppreference — fopen](https://en.cppreference.com/w/c/io/fopen)
- [cppreference — fclose](https://en.cppreference.com/w/c/io/fclose)
