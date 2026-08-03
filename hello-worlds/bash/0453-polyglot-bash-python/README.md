---
id: 0453
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: ["polyglot"]
notes: "Polyglot source valid as both Bash and Python using multi-line string tricks."
author: ChidcGithub
date: 2026-07-20
---

# #0453 · Bash Polyglot-bash-python

## Description

Polyglot source valid as both Bash and Python.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
":" && echo "Hello, World!" && exit
print("Hello, World!")
```

## Run

```bash
cd hello-worlds/bash/0453-polyglot-bash-python
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential statements with polyglot escape hatch |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `["polyglot"]` | Polyglot source valid as both Bash and Python using multi-line string tricks. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
