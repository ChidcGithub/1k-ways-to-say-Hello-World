---
id: 0444
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses an if-else conditional to decide what to output."
author: ChidcGithub
date: 2026-07-20
---

# #0444 · Bash If-Conditional

## Description

Hello World via an if-else conditional check.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
x=1
if [ "$x" -eq 1 ]; then echo "Hello, World!"; else echo "?"; fi
```

## Run

```bash
cd hello-worlds/bash/0444-if-conditional
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential if-else conditional execution |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses an if-else conditional to decide what to output. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
