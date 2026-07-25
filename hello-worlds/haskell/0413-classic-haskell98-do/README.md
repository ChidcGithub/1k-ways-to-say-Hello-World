---
id: 0413
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "Haskell 98 do-block with explicit module declaration."
author: ChidcGithub
date: 2026-07-25
---

# #0413 Haskell Classic-Haskell98-Do

## Description

Haskell 98 do notation with explicit module Main where. The do block was Haskell's original bridge to imperative thinking - sequencing IO actions in familiar syntax.

## Source Code

Main.hs:

```haskell
module Main where

main :: IO ()
main = do
    putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0413-classic-haskell98-do
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 98 |
| paradigm | procedural | Do-block in Haskell 98 |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | classic | Haskell 98 standard (1998) |
| tags | [] | No special technique |
