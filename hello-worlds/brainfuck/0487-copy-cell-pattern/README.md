---
id: 0487
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: classic
tags: []
notes: Uses copy-loop to duplicate cell values, then adjusts for each character
author: ChidcGithub
date: 2026-07-20
---

# #0487 · Brainfuck copy-cell-pattern

## Description

A Brainfuck Hello World entry: Uses copy-loop to duplicate cell values, then adjusts for each character

## Source Code

hello.bf:

```brainfuck
++++++++[>+++++++++<-]>.<++++++++++[>>++++++++++<<-]>>[>+>+<<-]>>[<<+>>-]<<+.+++++++..+++.>>++++++++++++++++++++++++++++++++++++++++++++.>++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.<<<+++++++++++.+++.------.--------.>>>>+++++++++++++++++++++++++++++++++.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0487-copy-cell-pattern
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
| tags | [] | Uses copy-loop to duplicate cell values, then adjusts for each character |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
