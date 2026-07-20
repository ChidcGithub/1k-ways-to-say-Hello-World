---
id: 0211
language: c
paradigm: meta
output: stdout
platform: cli
era: classic
tags: []
notes: "Preprocessor # (stringify) operator to build greeting string at compile time."
author: ChidcGithub
date: 2026-07-20
---

# #0211 · C Stringify Meta

## Description

Demonstrates the preprocessor `#` (stringify) operator. The two-level variadic macro `XSTR(...)` → `STR(...)` first expands its arguments, then converts the expanded token sequence (including any commas) into a single string literal. The variadic form is required so that `XSTR(Hello, World!)` treats the comma-separated phrase as one argument list rather than two separate arguments. The primary output is the canonical `printf("Hello, World!\n")` greeting; the second `printf` shows the stringified macro demo as a secondary illustration of the technique.

## Source Code

`main.c`:

```c
#include <stdio.h>
#define STR(...) #__VA_ARGS__
#define XSTR(...) STR(__VA_ARGS__)
int main(void) {
    /* This demonstrates # stringification but we still need the actual greeting */
    printf("Hello, World!\n");
    printf("Macro demo: %s\n", XSTR(Hello, World!));
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0211-stringify-meta
gcc main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `meta` | Compile-time stringification via the `#` operator |
| output | `stdout` | Output written to stdout via `printf` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `#` operator dates to ANSI C89 |
| tags | `[]` | Standard preprocessor technique, no special trick |

## Reference

- ISO/IEC 9899:1990 §6.8.3.2 — The `#` operator (stringification).
