---
id: 0480
language: brainfuck
paradigm: esoteric
output: web
platform: browser
era: classic
tags: []
notes: Runs Brainfuck in a JavaScript interpreter inside the browser
author: ChidcGithub
date: 2026-07-20
---

# #0480 · Brainfuck web-js-interpreter

## Description

A Brainfuck Hello World entry: Runs Brainfuck in a JavaScript interpreter inside the browser

## Source Code

hello.bf:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0480-web-js-interpreter
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | brainfuck | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | esoteric | Brainfuck's instruction set is its own paradigm |
| output | web | Output via brainfuck . instruction |
| platform | browser | Runs in a browser context |
| era | classic | Brainfuck created in 1993 (classic era) |
| tags | [] | Runs Brainfuck in a JavaScript interpreter inside the browser |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
