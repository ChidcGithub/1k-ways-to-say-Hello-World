---
id: 0007
language: brainfuck
paradigm: esoteric
output: stdout
platform: cli
era: classic
tags: [code-golf]
notes: "Brainfuck (Urban Müller, 1993); uses only the 8 characters > < + - . , [ ]."
author: ChidcGithub
date: 2026-07-20
---

# #0007 · Brainfuck

## Description

A Hello World written in Brainfuck, the 8-instruction esoteric language designed by Urban Müller in 1993. The program uses only the characters `> < + - . , [ ]` to manipulate a tape of memory cells: a single counting loop multiplies a base value into several cells, after which the pointer walks the tape and emits each byte of `Hello, World!` via the `.` (output) instruction. A canonical demonstration of code golf under the constraints of a Turing-complete but deliberately minimal instruction set.

## Source Code

`hello.bf`:

```brainfuck
++++++++++[>+++++++>++++++++++>+++>+>++++<<<<<-]>++.>+.+++++++..+++.>>>++++.<<++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

## Run

Brainfuck has no standard runtime, so you need a Brainfuck interpreter (e.g. `beef`, `bf`, or any online Brainfuck interpreter). With `beef`:

```bash
cd hello-worlds/0007-brainfuck
beef hello.bf
```

If no interpreter is installed, this repository does not bundle one — install `beef` (e.g. `apt install beef` on Debian/Ubuntu, `brew install beef` on macOS) or paste the source into an online interpreter.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `brainfuck` | Brainfuck, an esoteric language with only 8 instructions |
| paradigm | `esoteric` | Computation expressed entirely through the 8 brainfuck primitives on a tape |
| output | `stdout` | The `.` instruction writes a byte to standard output |
| platform | `cli` | Runs via a command-line interpreter |
| era | `classic` | Brainfuck was created by Urban Müller in 1993 (1981–2000 classic era) |
| tags | `[code-golf]` | Extremely compact source using only the 8 language characters |

## Reference

- [Brainfuck — Wikipedia](https://en.wikipedia.org/wiki/Brainfuck)
