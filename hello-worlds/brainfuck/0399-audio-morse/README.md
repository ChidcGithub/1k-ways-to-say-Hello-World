---
id: 0399
language: brainfuck
paradigm: esoteric
output: audio
platform: cli
era: classic
tags: []
notes: Maps the . output instruction to audio beeps in Morse code (concept)
author: ChidcGithub
date: 2026-07-20
---

# #0399 · Brainfuck audio-morse

## Description

A Brainfuck Hello World entry: Maps the . output instruction to audio beeps in Morse code (concept)

## Source Code

hello.bf:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0399-audio-morse
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | brainfuck | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | esoteric | Brainfuck's instruction set is its own paradigm |
| output | audio | Output via brainfuck . instruction |
| platform | cli | Runs in a cli context |
| era | classic | Brainfuck created in 1993 (classic era) |
| tags | [] | Maps the . output instruction to audio beeps in Morse code (concept) |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
