---
id: 0356
language: haskell
paradigm: generic
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Higher-rank polymorphism: a function accepting a polymorphic callback."
author: ChidcGithub
date: 2026-07-25
---

# #0356 · Haskell Rank-N-Types

## Description

Rank-N types allow functions to accept polymorphic arguments. `withGreeting` takes a callback of type `(String -> IO ())` — a monomorphic callback, but wrapped in a higher-rank style. The greeting string is passed through a continuation, inverting control flow through polymorphism.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE RankNTypes #-}

withGreeting :: (String -> IO ()) -> IO ()
withGreeting action = action "Hello, World!"

main :: IO ()
main = withGreeting putStrLn
```

## Run

```bash
cd hello-worlds/haskell/0356-rank-n-types
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with RankNTypes |
| paradigm | `generic` | Higher-rank polymorphism |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | RankNTypes (GHC 6.4+) |
| tags | `[]` | No special technique |
