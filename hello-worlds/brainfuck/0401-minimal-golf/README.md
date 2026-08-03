---
id: 0401
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: classic
tags: ["code-golf"]
notes: Shortest possible Brainfuck Hello World using optimized cell layout
author: ChidcGithub
date: 2026-07-20
---

# #0401 · Brainfuck minimal-golf

## Description

A Brainfuck Hello World entry: Shortest possible Brainfuck Hello World using optimized cell layout

## Source Code

hello.bf:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0401-minimal-golf
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | brainfuck | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | esoteric | Brainfuck's instruction set is its own paradigm |
| output | stdout | Output via brainfuck . instruction |
| platform | cli | Runs in a cli context |
| era | classic | Brainfuck created in 1993 (classic era) |
| tags | ["code-golf"] | Shortest possible Brainfuck Hello World using optimized cell layout |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
