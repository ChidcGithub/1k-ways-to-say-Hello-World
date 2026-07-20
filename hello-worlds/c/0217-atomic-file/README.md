---
id: 0217
language: c
paradigm: concurrent
output: file
platform: cli
era: modern
tags: [parallel]
notes: "C11 <stdatomic.h> atomic flag used as a lock; greeting written to file."
author: ChidcGithub
date: 2026-07-20
---

# #0217 · C Atomic File

## Description

Uses a C11 `atomic_flag` (from `<stdatomic.h>`) as a spinlock-style guard around the file write. `write_greeting` busy-waits with `atomic_flag_test_and_set` until the flag is clear, writes the greeting to the file handle, then clears the flag with `atomic_flag_clear`. The program writes the greeting to `hello.txt` and reports success on stdout.

## Source Code

`main.c`:

```c
#include <stdio.h>
#include <stdatomic.h>
static atomic_flag flag = ATOMIC_FLAG_INIT;
void write_greeting(FILE *f) {
    while (atomic_flag_test_and_set(&flag)) {}
    fprintf(f, "Hello, World!\n");
    atomic_flag_clear(&flag);
}
int main(void) {
    FILE *f = fopen("hello.txt", "w");
    write_greeting(f);
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0217-atomic-file
gcc -std=c11 main.c -o hello.exe
./hello.exe
cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `concurrent` | Uses an atomic flag as a lock |
| output | `file` | Greeting written to `hello.txt` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `<stdatomic.h>` is a C11 feature |
| tags | `[parallel]` | Concurrency primitive designed for multi-threaded use |

## Reference

- ISO/IEC 9899:2011 §7.17 — Atomics.
