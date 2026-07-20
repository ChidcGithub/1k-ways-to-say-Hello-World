---
id: 0214
language: c
paradigm: concurrent
output: stdout
platform: cli
era: classic
tags: [parallel]
notes: "POSIX pthread creates a thread that prints the greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0214 · C Pthread Thread

## Description

Uses the POSIX `pthread` API to spawn a worker thread that prints the greeting. `main` creates a thread running `greet`, then joins on it before exiting so the output is observed. Demonstrates the classic POSIX threading model: a single worker thread producing output, with the main thread waiting for completion via `pthread_join`.

## Source Code

`main.c`:

```c
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <pthread.h>
void *greet(void *arg) { (void)arg; printf("Hello, World!\n"); return NULL; }
int main(void) {
    pthread_t t;
    pthread_create(&t, NULL, greet, NULL);
    pthread_join(t, NULL);
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0214-pthread-thread
gcc -D_POSIX_C_SOURCE=200809L main.c -o hello.exe -pthread
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `concurrent` | Work performed in a separate thread |
| output | `stdout` | Output written to stdout via `printf` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | POSIX threads standardised in 1995 (SUS) |
| tags | `[parallel]` | Execution spans two threads |

## Reference

- IEEE Std 1003.1 — `pthread_create`, `pthread_join`.
