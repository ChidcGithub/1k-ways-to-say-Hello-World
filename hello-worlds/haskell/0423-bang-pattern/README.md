---
id: 0423
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses BangPatterns to force strict evaluation of a let binding."
author: ChidcGithub
date: 2026-07-25
---

# #0423 Haskell Bang-Pattern

## Description

BangPatterns allow ! before a pattern to force strict evaluation. let !greeting = "Hello, World!" ensures the string is evaluated immediately rather than lazily. Syntactic sugar over seq.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE BangPatterns #-}

main :: IO ()
main = do
    let !greeting = "Hello, World!"
    putStrLn greeting
```

## Run

```bash
cd hello-worlds/haskell/0423-bang-pattern
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with BangPatterns |
| paradigm | functional | Strict pattern binding |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | contemporary | BangPatterns (GHC 6.8+) |
| tags | [] | No special technique |
