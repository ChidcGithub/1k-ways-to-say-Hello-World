---
id: 0345
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Builds the string via (++) concatenation using the ($) application operator."
author: ChidcGithub
date: 2026-07-25
---

# #0345 · Haskell String-Builder

## Description

The greeting is assembled from two string literals with `(++)` and passed through `($)` to `putStrLn`. The `($)` operator — function application with low precedence — lets the concatenation happen before the output, eliminating parentheses.

## Source Code

`Main.hs`:

```haskell
main = putStrLn $ "Hello, " ++ "World!"
```

## Run

```bash
cd hello-worlds/haskell/0345-string-builder
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Function composition via `($)` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
