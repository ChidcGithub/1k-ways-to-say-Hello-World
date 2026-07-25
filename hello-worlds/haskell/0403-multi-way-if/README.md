---
id: 0403
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses MultiWayIf for guard-like branching in expression context."
author: ChidcGithub
date: 2026-07-25
---

# #0403 Haskell Multi-Way-If

## Description

MultiWayIf extends if to multiple branches with guard-like syntax. Each | introduces a condition-action pair with otherwise as catch-all.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE MultiWayIf #-}

main :: IO ()
main = do
    let lang = "en"
    if | lang == "en" -> putStrLn "Hello, World!"
       | lang == "es" -> putStrLn "Hola, Mundo!"
       | otherwise    -> putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0403-multi-way-if
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with MultiWayIf |
| paradigm | procedural | Multi-way conditional |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | contemporary | MultiWayIf (GHC 7.6+) |
| tags | [] | No special technique |
