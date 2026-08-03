---
id: 0333
language: bash
paradigm: procedural
output: file
platform: cli
era: classic
tags: []
notes: "Writes Hello World to a file using > redirection."
author: ChidcGithub
date: 2026-07-20
---

# #0333 · Bash File-Redirect

## Description

Hello World written to a file via redirection.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!" > hello.txt
cat hello.txt
```

## Run

```bash
cd hello-worlds/bash/0333-file-redirect
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential file write and display |
| output | `file` | Output goes to file |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Writes Hello World to a file using > redirection. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
