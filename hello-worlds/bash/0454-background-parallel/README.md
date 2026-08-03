---
id: 0454
language: bash
paradigm: concurrent
output: stdout
platform: cli
era: classic
tags: ["parallel"]
notes: "Spawns two background processes to output each half of Hello World in parallel."
author: ChidcGithub
date: 2026-07-20
---

# #0454 · Bash Background-Parallel

## Description

Hello World output split across two parallel background processes.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo -n "Hello, " &
echo "World!" &
wait
```

## Run

```bash
cd hello-worlds/bash/0454-background-parallel
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `concurrent` | Concurrent execution via background processes |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `["parallel"]` | Spawns two background processes to output each half of Hello World in parallel. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
