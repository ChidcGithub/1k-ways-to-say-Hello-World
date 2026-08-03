---
id: 0335
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses a here-string (<<<) to pass Hello World to cat."
author: ChidcGithub
date: 2026-07-20
---

# #0335 · Bash Here-String

## Description

Hello World printed via a here-string.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
cat <<< "Hello, World!"
```

## Run

```bash
cd hello-worlds/bash/0335-here-string
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | A single statement using here-string syntax |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses a here-string (<<<) to pass Hello World to cat. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
