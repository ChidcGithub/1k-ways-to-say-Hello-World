---
id: 0370
language: bash
paradigm: concurrent
output: stdout
platform: cli
era: classic
tags: ["parallel"]
notes: "Uses coproc to run echo in a coprocess and reads its output."
author: ChidcGithub
date: 2026-07-20
---

# #0370 · Bash Coproc-Parallel

## Description

Hello World via a coprocess.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
coproc echo "Hello, World!"
read -r msg <&"${COPROC[0]}"
echo "$msg"
```

## Run

```bash
cd hello-worlds/bash/0370-coproc-parallel
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `concurrent` | Concurrent execution via coprocess |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `["parallel"]` | Uses coproc to run echo in a coprocess and reads its output. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
