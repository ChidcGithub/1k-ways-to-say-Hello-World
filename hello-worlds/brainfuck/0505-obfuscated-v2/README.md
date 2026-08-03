---
id: 0505
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: classic
tags: ["obfuscated"]
notes: Deliberately tangled pointer movements and redundant nested loops
author: ChidcGithub
date: 2026-07-20
---

# #0505 · Brainfuck obfuscated-v2

## Description

A Brainfuck Hello World entry: Deliberately tangled pointer movements and redundant nested loops

## Source Code

`hello.bf`:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0505-obfuscated-v2
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
| tags | `["obfuscated"]` | Deliberately tangled pointer movements and redundant nested loops |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
