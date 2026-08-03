---
id: 0341
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Splits Hello World into a character array and loops over it."
author: ChidcGithub
date: 2026-07-20
---

# #0341 · Bash Array-Loop

## Description

Hello World printed character-by-character from an array.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
chars=("H" "e" "l" "l" "o" "," " " "W" "o" "r" "l" "d" "!")
for ch in "${chars[@]}"; do printf "%s" "$ch"; done
echo
```

## Run

```bash
cd hello-worlds/bash/0341-array-loop
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Iterative loop over array elements |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Splits Hello World into a character array and loops over it. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
