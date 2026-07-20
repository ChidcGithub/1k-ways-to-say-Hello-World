---
id: 0210
language: c
paradigm: meta
output: stdout
platform: cli
era: classic
tags: [obfuscated]
notes: "X-Macro preprocessor pattern: a .def file defines data, expanded via #include."
author: ChidcGithub
date: 2026-07-20
---

# #0210 · C X-Macro Meta

## Description

Demonstrates the X-Macro preprocessor pattern. A separate `greeting.def` file holds a list of `X(name, ch)` entries — one per character of the greeting. The `main.c` file defines `X` as a `putchar` call, then `#include`s the `.def` file so the preprocessor expands every entry into a statement emitting one character. Redefining `X` before each `#include` lets the same data list drive different code generation.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) {
    #define X(name, ch) putchar(ch);
    #include "greeting.def"
    #undef X
    putchar('\n');
    return 0;
}
```

`greeting.def`:

```
X(H, 'H')
X(e, 'e')
X(l, 'l')
X(l, 'l')
X(o, 'o')
X(comma, ',')
X(space, ' ')
X(W, 'W')
X(o, 'o')
X(r, 'r')
X(l, 'l')
X(d, 'd')
X(bang, '!')
```

## Run

```bash
cd hello-worlds/c/0210-x-macro-meta
gcc main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `meta` | Code is generated at preprocess time from a data file |
| output | `stdout` | Characters emitted via `putchar` to stdout |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | X-Macro is a preprocessor-era technique dating to ANSI C89 |
| tags | `[obfuscated]` | Greeting is split across a data file, not visible in main.c |

## Reference

- "X Macro" technique — a well-known preprocessor code-generation pattern.
