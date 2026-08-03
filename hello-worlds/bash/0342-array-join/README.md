---
id: 0342
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Joins array elements with IFS manipulation."
author: ChidcGithub
date: 2026-07-20
---

# #0342 · Bash Array-Join

## Description

Hello World built by joining array elements.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
parts=("Hello," "World!")
IFS=" "
echo "${parts[*]}"
```

## Run

```bash
cd hello-worlds/bash/0342-array-join
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Array elements joined via IFS manipulation |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Joins array elements with IFS manipulation. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
