---
id: 0507
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: contemporary
tags: []
notes: Uses contemporary Brainfuck extensions (2021+)
author: ChidcGithub
date: 2026-07-20
---

# #0507 · Brainfuck contemporary-extended

## Description

A Brainfuck Hello World entry: Uses contemporary Brainfuck extensions (2021+)

## Source Code

`hello.bf`:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0507-contemporary-extended
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `brainfuck` | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | `esoteric` | Brainfuck's instruction set is its own paradigm |
| output | `stdout` | Output via brainfuck . instruction |
| platform | `cli` | Runs in a cli context |
| era | `contemporary` | Brainfuck created in 1993 (classic era); uses contemporary extensions (2021+) |
| tags | `[]` | Uses contemporary Brainfuck extensions (2021+) |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
