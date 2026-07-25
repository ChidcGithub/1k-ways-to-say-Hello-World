---
id: 0415
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Disables the implicit Prelude import, importing only needed names explicitly."
author: ChidcGithub
date: 2026-07-25
---

# #0415 Haskell NoImplicitPrelude

## Description

NoImplicitPrelude removes the automatic import of Prelude. Every needed name must be imported explicitly - here just IO and putStrLn. Import hygiene: only what you need.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE NoImplicitPrelude #-}
import Prelude (IO, putStrLn)
import qualified Prelude

main :: IO ()
main = putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0415-no-implicit-prelude
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with NoImplicitPrelude |
| paradigm | functional | Explicit import |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [] | No special technique |
