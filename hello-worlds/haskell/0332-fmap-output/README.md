---
id: 0332
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses the <$ (fmap-replace) operator to replace the unit result with () after putStrLn."
author: ChidcGithub
date: 2026-07-25
---

# #0332 · Haskell Fmap-Output

## Description

The `<$` operator (a flipped `fmap` that replaces the inner value) applies `putStrLn` then substitutes its `()` result with a literal `()`. Demonstrates that `IO` is a `Functor`, where mapping is purely structural and execution is deferred.

## Source Code

`Main.hs`:

```haskell
main = () <$ putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0332-fmap-output
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Functor combinator `(<$)` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
