---
id: 0333
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses sequence_ to execute a list of IO actions in order."
author: ChidcGithub
date: 2026-07-25
---

# #0333 · Haskell Sequence-Chars

## Description

`sequence_` runs a list of `IO ()` actions from left to right, discarding results. The greeting is split across two list elements — `putStr` for "Hello, " and `putStrLn` for "World!" — stitched together by the Traversable/Monad machinery.

## Source Code

`Main.hs`:

```haskell
main = sequence_ [putStr "Hello, ", putStrLn "World!"]
```

## Run

```bash
cd hello-worlds/haskell/0333-sequence-chars
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Combinator `sequence_` |
| output | `stdout` | Standard output |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
