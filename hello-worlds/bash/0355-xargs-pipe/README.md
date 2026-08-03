---
id: 0355
language: bash
paradigm: functional
output: stdout
platform: cli
era: classic
tags: []
notes: "Pipes Hello World through xargs to echo."
author: ChidcGithub
date: 2026-07-20
---

# #0355 · Bash Xargs-Pipe

## Description

Hello World piped through xargs.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!" | xargs -I{} echo "{}"
```

## Run

```bash
cd hello-worlds/bash/0355-xargs-pipe
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `functional` | Functional data flow through xargs pipeline |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Pipes Hello World through xargs to echo. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
