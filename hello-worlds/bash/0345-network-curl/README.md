---
id: 0345
language: bash
paradigm: procedural
output: network
platform: cli
era: classic
tags: []
notes: "Concept entry: serves Hello World over HTTP and fetches it with curl."
author: ChidcGithub
date: 2026-07-20
---

# #0345 · Bash Network-Curl

## Description

Concept entry — Hello World served over HTTP and fetched with curl.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!"
```

## Run

```bash
cd hello-worlds/bash/0345-network-curl
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential echo statement (network concept) |
| output | `network` | Output goes to network |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Concept entry: serves Hello World over HTTP and fetches it with curl. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
