---
id: 0218
language: c
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [quine]
notes: "A C quine that prints its own source, then prints 'Hello, World!' on the next line."
author: ChidcGithub
date: 2026-07-20
---

# #0218 · C Quine

## Description

A self-reproducing C program. The format string `s` contains the entire source template, using `%c` for special characters (newline = 10, double-quote = 34) and `%s` to embed the string itself. `printf(s, ...)` reconstructs the source code exactly, then a second `printf` emits `Hello, World!` on the next line. The placeholder count (10 `%c` + 1 `%s` = 11) matches the argument count (11), so the format string and variadic args line up cleanly.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) {
    char *s = "#include <stdio.h>%cint main(void) {%c    char *s = %c%s%c;%c    printf(s, 10, 10, 34, s, 34, 10, 10, 34, 34, 10, 10);%c    printf(%cHello, World!\\n%c);%c    return 0;%c}";
    printf(s, 10, 10, 34, s, 34, 10, 10, 34, 34, 10, 10);
    printf("Hello, World!\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0218-quine
gcc -std=c11 main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Imperative procedure with `printf` calls |
| output | `stdout` | Output written to stdout via `printf` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Classic C quine pattern, valid under C11 |
| tags | `[quine]` | Source reproduces itself before printing the greeting |

## Reference

- Hofstadter, D. R. — *Gödel, Escher, Bach* (self-reference and quines).
