---
id: 0357
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses awk to print Hello World."
author: ChidcGithub
date: 2026-07-20
---

# #0357 · Bash Awk-Greet

## Description

Hello World using awk.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
awk 'BEGIN { print "Hello, World!" }'
```

## Run

```bash
cd hello-worlds/bash/0357-awk-greet
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential call to awk for output |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses awk to print Hello World. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
