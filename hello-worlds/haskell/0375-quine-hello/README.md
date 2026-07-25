---
id: 0375
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [quine]
notes: "The simplest quine variant: the program outputs its own source exactly. A Haskell program that prints 'Hello, World!' whose source is also 'Hello, World!' would be a true quine-polyglot."
author: ChidcGithub
date: 2026-07-25
---

# #0375 · Haskell Quine-Hello

## Description

This entry plays with the idea of a quine-polyglot: the source code is so minimal that the output "Hello, World!" could be considered the program's own "essence". As a true quine variation, the program outputs a string that appears verbatim in its source — the simplest form of self-reference in text generation.

## Source Code

`Main.hs`:

```haskell
main = putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0375-quine-hello
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Simple IO action |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[quine]` | Minimal self-referential output |
