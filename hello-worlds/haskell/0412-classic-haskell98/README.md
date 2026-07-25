---
id: 0412
language: haskell
paradigm: functional
output: stdout
platform: cli
era: classic
tags: []
notes: "Pure Haskell 98 style with explicit module declaration."
author: ChidcGithub
date: 2026-07-25
---

# #0412 Haskell Classic-Haskell98

## Description

Haskell 98 - the first stable standard - requires explicit module Main where and a type signature for main. No extensions, just the bedrock syntax.

## Source Code

Main.hs:

```haskell
module Main where

main :: IO ()
main = putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0412-classic-haskell98
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 98 |
| paradigm | functional | Pure IO action |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | classic | Haskell 98 standard (1998) |
| tags | [] | No special technique |
