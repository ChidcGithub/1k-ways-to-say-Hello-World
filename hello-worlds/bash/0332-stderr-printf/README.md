---
id: 0332
language: bash
paradigm: procedural
output: stderr
platform: cli
era: classic
tags: []
notes: "Uses printf to write directly to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0332 · Bash Stderr-Printf

## Description

Hello World written to stderr using printf.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
printf "%s\n" "Hello, World!" >&2
```

## Run

```bash
cd hello-worlds/bash/0332-stderr-printf
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential printf with stderr redirection |
| output | `stderr` | Output goes to stderr |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses printf to write directly to stderr. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
