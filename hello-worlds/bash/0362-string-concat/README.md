---
id: 0362
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Concatenates string literals to build Hello World."
author: ChidcGithub
date: 2026-07-20
---

# #0362 · Bash String-Concat

## Description

Hello World built via string concatenation.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
greeting="Hello"
greeting+=", "
greeting+="World!"
echo "$greeting"
```

## Run

```bash
cd hello-worlds/bash/0362-string-concat
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Step-by-step string concatenation |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `` | Concatenates string literals to build Hello World. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
