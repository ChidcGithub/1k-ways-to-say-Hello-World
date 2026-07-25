---
id: 0350
language: haskell
paradigm: generic
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses Applicative liftA2 to combine two IO actions."
author: ChidcGithub
date: 2026-07-25
---

# #0350 · Haskell Applicative-LiftA2

## Description

`liftA2` lifts a pure binary function into an `Applicative` context — here, `IO`. The `(++)` function is applied to the results of two IO actions: `putStr "Hello, "` and `putStrLn "World!"`. The applicative style sequences effects while combining their (unit) results.

## Source Code

`Main.hs`:

```haskell
import Control.Applicative (liftA2)
main = liftA2 (++) (putStr "Hello, ") (putStrLn "World!")
```

## Run

```bash
cd hello-worlds/haskell/0350-applicative-lifta2
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `generic` | Applicative `liftA2` over `IO` |
| output | `stdout` | Standard output |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
