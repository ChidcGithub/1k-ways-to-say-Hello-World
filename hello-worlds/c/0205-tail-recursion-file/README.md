---
id: 0205
language: c
paradigm: functional
output: file
platform: cli
era: modern
tags: []
notes: "Tail-recursive function writes greeting to file; modern C with optimization annotations."
author: ChidcGithub
date: 2026-07-20
---

# #0205 · C Tail Recursion File

## Description

A tail-recursive `write_tail` walks the greeting string by index, emitting one byte at a time to `hello.txt` via `fputc` and recursing with the next index until it reaches the length, where it writes the trailing newline. The function is annotated with a GCC tail-call optimization attribute to encourage the compiler to turn the recursion into a loop.

## Source Code

`main.c`:

```c
#include <stdio.h>
__attribute__((optimize("tail-call-optimize")))
void write_tail(FILE *f, const char *s, int i, int len) {
    if (i >= len) { fputc('\n', f); return; }
    fputc(s[i], f);
    write_tail(f, s, i + 1, len);
}
int main(void) {
    const char *msg = "Hello, World!";
    FILE *f = fopen("hello.txt", "w");
    write_tail(f, msg, 0, 13);
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0205-tail-recursion-file
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `functional` | Greeting produced through a tail-recursive function |
| output | `file` | Primary output is written to `hello.txt` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses GCC `__attribute__` and C99 features |
| tags | `[]` | No special technique beyond tail recursion + attribute |

## Reference

- GCC manual — `__attribute__((optimize(...)))` and tail-call optimization options.
