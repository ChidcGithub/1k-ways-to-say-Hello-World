---
id: 0475
language: bash
paradigm: procedural
output: audio
platform: cli
era: classic
tags: []
notes: "Uses the terminal bell to accompany Hello World with an audio beep."
author: ChidcGithub
date: 2026-07-20
---

# #0475 · Bash Audio-Beep

## Description

Hello World with an audio beep (terminal bell).

## Source Code

`hello.sh`:

```bash
#!/usr/bin/env bash
echo -e "\aHello, World!"
```

## Run

```bash
cd hello-worlds/bash/0475-audio-beep
bash hello.sh
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `bash` | Bash shell script |
| paradigm | `procedural` | Sequential echo with terminal bell escape sequence |
| output | `audio` | Output goes to audio |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Bash 1.0 (1989) — classic era |
| tags | `[]` | Uses the terminal bell to accompany Hello World with an audio beep. |

## Reference

- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
