---
id: 0446
language: bash
paradigm: procedural
output: network
platform: cli
era: classic
tags: []
notes: "Concept entry: sends Hello World over a TCP socket using nc/netcat."
author: ChidcGithub
date: 2026-07-20
---

# #0446 · Bash Network-Netcat

## Description

Concept entry — Hello World sent over TCP via netcat.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo "Hello, World!" | nc -l -p 8080 -q 0 &
sleep 1
nc localhost 8080
```

## Run

```bash
cd hello-worlds/bash/0446-network-netcat
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential netcat pipeline for network output |
| output | `network` | Output goes to network |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Concept entry: sends Hello World over a TCP socket using nc/netcat. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
