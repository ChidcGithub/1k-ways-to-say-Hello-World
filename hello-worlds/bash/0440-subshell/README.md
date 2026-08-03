---
id: 0440
language: bash
paradigm: concurrent
output: stdout
platform: cli
era: classic
tags: []
notes: "Runs echo inside a subshell using parentheses."
author: ChidcGithub
date: 2026-07-20
---

# #0440 · Bash Subshell

## Description

Hello World executed inside a subshell.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
(echo "Hello, World!")
```

## Run

```bash
cd hello-worlds/bash/0440-subshell
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `concurrent` | Hello World runs in an isolated subshell process |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Runs echo inside a subshell using parentheses. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
