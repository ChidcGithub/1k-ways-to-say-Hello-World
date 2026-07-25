---
id: 0425
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [hand-assembled]
notes: "Conceptually hand-assembled: the program is so minimal it mirrors the GHC Core IR structure directly."
author: ChidcGithub
date: 2026-07-25
---

# #0425 Haskell Hand-Assembled-Core

## Description

The simplest possible Haskell program maps directly to GHC's Core intermediate representation without desugaring. main = putStrLn "Hello, World!" is essentially hand-assembled at the Core level - no do desugaring, no pattern matching, just a top-level IO action binding a saturated function application.

## Source Code

Main.hs:

```haskell
main :: IO ()
main = putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0425-hand-assembled-core
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 2010 |
| paradigm | functional | Minimal Core-mirroring expression |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [hand-assembled] | Minimal Core IR correspondence |
