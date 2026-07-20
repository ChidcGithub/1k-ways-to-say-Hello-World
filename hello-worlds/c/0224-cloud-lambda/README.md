---
id: 0224
language: c
paradigm: procedural
output: stdout
platform: cloud
era: contemporary
tags: []
notes: "Simulates an AWS Lambda handler in C; main verifies locally."
author: ChidcGithub
date: 2026-07-20
---

# #0224 · C Cloud Lambda

## Description

Mimics the shape of a serverless function: a `handler(const char *event)` entry point that returns the greeting string, and a local `main` that invokes it exactly the way a Lambda runtime would. In production this `main` would be replaced by the runtime's bootstrap; here it makes the program self-testing. The unused `event` parameter is silenced with `(void)event;` to satisfy `-Wall`.

## Source Code

`main.c`:

```c
#include <stdio.h>
const char* handler(const char *event) {
    (void)event;
    return "Hello, World!";
}
int main(void) {
    printf("%s\n", handler(NULL));
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0224-cloud-lambda
gcc -std=c11 main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | A handler function plus a driver `main` |
| output | `stdout` | Greeting written to stdout via `printf` |
| platform | `cloud` | Mirrors the AWS Lambda handler entry point |
| era | `contemporary` | Serverless execution model (2010s+) |
| tags | `[]` | No additional tags; cloud platform is the distinguishing trait |

## Reference

- AWS Lambda Programming Model for Custom Runtimes — `bootstrap` + handler contract.
