---
id: 0376
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Reads the greeting from an environment variable with a default fallback."
author: ChidcGithub
date: 2026-07-20
---

# #0376 · Bash Env-Variable

## Description

Hello World from an environment variable with a default.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "${GREETING:-Hello, World!}"
```

## Run

```bash
cd hello-worlds/bash/0376-env-variable
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Parameter expansion with environment variable fallback |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Reads the greeting from an environment variable with a default fallback. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
