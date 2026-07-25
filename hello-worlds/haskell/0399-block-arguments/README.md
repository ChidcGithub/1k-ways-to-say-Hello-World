---
id: 0399
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses BlockArguments to pass a do-block as a function argument without parentheses or ($)."
author: ChidcGithub
date: 2026-07-25
---

# #0399 · Haskell Block-Arguments

## Description

`BlockArguments` allows `do` blocks and `\case` expressions as direct function arguments without `$` or parentheses. `when True do { putStrLn ... }` reads like a control-flow keyword — syntactic sugar that blurs the line between built-in syntax and user-defined combinators.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE BlockArguments #-}

main = when True do
    putStrLn "Hello, World!"
  where
    when True act = act
    when False _ = return ()
```

## Run

```bash
cd hello-worlds/haskell/0399-block-arguments
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with BlockArguments |
| paradigm | `functional` | Block argument passing |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | BlockArguments (GHC 8.0+) |
| tags | `[]` | No special technique |
