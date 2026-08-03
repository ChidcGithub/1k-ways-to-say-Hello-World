---
id: 0467
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses a select menu that defaults to printing Hello World."
author: ChidcGithub
date: 2026-07-20
---

# #0467 · Bash Select-Menu

## Description

Hello World displayed via a select menu.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
PS3="Choose: "
select choice in "Hello, World!" "Goodbye"; do echo "$choice"; break; done
```

## Run

```bash
cd hello-worlds/bash/0467-select-menu
echo 1 | bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Interactive select menu construct |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `` | Uses a select menu that defaults to printing Hello World. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
