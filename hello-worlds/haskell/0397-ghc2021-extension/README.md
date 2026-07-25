---
id: 0397
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Explicitly enables GHC2021 language edition, the contemporary default extension set."
author: ChidcGithub
date: 2026-07-25
---

# #0397 · Haskell GHC2021-Extension

## Description

`GHC2021` is the contemporary language edition that bundles a curated set of stable extensions (like `NamedFieldPuns`, `BangPatterns`, `LambdaCase`, etc.) into a single flag. Enabling it signals that this code targets modern GHC with 2021-era defaults — a marker of contemporary Haskell identity.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE GHC2021 #-}

main :: IO ()
main = putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0397-ghc2021-extension
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with GHC2021 |
| paradigm | `functional` | Pure IO action |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | GHC2021 language edition |
| tags | `[]` | No special technique |
