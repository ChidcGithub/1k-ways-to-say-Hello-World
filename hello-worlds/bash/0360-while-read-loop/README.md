---
id: 0360
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Reads Hello World from a string using while-read and prints each line."
author: ChidcGithub
date: 2026-07-20
---

# #0360 · Bash While-Read-Loop

## Description

Hello World read and printed via a while-read loop.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!" | while read -r line; do echo "$line"; done
```

## Run

```bash
cd hello-worlds/bash/0360-while-read-loop
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Iterative while-read loop over piped input |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `` | Reads Hello World from a string using while-read and prints each line. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
