---
id: 0419
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: classic
tags: []
notes: Brainfuck program structured as a finite state machine (concept)
author: ChidcGithub
date: 2026-07-20
---

# #0419 · Brainfuck state-machine

## Description

A Brainfuck Hello World entry: Brainfuck program structured as a finite state machine (concept)

## Source Code

`hello.bf`:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0419-state-machine
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
| tags | `[]` | Brainfuck program structured as a finite state machine (concept) |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
