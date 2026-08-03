---
id: 0352
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: ["quine"]
notes: "A quine that outputs its own source followed by Hello World (quine-appended)."
author: ChidcGithub
date: 2026-07-20
---

# #0352 · Bash Quine

## Description

A quine that outputs its own source code followed by Hello, World!.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
s='s=%s;printf "$s\n" "$s" && echo Hello, World!';printf "$s\n" "$s" && echo Hello, World!
```

## Run

```bash
cd hello-worlds/bash/0352-quine
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Self-replicating quine with appended greeting |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `["quine"]` | A quine that outputs its own source followed by Hello World (quine-appended). |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
