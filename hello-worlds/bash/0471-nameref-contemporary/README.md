---
id: 0471
language: bash
paradigm: meta
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses nameref (declare -n) introduced in Bash 4.3+ to indirect-reference the greeting variable."
author: ChidcGithub
date: 2026-07-20
---

# #0471 · Bash Nameref-Contemporary

## Description

Hello World via a nameref (Bash 4.3+ indirect reference).

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
greeting="Hello, World!"
declare -n ref=greeting
echo "$ref"
```

## Run

```bash
cd hello-worlds/bash/0471-nameref-contemporary
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `meta` | Meta-level indirect referencing via nameref |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `contemporary` | Bash 1.0 (1989) — contemporary era (Bash 4.3+, 2014) |
| tags | `[]` | Uses nameref (declare -n) introduced in Bash 4.3+ to indirect-reference the greeting variable. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
