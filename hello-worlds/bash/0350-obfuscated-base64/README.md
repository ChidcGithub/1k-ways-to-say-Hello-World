---
id: 0350
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: ["obfuscated"]
notes: "Obfuscated: the entire Hello World string is base64-encoded and piped through base64 -d."
author: ChidcGithub
date: 2026-07-20
---

# #0350 · Bash Obfuscated-Base64

## Description

Hello World via base64-encoded string piped through base64 -d.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo SGVsbG8sIFdvcmxkIQo= | base64 -d
```

## Run

```bash
cd hello-worlds/bash/0350-obfuscated-base64
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Pipeline through base64 decode |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `["obfuscated"]` | Obfuscated: the entire Hello World string is base64-encoded and piped through base64 -d. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
