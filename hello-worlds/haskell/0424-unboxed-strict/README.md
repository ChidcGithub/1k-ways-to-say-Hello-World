---
id: 0424
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Touches GHC's unboxed primitive types via MagicHash, extracting the raw Int#."
author: ChidcGithub
date: 2026-07-25
---

# #0424 Haskell Unboxed-Strict

## Description

MagicHash exposes GHC's unboxed primitive types. I# is the constructor for boxed Int wrapping an unboxed Int#. Destructuring with (I# n) reveals the raw primitive - a peek below Haskell's boxed abstraction layer.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE MagicHash #-}
import GHC.Exts (Int(..))

main :: IO ()
main = putStrLn $ "Hello, World! " ++ show (let (I# n) = (42 :: Int) in n)
```

## Run

```bash
cd hello-worlds/haskell/0424-unboxed-strict
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with MagicHash |
| paradigm | functional | Unboxed primitive types |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | contemporary | MagicHash (GHC extension) |
| tags | [] | No special technique |
