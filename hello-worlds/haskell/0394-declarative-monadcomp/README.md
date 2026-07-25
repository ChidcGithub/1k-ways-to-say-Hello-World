---
id: 0394
language: haskell
paradigm: declarative
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses MonadComprehensions extension to write monadic expressions in list comprehension syntax."
author: ChidcGithub
date: 2026-07-25
---

# #0394 · Haskell Declarative-MonadComp

## Description

`MonadComprehensions` generalizes list comprehension syntax to arbitrary monads. `[x ++ "!" | x <- return "Hello, World"]` desugars to `return "Hello, World" >>= \x -> return (x ++ "!")`. The declarative surface syntax hides monadic plumbing — a bridge between set-builder notations and effectful computation.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE MonadComprehensions #-}

main :: IO ()
main = putStrLn =<< [x ++ "!" | x <- return "Hello, World"]
```

## Run

```bash
cd hello-worlds/haskell/0394-declarative-monadcomp
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with MonadComprehensions |
| paradigm | `declarative` | Monad comprehension |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | MonadComprehensions extension |
| tags | `[]` | No special technique |
