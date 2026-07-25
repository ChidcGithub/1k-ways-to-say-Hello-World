---
id: 0409
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses ImportQualifiedPost to place qualified after module name."
author: ChidcGithub
date: 2026-07-25
---

# #0409 Haskell ImportQualifiedPost

## Description

ImportQualifiedPost allows import Data.List qualified as L rather than import qualified Data.List as L. The greeting is assembled with intercalate under the L alias.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE ImportQualifiedPost #-}
import Data.List qualified as L

main :: IO ()
main = putStrLn $ L.intercalate ", " ["Hello", "World!"]
```

## Run

```bash
cd hello-worlds/haskell/0409-import-qualified-post
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with ImportQualifiedPost |
| paradigm | functional | Qualified import (post-positive) |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | contemporary | ImportQualifiedPost (GHC 8.10+) |
| tags | [] | No special technique |
