---
id: 0400
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses OverloadedStrings to have String literals default to Text, printed via text package IO."
author: ChidcGithub
date: 2026-07-25
---

# #0400 · Haskell OverloadedStrings

## Description

`OverloadedStrings` lets string literals be interpreted as any `IsString` instance — here, `Text` from `Data.Text`. The literal `"Hello, World!"` becomes a `Text` value at compile time, printed with `T.putStrLn`. The same source syntax, a different runtime representation.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE OverloadedStrings #-}
import Data.String (IsString(..))
import qualified Data.Text.IO as T

main :: IO ()
main = T.putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0400-overloaded-strings
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with OverloadedStrings |
| paradigm | `functional` | Overloaded literals |
| output | `stdout` | Text.putStrLn |
| platform | `cli` | Terminal |
| era | `contemporary` | OverloadedStrings (GHC 6.8+) |
| tags | `[]` | No special technique |
