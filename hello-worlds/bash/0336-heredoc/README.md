---
id: 0336
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses a heredoc (<<) to pass Hello World to cat."
author: ChidcGithub
date: 2026-07-20
---

# #0336 · Bash Heredoc

## Description

Hello World printed via a heredoc.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
cat <<EOF
Hello, World!
EOF
```

## Run

```bash
cd hello-worlds/bash/0336-heredoc
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential heredoc passed to cat |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses a heredoc (<<) to pass Hello World to cat. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
