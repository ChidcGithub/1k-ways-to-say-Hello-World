---
id: 0347
language: haskell
paradigm: generic
output: stdout
platform: cli
era: modern
tags: []
notes: "Encodes the greeting as data types deriving Show, leveraging Haskell's type-class polymorphism."
author: ChidcGithub
date: 2026-07-25
---

# #0347 · Haskell Typeclass-Show

## Description

The greeting is decomposed into two sum-type constructors (`Hello` and `World`), both deriving `Show`. `show` converts each to a string, and `(++)` reassembles them. This demonstrates ad-hoc polymorphism via type classes — the compile-time dispatch that selects the correct `show` implementation.

## Source Code

`Main.hs`:

```haskell
data Greeting = Hello | World deriving Show

main :: IO ()
main = putStrLn $ show Hello ++ ", " ++ show World ++ "!"
```

## Run

```bash
cd hello-worlds/haskell/0347-typeclass-show
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `generic` | Ad-hoc polymorphism via `Show` type class |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
