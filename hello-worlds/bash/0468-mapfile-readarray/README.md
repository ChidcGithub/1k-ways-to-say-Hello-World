---
id: 0468
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses mapfile/readarray to read Hello World into an array and print it."
author: ChidcGithub
date: 2026-07-20
---

# #0468 · Bash Mapfile-Readarray

## Description

Hello World read into an array via mapfile.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!" | { mapfile -t lines; printf '%s\n' "${lines[@]}"; }
```

## Run

```bash
cd hello-worlds/bash/0468-mapfile-readarray
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential use of mapfile for array loading |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses mapfile/readarray to read Hello World into an array and print it. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
