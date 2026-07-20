---
id: 0199
language: c
paradigm: functional
output: stdout
platform: cli
era: classic
tags: [one-liner]
notes: "Higher-order function with callback; one-liner main."
author: ChidcGithub
date: 2026-07-20
---

# #0199 · C Callback One-Liner

## Description

A higher-order C function `with_greeting` accepts a callback that knows how to emit a string; `main` is a one-liner that delegates everything to it. This is a compact callback pattern in classic C, with the entry point expressed as a single statement.

## Source Code

`main.c`:

```c
#include <stdio.h>
void with_greeting(void (*cb)(const char*)){cb("Hello, World!");}
void print_msg(const char*s){printf("%s\n",s);}
int main(void){with_greeting(print_msg);return 0;}
```

## Run

```bash
cd hello-worlds/c/0199-callback-oneliner
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `functional` | Higher-order function takes a callback |
| output | `stdout` | Output written via `printf` to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Function pointers / callbacks standardized in C89/C90 |
| tags | `[one-liner]` | `main` is a single one-liner call |

## Reference

- ISO/IEC 9899:1990 — C90 standard where function pointer parameters are defined.
