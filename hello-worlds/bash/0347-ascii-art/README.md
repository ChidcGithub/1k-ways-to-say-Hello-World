---
id: 0347
language: bash
paradigm: procedural
output: ascii-art
platform: cli
era: classic
tags: ["ascii-art"]
notes: "Prints an ASCII-art banner of Hello World using a heredoc."
author: ChidcGithub
date: 2026-07-20
---

# #0347 · Bash ASCII-Art

## Description

Hello World as an ASCII-art banner.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
cat <<"EOF"
 _   _      _ _         __        __         _     _ _
| | | | ___| | | ___    \ \      / /__  _ __| | __| | |
| |_| |/ _ \ | |/ _ \    \ \ /\ / / _ \| '__| |/ _` | |
|  _  |  __/ | | (_) |    \ V  V / (_) | |  | | (_| |_|
|_| |_|\___|_|_|\___/      \_/\_/ \___/|_|  |_|\__,_(_)
EOF
```

## Run

```bash
cd hello-worlds/bash/0347-ascii-art
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential heredoc passed to cat for ASCII art output |
| output | `ascii-art` | Output goes to ascii-art |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `["ascii-art"]` | Prints an ASCII-art banner of Hello World using a heredoc. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
