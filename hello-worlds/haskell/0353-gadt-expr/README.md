---
id: 0353
language: haskell
paradigm: generic
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses GADTs (Generalised Algebraic Data Types) to encode a typed greeting expression."
author: ChidcGithub
date: 2026-07-25
---

# #0353 · Haskell GADT-Expr

## Description

Generalised Algebraic Data Types (GADTs) allow constructors to specify their return type precisely. Here `HelloWorld` is constrained to `Greeting String`, making the type system guarantee that `render` receives the correct variant. A contemporary GHC extension that brings GHC closer to dependently-typed languages.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE GADTs #-}
data Greeting a where
    HelloWorld :: Greeting String

render :: Greeting String -> String
render HelloWorld = "Hello, World!"

main :: IO ()
main = putStrLn $ render HelloWorld
```

## Run

```bash
cd hello-worlds/haskell/0353-gadt-expr
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell with GHC extension |
| paradigm | `generic` | Type-indexed GADT |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | GADTs (GHC 6.4+, contemporary usage) |
| tags | `[]` | No special technique |
