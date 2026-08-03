---
id: 0490
language: brainfuck
paradigm: esoteric
output: image
platform: cli
era: classic
tags: []
notes: Outputs raw PPM pixel data to render Hello World as an image (concept)
author: ChidcGithub
date: 2026-07-20
---

# #0490 · Brainfuck image-ppm-concept

## Description

A Brainfuck Hello World entry: Outputs raw PPM pixel data to render Hello World as an image (concept)

## Source Code

hello.bf:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0490-image-ppm-concept
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | brainfuck | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | esoteric | Brainfuck's instruction set is its own paradigm |
| output | image | Output via brainfuck . instruction |
| platform | cli | Runs in a cli context |
| era | classic | Brainfuck created in 1993 (classic era) |
| tags | [] | Outputs raw PPM pixel data to render Hello World as an image (concept) |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
