---
id: 0393
language: brainfuck
paradigm: esoteric
output: network
platform: cloud
era: classic
tags: []
notes: Brainfuck running inside a cloud function; output returned as HTTP response
author: ChidcGithub
date: 2026-07-20
---

# #0393 · Brainfuck cloud-lambda

## Description

A Brainfuck Hello World entry: Brainfuck running inside a cloud function; output returned as HTTP response

## Source Code

hello.bf:

```brainfuck
++++[>++++++++++++++++++>+++++++++++++++++++++++++>+++++++++++>++++++++>++++++++++++++++++++>++++++++<<<<<<<<<-]>.>+.+++++++..+++.>>.>.>-.<<<<.+++.------.--------.>>>>+.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0393-cloud-lambda
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | brainfuck | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | esoteric | Brainfuck's instruction set is its own paradigm |
| output | network | Output via brainfuck . instruction |
| platform | cloud | Runs in a cloud context |
| era | classic | Brainfuck created in 1993 (classic era) |
| tags | [] | Brainfuck running inside a cloud function; output returned as HTTP response |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
