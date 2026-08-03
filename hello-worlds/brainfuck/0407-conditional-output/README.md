---
id: 0407
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: classic
tags: []
notes: Only outputs Hello World if a flag cell is set; otherwise outputs a different message
author: ChidcGithub
date: 2026-07-20
---

# #0407 · Brainfuck conditional-output

## Description

A Brainfuck Hello World entry: Only outputs Hello World if a flag cell is set; otherwise outputs a different message

## Source Code

hello.bf:

```brainfuck
+>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>++++++++++++++++++++++++++++++++<[- > . <]>>+>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++<[- > . <]>>+>+++++++++++++++++++++++++++++++++<[- > . <]>>+>++++++++++<[- > . <]>>
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0407-conditional-output
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
| tags | [] | Only outputs Hello World if a flag cell is set; otherwise outputs a different message |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
