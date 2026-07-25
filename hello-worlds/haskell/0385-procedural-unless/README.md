---
id: 0385
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses Control.Monad.unless — the inverse of when, executing only when the condition is False."
author: ChidcGithub
date: 2026-07-25
---

# #0385 · Haskell Procedural-Unless

## Description

`unless` is the complement of `when`: it executes the action only if the condition is `False`. With `False` as the guard, the greeting always prints. A control-flow combinator that reads like natural language: "unless false, say hello."

## Source Code

`Main.hs`:

```haskell
import Control.Monad (unless)

main :: IO ()
main = do
    unless False $ putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0385-procedural-unless
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | Guarded action via `unless` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
