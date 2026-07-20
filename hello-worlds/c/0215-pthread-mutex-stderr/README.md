---
id: 0215
language: c
paradigm: concurrent
output: stderr
platform: cli
era: classic
tags: [parallel]
notes: "pthread with mutex protecting stderr output."
author: ChidcGithub
date: 2026-07-20
---

# #0215 · C Pthread Mutex Stderr

## Description

A worker thread prints the greeting to `stderr` while holding a statically-initialised `pthread_mutex_t`. The lock (acquired with `pthread_mutex_lock`, released with `pthread_mutex_unlock`) serialises access to the stream so concurrent runs would not interleave. Demonstrates the classic POSIX mutex pattern for protecting a shared resource.

## Source Code

`main.c`:

```c
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <pthread.h>
static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
void *greet(void *arg) { (void)arg; pthread_mutex_lock(&mutex); fprintf(stderr, "Hello, World!\n"); pthread_mutex_unlock(&mutex); return NULL; }
int main(void) {
    pthread_t t;
    pthread_create(&t, NULL, greet, NULL);
    pthread_join(t, NULL);
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0215-pthread-mutex-stderr
gcc -D_POSIX_C_SOURCE=200809L main.c -o hello.exe -pthread
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `concurrent` | Work performed in a separate thread with a mutex |
| output | `stderr` | Output written to stderr via `fprintf` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | POSIX threads and mutexes (SUS, 1995) |
| tags | `[parallel]` | Execution spans two threads |

## Reference

- IEEE Std 1003.1 — `pthread_mutex_lock`, `PTHREAD_MUTEX_INITIALIZER`.
