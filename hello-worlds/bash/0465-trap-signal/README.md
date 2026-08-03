---
id: 0465
language: bash
paradigm: reactive
output: stdout
platform: cli
era: classic
tags: []
notes: "Reactive: uses trap to catch a signal and print Hello World."
author: ChidcGithub
date: 2026-07-20
---

# #0465 · Bash Trap-Signal

## Description

Hello World printed in response to a trap signal.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
trap 'echo "Hello, World!"' USR1
kill -USR1 $$
```

## Run

```bash
cd hello-worlds/bash/0465-trap-signal
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `reactive` | Reactive signal handling via trap |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `` | Reactive: uses trap to catch a signal and print Hello World. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
