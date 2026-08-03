---
id: 0364
language: bash
paradigm: procedural
output: file
platform: cli
era: classic
tags: []
notes: "Uses a heredoc to write Hello World to a file, then cats it."
author: ChidcGithub
date: 2026-07-20
---

# #0364 · Bash Here-Doc-File

## Description

Hello World written to file via heredoc.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
cat > hello.txt <<EOF
Hello, World!
EOF
cat hello.txt
```

## Run

```bash
cd hello-worlds/bash/0364-here-doc-file
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Heredoc file write followed by display |
| output | `file` | Output goes to file |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `` | Uses a heredoc to write Hello World to a file, then cats it. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
