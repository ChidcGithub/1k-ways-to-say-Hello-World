---
id: 0330
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Stores Hello World in a variable, then uses printf to output it."
author: ChidcGithub
date: 2026-07-20
---

# #0330 · Bash Printf-Variable

## Description

Hello World stored in a variable and printed with printf.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
msg="Hello, World!"
printf "%s\n" "$msg"
```

## Run

```bash
cd hello-worlds/bash/0330-printf-variable
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential variable assignment and printf |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Stores Hello World in a variable, then uses printf to output it. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
