---
id: 0472
language: bash
paradigm: meta
output: stdout
platform: cli
era: classic
tags: []
notes: "Uses brace expansion to duplicate the echo command for a meta-approach."
author: ChidcGithub
date: 2026-07-20
---

# #0472 · Bash Brace-Expansion

## Description

Hello World via brace expansion trick.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
eval echo "{Hello, World!,}"
```

## Run

```bash
cd hello-worlds/bash/0472-brace-expansion
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `meta` | Meta-level code generation via brace expansion + eval |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses brace expansion to duplicate the echo command for a meta-approach. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
