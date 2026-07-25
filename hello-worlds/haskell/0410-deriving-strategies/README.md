---
id: 0410
language: haskell
paradigm: generic
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses DerivingStrategies to explicitly choose stock vs newtype deriving."
author: ChidcGithub
date: 2026-07-25
---

# #0410 Haskell DerivingStrategies

## Description

DerivingStrategies specifies how instances are derived. deriving stock uses built-in derivation for Show; deriving newtype reuses the underlying String instance for Semigroup/Monoid.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE DerivingStrategies #-}
{-# LANGUAGE GeneralizedNewtypeDeriving #-}

newtype Greeting = Greeting String
    deriving stock Show
    deriving newtype (Semigroup, Monoid)

main :: IO ()
main = putStrLn $ show $ Greeting "Hello, " <> Greeting "World!"
```

## Run

```bash
cd hello-worlds/haskell/0410-deriving-strategies
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with DerivingStrategies |
| paradigm | generic | Deriving strategy selection |
| output | stdout | putStrLn . show |
| platform | cli | Terminal |
| era | contemporary | DerivingStrategies (GHC 8.2+) |
| tags | [] | No special technique |
