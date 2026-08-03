---
id: 0331
language: bash
paradigm: procedural
output: stderr
platform: cli
era: classic
tags: []
notes: "Redirects echo output to stderr via >&2."
author: ChidcGithub
date: 2026-07-20
---

# #0331 · Bash Stderr-Redirect

## Description

Hello World redirected to stderr.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!" >&2
```

## Run

```bash
cd hello-worlds/bash/0331-stderr-redirect
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | A single sequential statement with redirection |
| output | `stderr` | Output goes to stderr |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Redirects echo output to stderr via >&2. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
