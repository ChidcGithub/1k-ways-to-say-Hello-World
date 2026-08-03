---
id: 0391
language: brainfuck
paradigm: esoteric
output: stdout
platform: wasm
era: classic
tags: []
notes: Brainfuck interpreter compiled to WebAssembly; runs in a WASM runtime
author: ChidcGithub
date: 2026-07-20
---

# #0391 · Brainfuck wasm-target

## Description

A Brainfuck Hello World entry: Brainfuck interpreter compiled to WebAssembly; runs in a WASM runtime

## Source Code

hello.bf:

```brainfuck
++++[>++++++++++++++++++>+++++++++++++++++++++++++>+++++++++++>++++++++>++++++++++++++++++++>++++++++<<<<<<<<<-]>.>+.+++++++..+++.>>.>.>-.<<<<.+++.------.--------.>>>>+.
```

## Run

Brainfuck has no standard runtime. Use a Brainfuck interpreter (e.g. beef, bf).

```bash
cd hello-worlds/brainfuck/0391-wasm-target
beef hello.bf
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | brainfuck | Brainfuck, esoteric 8-instruction language (Urban Müller, 1993) |
| paradigm | esoteric | Brainfuck's instruction set is its own paradigm |
| output | stdout | Output via brainfuck . instruction |
| platform | wasm | Runs in a wasm context |
| era | classic | Brainfuck created in 1993 (classic era) |
| tags | [] | Brainfuck interpreter compiled to WebAssembly; runs in a WASM runtime |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
