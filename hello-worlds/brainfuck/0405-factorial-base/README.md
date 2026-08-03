---
id: 0405
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: classic
tags: []
notes: Uses factorial decomposition to compute ASCII values
author: ChidcGithub
date: 2026-07-20
---

# #0405 · Brainfuck factorial-base

## Description

A Brainfuck Hello World entry: Uses factorial decomposition to compute ASCII values

## Source Code

hello.bf:

```brainfuck
++++++++[>+++++++++<-]>.<++++++++++[>>++++++++++<<-]>>+<<>>.<<+++++++++[>>>++++++++++++<<<-]>>>.<<<+++++++++[>>>>++++++++++++<<<<-]>>>>.<<<<++++++[>>>>>++++++++++++++++++<<<<<-]>>>>>+++<<<<<>>>>>.<<<<<++++[>>>>>>+++++++++++<<<<<<-]>>>>>>.<<<<<<++++[>>>>>>>++++++++<<<<<<<-]>>>>>>>.<<<<<<<+++[>>>>>>>>+++++++++++++++++++++++++++++<<<<<<<<-]>>>>>>>>.<<<<<<<<++++++[>>>>>>>>>++++++++++++++++++<<<<<<<<<-]>>>>>>>>>+++<<<<<<<<<>>>>>>>>>.<<<<<<<<<++++++[>>>>>>>>>>+++++++++++++++++++<<<<<<<<<<-]>>>>>>>>>>.<<<<<<<<<<+++++++++[>>>>>>>>>>>++++++++++++<<<<<<<<<<<-]>>>>>>>>>>>.<<<<<<<<<<<++++++++++[>>>>>>>>>>>>++++++++++<<<<<<<<<<<<-]>>>>>>>>>>>>.<<<<<<<<<<<<+++[>>>>>>>>>>>>>+++++++++++<<<<<<<<<<<<<-]>>>>>>>>>>>>>.<<<<<<<<<<<<<++[>>>>>>>>>>>>>>+++++<<<<<<<<<<<<<<-]>>>>>>>>>>>>>>.<<<<<<<<<<<<<<
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0405-factorial-base
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
| tags | [] | Uses factorial decomposition to compute ASCII values |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
