---
id: 0422
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses seq for strict evaluation before printing, demonstrating strictness annotation."
author: ChidcGithub
date: 2026-07-25
---

# #0422 Haskell Seq-Strict

## Description

seq forces evaluation of its first argument before returning the second. greeting seq () ensures the string is fully evaluated before the result binding is used. Demonstrates strictness control in a lazy language.

## Source Code

Main.hs:

```haskell
main :: IO ()
main = do
    let greeting = "Hello, World!"
        result = greeting `seq` ()
        _ = result
    putStrLn greeting
```

## Run

```bash
cd hello-worlds/haskell/0422-seq-strict
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 2010 |
| paradigm | functional | Strict evaluation via seq |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [] | No special technique |
