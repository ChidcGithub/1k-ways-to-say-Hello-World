---
id: 0184
language: c
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: [hand-assembled]
notes: "Uses raw write() syscall (POSIX) instead of stdio; hand-assembled style."
author: ChidcGithub
date: 2026-07-20
---

# #0184 · C write syscall hand-assembled

## Description

A hand-assembled style C Hello World that skips the `stdio.h` formatting layer (`printf`/`puts`/`fwrite`) and invokes the raw POSIX `write()` syscall directly. The program calls `write(1, "Hello, World!\n", 14)`, where `1` is the file descriptor for stdout and `14` is the exact byte count to emit. The `#define _POSIX_C_SOURCE 200809L` at the top tells the C library headers to expose the POSIX 2008 API (including `write` from `<unistd.h>`), so the file compiles cleanly under strict `-std=c11`. This mirrors the way a hand-assembled program would set up a syscall: load a buffer pointer, a length, and a file descriptor, then trap into the kernel.

## Source Code

`main.c`:

```c
#define _POSIX_C_SOURCE 200809L
#include <unistd.h>
int main(void) { write(1, "Hello, World!\n", 14); return 0; }
```

## Run

```bash
cd hello-worlds/c/0184-write-syscall-handasm
gcc -std=c11 main.c -o hello
./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Single syscall wrapper call in `main` |
| output | `stdout` | Written to file descriptor 1 (stdout) via `write` |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `write(2)` is the original Unix syscall, predating the C stdio abstraction |
| tags | `[hand-assembled]` | Direct syscall wrapper, no formatting layer |

## Reference

- [POSIX.1-2008 — write](https://pubs.opengroup.org/onlinepubs/9699919799/functions/write.html)
- [cppreference — POSIX write](https://en.cppreference.com/w/c/program)
