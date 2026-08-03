---
id: 0504
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: classic
tags: ["quine"]
notes: A quine that outputs its own source code followed by Hello, World!
author: ChidcGithub
date: 2026-07-20
---

# #0504 · Brainfuck quine-appended

## Description

A Brainfuck Hello World entry: A quine that outputs its own source code followed by Hello, World!

## Source Code

`hello.bf`:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0504-quine-appended
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
| tags | `["quine"]` | A quine that outputs its own source code followed by Hello, World! |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
