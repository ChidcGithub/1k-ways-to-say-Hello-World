---
id: 0449
language: bash
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: ["obfuscated"]
notes: "Obfuscated: stores the echo command and payload in encoded form and evaluates it."
author: ChidcGithub
date: 2026-07-20
---

# #0449 · Bash Obfuscated-Eval

## Description

Hello World via obfuscated base64-decoded eval.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
cmd=$(echo ZWNobyAiSGVsbG8sIFdvcmxkISI= | base64 -d)
eval "$cmd"
```

## Run

```bash
cd hello-worlds/bash/0449-obfuscated-eval
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential decode-then-eval execution |
| output | `stdout` | Output goes to stdout |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `["obfuscated"]` | Obfuscated: stores the echo command and payload in encoded form and evaluates it. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
