---
id: 0355
language: haskell
paradigm: generic
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses associated type families to compute the return type of greet from the input type."
author: ChidcGithub
date: 2026-07-25
---

# #0355 · Haskell Type-Families

## Description

Associated type families allow a type class to compute types from its parameters. The `Greeting` class declares `GreetingResult` as an associated type; the instance for `HelloWorld` sets it to `String`. Type-level functional programming shapes the interface at compile time.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE TypeFamilies #-}

class Greeting a where
    type GreetingResult a
    greet :: a -> GreetingResult a

data HelloWorld = HelloWorld

instance Greeting HelloWorld where
    type GreetingResult HelloWorld = String
    greet _ = "Hello, World!"

main :: IO ()
main = putStrLn $ greet HelloWorld
```

## Run

```bash
cd hello-worlds/haskell/0355-type-families
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with TypeFamilies |
| paradigm | `generic` | Associated type families |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | TypeFamilies (GHC 6.8+) |
| tags | `[]` | No special technique |
