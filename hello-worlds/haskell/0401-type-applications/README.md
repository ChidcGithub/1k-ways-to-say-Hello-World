---
id: 0401
language: haskell
paradigm: generic
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses TypeApplications to explicitly supply the String type argument to typeOf."
author: ChidcGithub
date: 2026-07-25
---

# #0401 · Haskell Type-Applications

## Description

`TypeApplications` enables `@Type` syntax for explicitly passing type arguments to polymorphic functions. `typeOf @String` explicitly selects the `Typeable` instance for `String`, and the result is embedded in the output — the greeting carries its own type annotation alongside the message.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE TypeApplications, ScopedTypeVariables #-}
import Data.Typeable (typeOf)

main :: IO ()
main = putStrLn $ "Hello, World! (type: " ++ show (typeOf @String "Hello, World!") ++ ")"
```

## Run

```bash
cd hello-worlds/haskell/0401-type-applications
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with TypeApplications |
| paradigm | `generic` | Visible type application |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | TypeApplications (GHC 8.0+) |
| tags | `[]` | No special technique |
