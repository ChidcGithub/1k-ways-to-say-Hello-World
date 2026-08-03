---
id: 0482
language: brainfuck
paradigm: esoteric
output: serial
platform: embedded
era: classic
tags: []
notes: Brainfuck running on an MCU via a minimal Brainfuck runtime
author: ChidcGithub
date: 2026-07-20
---

# #0482 · Brainfuck embedded-mcu

## Description

A Brainfuck Hello World entry: Brainfuck running on an MCU via a minimal Brainfuck runtime

## Source Code

hello.bf:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0482-embedded-mcu
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | brainfuck | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | esoteric | Brainfuck's instruction set is its own paradigm |
| output | serial | Output via brainfuck . instruction |
| platform | embedded | Runs in a embedded context |
| era | classic | Brainfuck created in 1993 (classic era) |
| tags | [] | Brainfuck running on an MCU via a minimal Brainfuck runtime |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
