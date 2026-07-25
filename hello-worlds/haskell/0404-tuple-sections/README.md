---
id: 0404
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses TupleSections for partial tuple construction."
author: ChidcGithub
date: 2026-07-25
---

# #0404 Haskell TupleSections

## Description

TupleSections allows partially applied tuple constructors: (x,) is \y -> (x, y). Destructures a single-element section to extract the greeting.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE TupleSections #-}

main :: IO ()
main = do
    let (greeting,) = ("Hello, World!",)
    putStrLn greeting
```

## Run

```bash
cd hello-worlds/haskell/0404-tuple-sections
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with TupleSections |
| paradigm | functional | Tuple section deconstruction |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | contemporary | TupleSections (GHC 6.12+) |
| tags | [] | No special technique |
