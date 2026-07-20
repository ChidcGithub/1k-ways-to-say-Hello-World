---
id: 0212
language: c
paradigm: meta
output: stdout
platform: cli
era: modern
tags: []
notes: "Preprocessor ## (token paste) operator to construct function name and call it."
author: ChidcGithub
date: 2026-07-20
---

# #0212 · C Concat Meta

## Description

Uses the preprocessor `##` (token-paste) operator to synthesise a function name at compile time. The macro `GREET_FUNC(name)` expands to a definition of `void greet_##name(void)`; invoking `GREET_FUNC(hello)` produces `greet_hello`. `main` then calls `greet_hello()`, which prints the greeting. The function called in `main` is thus constructed by the preprocessor, not typed by hand.

## Source Code

`main.c`:

```c
#include <stdio.h>
#define GREET_FUNC(name) void greet_##name(void) { printf("Hello, World!\n"); }
GREET_FUNC(hello)
int main(void) { greet_hello(); return 0; }
```

## Run

```bash
cd hello-worlds/c/0212-concat-meta
gcc -std=c11 main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `meta` | Function name built at preprocess time via `##` |
| output | `stdout` | Output written to stdout via `printf` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Token-paste macros idiomatic of modern C codebases |
| tags | `[]` | Standard preprocessor technique |

## Reference

- ISO/IEC 9899:1999 §6.10.3.3 — The `##` operator (token pasting).
