---
id: 0354
language: haskell
paradigm: generic
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Promotes a string literal to the type level using DataKinds, then reifies it back with symbolVal."
author: ChidcGithub
date: 2026-07-25
---

# #0354 · Haskell Data-Kinds

## Description

`DataKinds` promotes data constructors to type-level symbols. The greeting `"Hello, World!"` is a type (`Symbol` from `GHC.TypeLits`), reified back to a runtime string via `symbolVal`. Type-level programming meets the simplest of programs.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE DataKinds, KindSignatures #-}
import GHC.TypeLits (Symbol, symbolVal)
import Data.Proxy (Proxy(..))

main :: IO ()
main = putStrLn $ symbolVal (Proxy :: Proxy "Hello, World!")
```

## Run

```bash
cd hello-worlds/haskell/0354-data-kinds
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with DataKinds |
| paradigm | `generic` | Type-level string reification |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | DataKinds (GHC 7.4+) |
| tags | `[]` | No special technique |
