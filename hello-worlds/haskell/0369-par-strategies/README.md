---
id: 0369
language: haskell
paradigm: concurrent
output: stdout
platform: cli
era: contemporary
tags: [parallel]
notes: "Uses par and pseq for parallel evaluation of sub-expressions."
author: ChidcGithub
date: 2026-07-25
---

# #0369 · Haskell Par-Strategies

## Description

`par` sparks a parallel evaluation of its first argument, while `pseq` forces sequential evaluation of its first argument before returning the second. The string is split into two components, sparked in parallel, then combined — pure parallelism without threads, using GHC's runtime system to distribute work across cores.

## Source Code

`Main.hs`:

```haskell
import Control.Parallel (par, pseq)

main :: IO ()
main =
    let hello = "Hello, "
        world = "World!"
        combined = hello `par` (world `pseq` (hello ++ world))
    in putStrLn combined
```

## Run

```bash
cd hello-worlds/haskell/0369-par-strategies
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `concurrent` | Pure parallelism via `par`/`pseq` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | Parallel strategies (GHC 7.x+) |
| tags | `[parallel]` | `par` sparks parallel evaluation |
