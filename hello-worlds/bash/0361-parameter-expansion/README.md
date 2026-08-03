---
id: 0361
language: bash
paradigm: meta
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses Bash parameter expansion to construct the greeting from substrings."
author: ChidcGithub
date: 2026-07-20
---

# #0361 · Bash Parameter-Expansion

## Description

Hello World constructed via parameter expansion.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
h="Hello,"; w="World!"; echo "${h} ${w}"
```

## Run

```bash
cd hello-worlds/bash/0361-parameter-expansion
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `meta` | Meta-level parameter expansion for string construction |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `` | Uses Bash parameter expansion to construct the greeting from substrings. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
