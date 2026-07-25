---
id: 0411
language: haskell
paradigm: generic
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses DerivingVia to derive instances by delegation to an existing instance."
author: ChidcGithub
date: 2026-07-25
---

# #0411 Haskell DerivingVia

## Description

DerivingVia delegates instance derivation through an intermediate type. deriving (Semigroup, Monoid) via String tells GHC to reuse String's existing instances for Greeting.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE DerivingVia #-}
{-# LANGUAGE GeneralizedNewtypeDeriving #-}

newtype Greeting = Greeting String
    deriving (Semigroup, Monoid) via String

main :: IO ()
main = putStrLn $ let Greeting g = Greeting "Hello, " <> Greeting "World!" in g
```

## Run

```bash
cd hello-worlds/haskell/0411-deriving-via
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with DerivingVia |
| paradigm | generic | Via-derivation pattern |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | contemporary | DerivingVia (GHC 8.6+) |
| tags | [] | No special technique |
