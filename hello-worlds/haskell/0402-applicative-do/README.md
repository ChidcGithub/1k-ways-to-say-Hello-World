---
id: 0402
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses ApplicativeDo to desugar do-notation into Applicative operations (when possible) rather than Monad."
author: ChidcGithub
date: 2026-07-25
---

# #0402 · Haskell ApplicativeDo

## Description

`ApplicativeDo` lets GHC desugar `do` notation into `Applicative` combinators when possible, instead of `Monad`. The binding `greeting <- return "Hello, World!"` followed by `putStrLn greeting` may be desugared applicatively rather than monadically — a potential optimization that exposes the `Applicative` subset of `Monad`.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE ApplicativeDo #-}

main :: IO ()
main = do
    greeting <- return ("Hello, World!" :: String)
    putStrLn greeting
```

## Run

```bash
cd hello-worlds/haskell/0402-applicative-do
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with ApplicativeDo |
| paradigm | `procedural` | Do-notation with applicative desugaring |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | ApplicativeDo (GHC 8.0+) |
| tags | `[]` | No special technique |
