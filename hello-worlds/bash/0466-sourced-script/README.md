---
id: 0466
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "A script designed to be sourced that runs when sourced, printing Hello World."
author: ChidcGithub
date: 2026-07-20
---

# #0466 · Bash Sourced-Script

## Description

Hello World printed only when the script is sourced.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
if [[ "${BASH_SOURCE[0]}" != "${0}" ]]; then
  echo "Hello, World!"
fi
```

## Run

```bash
cd hello-worlds/bash/0466-sourced-script
source hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Conditional execution based on source detection |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `` | A script designed to be sourced that runs when sourced, printing Hello World. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
