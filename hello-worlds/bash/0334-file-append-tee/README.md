---
id: 0334
language: bash
paradigm: procedural
output: file
platform: cli
era: classic
tags: []
notes: "Uses tee to write Hello World to a file while also printing to stdout."
author: ChidcGithub
date: 2026-07-20
---

# #0334 · Bash File-Append-Tee

## Description

Hello World written to file with tee, also printed to stdout.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!" | tee hello.txt
```

## Run

```bash
cd hello-worlds/bash/0334-file-append-tee
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential pipe to tee command |
| output | `file` | Output goes to file |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses tee to write Hello World to a file while also printing to stdout. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
