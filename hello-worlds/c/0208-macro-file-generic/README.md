---
id: 0208
language: c
paradigm: generic
output: file
platform: cli
era: classic
tags: []
notes: "Generic macro writes greeting to a file handle passed as argument."
author: ChidcGithub
date: 2026-07-20
---

# #0208 · C Macro File Generic

## Description

A function-like macro `GREET_TO(f)` writes the greeting to any `FILE *` handle passed as argument. The program opens `hello.txt` for writing, invokes the macro with that handle, then closes the file and reports success on stdout. Because the macro is parametric over the stream, the same definition could equally target `stdout`, `stderr`, or any other open file.

## Source Code

`main.c`:

```c
#include <stdio.h>
#define GREET_TO(f) fprintf(f, "Hello, World!\n")
int main(void) {
    FILE *f = fopen("hello.txt", "w");
    GREET_TO(f);
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0208-macro-file-generic
gcc main.c -o hello.exe
./hello.exe
cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `generic` | Macro is parametric over the target `FILE *` handle |
| output | `file` | Greeting written to `hello.txt` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Function-like macros date to K&R/ANSI C89 |
| tags | `[]` | No special technique beyond the parametric macro |

## Reference

- ISO/IEC 9899:1990 §6.8.3 — Function-like macro definition and invocation.
