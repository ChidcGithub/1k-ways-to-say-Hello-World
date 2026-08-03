---
id: 0377
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses declare -i numeric variables and then prints the greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0377 · Bash Declare-Integer

## Description

Hello World with declare -i numeric variable context.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
declare -i x=42
echo "Hello, World!"
```

## Run

```bash
cd hello-worlds/bash/0377-declare-integer
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential with typed variable declaration |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses declare -i numeric variables and then prints the greeting. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
