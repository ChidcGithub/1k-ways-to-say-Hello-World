---
id: 0349
language: haskell
paradigm: generic
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses the Maybe functor via the maybe eliminator to conditionally print."
author: ChidcGithub
date: 2026-07-25
---

# #0349 · Haskell Functor-Maybe

## Description

The `maybe` function is the universal eliminator for `Maybe a` — it supplies a default value for `Nothing` and applies a function to the value inside `Just`. Here `Just "Hello, World!"` triggers `putStrLn`, while `Nothing` would silently return `()`. Generic programming through algebraic data types.

## Source Code

`Main.hs`:

```haskell
main = maybe (return ()) putStrLn $ Just "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0349-functor-maybe
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `generic` | Maybe eliminator over polymorphic container |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
