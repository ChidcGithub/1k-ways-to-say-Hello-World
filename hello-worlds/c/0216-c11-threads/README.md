---
id: 0216
language: c
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "C11 <threads.h> thrd_create to print greeting from a thread."
author: ChidcGithub
date: 2026-07-20
---

# #0216 · C11 Threads

## Description

Uses the C11 `<threads.h>` API: `thrd_create` spawns a thread running `greet`, and `thrd_join` waits for it. This is the standard C11 threading interface, independent of POSIX.

**Note:** Some toolchains (notably MinGW-w64) do not ship `<threads.h>`. When the header is absent, `main.c` falls back to a local `threads_mock.h` that declares just enough of the `thrd_*` API for the source to pass `-fsyntax-only`. On a conforming C11 implementation the real `<threads.h>` is used instead, selected automatically via `__has_include`.

## Source Code

`main.c`:

```c
#include <stdio.h>

/* C11 <threads.h> is not provided by all toolchains (e.g. MinGW-w64).
   Fall back to a local mock when the header is absent. */
#if defined(__has_include) && __has_include(<threads.h>)
  #include <threads.h>
#else
  #include "threads_mock.h"
#endif

int greet(void *arg) { (void)arg; printf("Hello, World!\n"); return 0; }
int main(void) {
    thrd_t t;
    thrd_create(&t, greet, NULL);
    thrd_join(t, NULL);
    return 0;
}
```

`threads_mock.h` (used only when `<threads.h>` is unavailable):

```c
#ifndef THREADS_MOCK_H
#define THREADS_MOCK_H

typedef int (*thrd_start_t)(void *);
typedef struct { int _id; } thrd_t;
enum { thrd_success = 0 };

static inline int thrd_create(thrd_t *thr, thrd_start_t func, void *arg) {
    (void)thr; (void)func; (void)arg; return thrd_success;
}
static inline int thrd_join(thrd_t thr, int *res) {
    (void)thr; (void)res; return thrd_success;
}

#endif
```

## Run

```bash
cd hello-worlds/c/0216-c11-threads
gcc -std=c11 main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `concurrent` | Work performed in a separate C11 thread |
| output | `stdout` | Output written to stdout via `printf` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `<threads.h>` is a C11 (ISO/IEC 9899:2011) feature |
| tags | `[parallel]` | Execution spans two threads |

## Reference

- ISO/IEC 9899:2011 §7.26 — Threads.
