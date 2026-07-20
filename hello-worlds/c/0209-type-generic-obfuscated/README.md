---
id: 0209
language: c
paradigm: generic
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "C11 _Generic macro dispatches on type; greeting obfuscated behind type switch."
author: ChidcGithub
date: 2026-07-20
---

# #0209 · C Type-Generic Obfuscated

## Description

Uses the C11 `_Generic` keyword to build a type-dispatching macro `PRINT_GREET(x)` whose expansion depends on the type of its argument. For `int` it prints the literal greeting; for `char *` it prints the string itself; the `default` case also prints the greeting. The greeting text is thus hidden behind a compile-time type switch, making the output non-obvious to a casual reader — hence the `obfuscated` tag.

## Source Code

`main.c`:

```c
#include <stdio.h>
#define PRINT_GREET(x) _Generic((x), \
    int: printf("Hello, World!\n"), \
    char*: printf("%s\n", (x)), \
    default: printf("Hello, World!\n") \
)
int main(void) {
    PRINT_GREET(42);
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0209-type-generic-obfuscated
gcc -std=c11 main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `generic` | `_Generic` selects behaviour by operand type |
| output | `stdout` | Output written to stdout via `printf` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `_Generic` is a C11 (ISO/IEC 9899:2011) feature |
| tags | `[obfuscated]` | Greeting concealed behind a type-dispatch macro |

## Reference

- ISO/IEC 9899:2011 §6.5.1.1 — Generic selection.
