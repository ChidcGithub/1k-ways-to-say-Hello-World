---
id: 0202
language: c
paradigm: functional
output: stderr
platform: cli
era: modern
tags: []
notes: "Higher-order function: map() applies a transform, result printed to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0202 · C Higher-Order stderr

## Description

A higher-order `map_str` accepts a `char_map_fn` and applies it in place to each character of a buffer. With an `identity` transform the greeting survives unchanged, but the result is routed to `stderr` to demonstrate an alternative output channel. The `map` concept is borrowed from functional programming, here expressed through C function pointers.

## Source Code

`main.c`:

```c
#include <stdio.h>
#include <string.h>
typedef char (*char_map_fn)(char);
void map_str(char *s, char_map_fn f) { while (*s) { *s = f(*s); s++; } }
char identity(char c) { return c; }
int main(void) {
    char buf[] = "Hello, World!";
    map_str(buf, identity);
    fprintf(stderr, "%s\n", buf);
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0202-higher-order-stderr
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `functional` | Higher-order `map_str` takes a function as argument |
| output | `stderr` | Result printed to standard error via `fprintf(stderr, ...)` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses C99-style mixed declarations and typedef'd function pointers |
| tags | `[]` | No special technique beyond map + stderr |

## Reference

- ISO/IEC 9899:1999 — C99, mixed declarations and modern typedef usage.
