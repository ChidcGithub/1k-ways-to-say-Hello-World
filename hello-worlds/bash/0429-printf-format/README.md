---
id: 0429
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses printf with format string instead of echo."
author: ChidcGithub
date: 2026-07-20
---

# #0429 · Bash Printf-Format

## Description

Hello World using printf with a format string.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
printf "%s\n" "Hello, World!"
```

## Run

```bash
cd hello-worlds/bash/0429-printf-format
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | A single sequential printf statement |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses printf with format string instead of echo. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
