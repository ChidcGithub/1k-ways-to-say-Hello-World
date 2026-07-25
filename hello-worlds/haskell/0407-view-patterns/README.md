---
id: 0407
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses ViewPatterns to match on a transformed view of the input via reverse."
author: ChidcGithub
date: 2026-07-25
---

# #0407 Haskell ViewPatterns

## Description

ViewPatterns apply a function before pattern matching. (reverse -> "!dlroW ,olleH") reverses the input then matches - abstracting data representation from pattern logic.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE ViewPatterns #-}

greet :: String -> String
greet (reverse -> "!dlroW ,olleH") = "Hello, World!"
greet _ = "Hello, World!"

main :: IO ()
main = putStrLn $ greet "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0407-view-patterns
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with ViewPatterns |
| paradigm | functional | View pattern matching |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | contemporary | ViewPatterns (GHC 6.10+) |
| tags | [] | No special technique |
