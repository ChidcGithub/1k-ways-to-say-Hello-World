---
id: 0351
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: ["obfuscated"]
notes: "Obfuscated: stores Hello World reversed and reverses it back with rev."
author: ChidcGithub
date: 2026-07-20
---

# #0351 · Bash Obfuscated-Reversed

## Description

Hello World via reversed string piped through rev.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "!dlroW ,olleH" | rev
```

## Run

```bash
cd hello-worlds/bash/0351-obfuscated-reversed
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Pipeline through reverse transformation |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `["obfuscated"]` | Obfuscated: stores Hello World reversed and reverses it back with rev. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
