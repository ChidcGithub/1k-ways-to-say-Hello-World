---
id: 0388
language: brainfuck
paradigm: esoteric
output: stderr
platform: cli
era: classic
tags: []
notes: Wraps stdout brainfuck code with stderr-redirect concept
author: ChidcGithub
date: 2026-07-20
---

# #0388 · Brainfuck stderr-wrapper

## Description

A Brainfuck Hello World entry: Wraps stdout brainfuck code with stderr-redirect concept

## Source Code

hello.bf:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0388-stderr-wrapper
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | brainfuck | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | esoteric | Brainfuck's instruction set is its own paradigm |
| output | stderr | Output via brainfuck . instruction |
| platform | cli | Runs in a cli context |
| era | classic | Brainfuck created in 1993 (classic era) |
| tags | [] | Wraps stdout brainfuck code with stderr-redirect concept |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
