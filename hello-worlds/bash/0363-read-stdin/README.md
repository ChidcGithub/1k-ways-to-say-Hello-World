---
id: 0363
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Reads Hello World from stdin and echoes it."
author: ChidcGithub
date: 2026-07-20
---

# #0363 · Bash Read-Stdin

## Description

Hello World read from stdin and echoed.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!" | (read -r msg && echo "$msg")
```

## Run

```bash
cd hello-worlds/bash/0363-read-stdin
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential read-from-stdin pattern |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `` | Reads Hello World from stdin and echoes it. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
