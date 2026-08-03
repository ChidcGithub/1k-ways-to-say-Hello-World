---
id: 0473
language: bash
paradigm: procedural
output: network
platform: cloud
era: classic
tags: []
notes: "Concept entry: Hello World served via cloud function context."
author: ChidcGithub
date: 2026-07-20
---

# #0473 · Bash Cloud-AWS-CLI

## Description

Concept entry — Hello World for a cloud function context.

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo '{"statusCode": 200, "body": "Hello, World!"}'
```

## Run

```bash
cd hello-worlds/bash/0473-cloud-aws-cli
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential JSON-formatted cloud function response |
| output | `network` | Output goes to network |
| platform | `cloud` | Runs in a cloud context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Concept entry: Hello World served via cloud function context. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
