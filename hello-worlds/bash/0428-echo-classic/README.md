---
id: 0428
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Standard echo-based Hello World; the canonical Bash approach."
author: ChidcGithub
date: 2026-07-20
---

# #0428 · Bash Echo-Classic

## Description

A standard shell Hello World using echo.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!"
```

## Run

```bash
cd hello-worlds/bash/0428-echo-classic
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | A single sequential echo statement |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Standard echo-based Hello World; the canonical Bash approach. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
