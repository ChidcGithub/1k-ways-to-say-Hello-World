---
id: 0398
language: brainfuck
paradigm: esoteric
output: ascii-art
platform: cli
era: classic
tags: ["ascii-art"]
notes: Uses large linear increment blocks to output a vertical ASCII-art banner
author: ChidcGithub
date: 2026-07-20
---

# #0398 · Brainfuck ascii-art-output

## Description

A Brainfuck Hello World entry: Uses large linear increment blocks to output a vertical ASCII-art banner

## Source Code

hello.bf:

```brainfuck
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++.>++++++++++.>+++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++++.>++++++++++.>
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0398-ascii-art-output
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | brainfuck | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | esoteric | Brainfuck's instruction set is its own paradigm |
| output | ascii-art | Output via brainfuck . instruction |
| platform | cli | Runs in a cli context |
| era | classic | Brainfuck created in 1993 (classic era) |
| tags | ["ascii-art"] | Uses large linear increment blocks to output a vertical ASCII-art banner |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
