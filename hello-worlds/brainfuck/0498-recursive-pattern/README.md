---
id: 0498
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: classic
tags: []
notes: Recursive tape-modification pattern for character generation (concept)
author: ChidcGithub
date: 2026-07-20
---

# #0498 · Brainfuck recursive-pattern

## Description

A Brainfuck Hello World entry: Recursive tape-modification pattern for character generation (concept)

## Source Code

`hello.bf`:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0498-recursive-pattern
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
| tags | `[]` | Recursive tape-modification pattern for character generation (concept) |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
