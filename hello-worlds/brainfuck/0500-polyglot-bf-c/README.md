---
id: 0500
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: classic
tags: ["polyglot"]
notes: Polyglot source valid as both Brainfuck and C
author: ChidcGithub
date: 2026-07-20
---

# #0500 · Brainfuck polyglot-bf-c

## Description

A Brainfuck Hello World entry: Polyglot source valid as both Brainfuck and C

## Source Code

`hello.bf`:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0500-polyglot-bf-c
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `brainfuck` | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | `esoteric` | Brainfuck's instruction set is its own paradigm |
| output | `stdout` | Output via brainfuck . instruction |
| platform | `cli` | Runs in a cli context |
| era | `classic` | Brainfuck created in 1993 (classic era) |
| tags | `["polyglot"]` | Polyglot source valid as both Brainfuck and C |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
