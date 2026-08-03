---
id: 0389
language: brainfuck
paradigm: esoteric
output: file
platform: cli
era: classic
tags: []
notes: Redirects brainfuck output to a file via interpreter wrapper
author: ChidcGithub
date: 2026-07-20
---

# #0389 · Brainfuck file-output-wrapper

## Description

A Brainfuck Hello World entry: Redirects brainfuck output to a file via interpreter wrapper

## Source Code

hello.bf:

```brainfuck
++++[>++++++++++++++++++>+++++++++++++++++++++++++>+++++++++++>++++++++>++++++++++++++++++++>++++++++<<<<<<<<<-]>.>+.+++++++..+++.>>.>.>-.<<<<.+++.------.--------.>>>>+.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0389-file-output-wrapper
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | brainfuck | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | esoteric | Brainfuck's instruction set is its own paradigm |
| output | file | Output via brainfuck . instruction |
| platform | cli | Runs in a cli context |
| era | classic | Brainfuck created in 1993 (classic era) |
| tags | [] | Redirects brainfuck output to a file via interpreter wrapper |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
