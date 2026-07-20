---
id: 0190
language: c
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: [obfuscated]
notes: "Uses stdarg.h to build greeting from variadic char arguments."
author: ChidcGithub
date: 2026-07-20
---

# #0190 · C varargs stdout obfuscated

## Description

An obfuscated Hello World that constructs the greeting character by character using the C variadic argument machinery from `<stdarg.h>`. The helper `print_chars(int n, ...)` walks the variadic argument list with `va_arg`, emitting each `int` as a character via `putchar`. The greeting is never stored as a string literal in the source; instead it appears as a sequence of separate character literals passed at the call site, obscuring the obvious `"Hello, World!"` pattern.

## Source Code

`main.c`:

```c
#include <stdio.h>
#include <stdarg.h>
void print_chars(int n, ...) {
    va_list args; va_start(args, n);
    for (int i = 0; i < n; i++) putchar(va_arg(args, int));
    putchar('\n'); va_end(args);
}
int main(void) {
    print_chars(13, 'H','e','l','l','o',',',' ','W','o','r','l','d','!');
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0190-varargs-stdout-obfuscated
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | A helper function plus a sequential `main` |
| output | `stdout` | Output via `putchar` to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `<stdarg.h>` variadic macros date back to K&R/ANSI C |
| tags | `[obfuscated]` | Greeting assembled one char at a time through variadic args |

## Reference

- ISO/IEC 9899 — `stdarg.h` (7.16) for `va_list`, `va_start`, `va_arg`, `va_end`.
