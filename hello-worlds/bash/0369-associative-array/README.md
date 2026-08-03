---
id: 0369
language: bash
paradigm: oop
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses an associative array as a key-value store where the greeting is looked up."
author: ChidcGithub
date: 2026-07-20
---

# #0369 · Bash Associative-Array

## Description

Hello World stored and retrieved from an associative array.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
declare -A greetings
greetings["en"]="Hello, World!"
echo "${greetings["en"]}"
```

## Run

```bash
cd hello-worlds/bash/0369-associative-array
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `oop` | Key-value object via associative array — OOP pattern |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses an associative array as a key-value store where the greeting is looked up. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
