---
id: 0227
language: c
paradigm: procedural
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses C23 features: constexpr; contemporary C."
author: ChidcGithub
date: 2026-07-20
---

# #0227 · C23 Contemporary (constexpr)

## Description

Uses C23's `constexpr` qualifier to declare a compile-time constant byte array holding the greeting. The value of `greeting` is fixed at translation time, and `main` writes it to `stdout` with `fwrite` — no format-string parsing, no null-terminator lookup. The program is compiled with `-std=c2x`, the GCC spelling of the C23 standard mode; GCC 13+ accepts `constexpr` on file-scope objects.

## Source Code

`main.c`:

```c
#include <stdio.h>
constexpr char greeting[] = "Hello, World!\n";
int main(void) {
    fwrite(greeting, 1, sizeof(greeting) - 1, stdout);
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0227-contemporary-c23
gcc -std=c2x main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | A single `fwrite` call inside `main` |
| output | `stdout` | Greeting written to stdout via `fwrite` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | Uses C23 `constexpr` (ISO/IEC 9899:2024) |
| tags | `[]` | No additional tags; C23 feature use is the distinguishing trait |

## Reference

- ISO/IEC 9899:2024 (C23) §6.7.2 — `constexpr` qualifier.
- GCC 13 release notes — C23 `constexpr` support.
