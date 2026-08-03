---
id: 0443
language: bash
paradigm: declarative
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses a case statement to pattern-match and output Hello World."
author: ChidcGithub
date: 2026-07-20
---

# #0443 · Bash Case-Statement

## Description

Hello World via a case statement pattern-match.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
target="hello"
case "$target" in
  hello) echo "Hello, World!" ;;
  *) echo "?" ;;
esac
```

## Run

```bash
cd hello-worlds/bash/0443-case-statement
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `declarative` | Pattern-matching via case construct — declarative control flow |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses a case statement to pattern-match and output Hello World. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
