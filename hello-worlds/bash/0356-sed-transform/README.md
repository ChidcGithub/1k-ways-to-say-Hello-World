---
id: 0356
language: bash
paradigm: declarative
output: stdout
platform: cli
era: classic
tags: []
notes: "Declarative: uses sed to transform a placeholder into Hello World."
author: ChidcGithub
date: 2026-07-20
---

# #0356 · Bash Sed-Transform

## Description

Hello World via sed pattern substitution.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "GREETING" | sed 's/GREETING/Hello, World!/'
```

## Run

```bash
cd hello-worlds/bash/0356-sed-transform
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `declarative` | Declarative pattern substitution via sed |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Declarative: uses sed to transform a placeholder into Hello World. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
