---
id: 0338
language: bash
paradigm: functional
output: stdout
platform: cli
era: classic
tags: []
notes: "Defines a function that returns the greeting string, then prints it."
author: ChidcGithub
date: 2026-07-20
---

# #0338 · Bash Function-Greet

## Description

Hello World via a function call.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
greet() { echo "Hello, World!"; }
greet
```

## Run

```bash
cd hello-worlds/bash/0338-function-greet
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `functional` | Encapsulates logic in a reusable function |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Defines a function that returns the greeting string, then prints it. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
