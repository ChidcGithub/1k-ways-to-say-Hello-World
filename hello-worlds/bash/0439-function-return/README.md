---
id: 0439
language: bash
paradigm: functional
output: stdout
platform: cli
era: classic
tags: []
notes: "Function stores the greeting in a global variable using command substitution."
author: ChidcGithub
date: 2026-07-20
---

# #0439 · Bash Function-Return

## Description

Hello World via function return value captured with command substitution.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
hello() { printf "%s" "Hello, World!"; }
msg=$(hello)
echo "$msg"
```

## Run

```bash
cd hello-worlds/bash/0439-function-return
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `functional` | Function returns value via command substitution, functional data flow |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Function stores the greeting in a global variable using command substitution. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
