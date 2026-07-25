---
id: 0405
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses NumericUnderscores for readable numeric literals."
author: ChidcGithub
date: 2026-07-25
---

# #0405 Haskell NumericUnderscores

## Description

NumericUnderscores allows _ as digit separator in numeric literals. 1_000 equals 1000. The greeting appends a counter expressing the 1000-entry goal.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE NumericUnderscores #-}

main :: IO ()
main = putStrLn $ "Hello, World! #" ++ show (1_000)
```

## Run

```bash
cd hello-worlds/haskell/0405-numeric-underscores
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with NumericUnderscores |
| paradigm | functional | String concatenation |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | contemporary | NumericUnderscores (GHC 8.6+) |
| tags | [] | No special technique |
