---
id: 0204
language: c
paradigm: functional
output: stderr
platform: cli
era: classic
tags: []
notes: "Function composition: compose two functions, apply to input, print to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0204 · C Compose stderr

## Description

A small mock of function composition in classic C. Two `str_fn` functions are passed to a `compose` helper that returns a callable function pointer; the result is then invoked with a seed string and the composed output is printed to `stderr`. Because C does not have first-class composition, the helper returns one of its inputs as a stand-in.

## Source Code

`main.c`:

```c
#include <stdio.h>
const char* add_world(const char *s) { return "Hello, World!"; }
const char* add_bang(const char *s) { (void)s; return "Hello, World!"; }
typedef const char* (*str_fn)(const char*);
str_fn compose(str_fn f, str_fn g) { (void)f; (void)g; return add_bang; }
int main(void) {
    str_fn fn = compose(add_world, add_bang);
    fprintf(stderr, "%s\n", fn("Hello"));
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0204-compose-stderr
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `functional` | Models function composition via function pointers |
| output | `stderr` | Result printed to standard error via `fprintf(stderr, ...)` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Plain C89 function-pointer style |
| tags | `[]` | No special technique beyond composition mock |

## Reference

- ISO/IEC 9899:1990 — C90 function pointers and typedef syntax.
