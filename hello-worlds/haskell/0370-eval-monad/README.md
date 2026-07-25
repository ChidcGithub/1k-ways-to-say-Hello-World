---
id: 0370
language: haskell
paradigm: concurrent
output: stdout
platform: cli
era: contemporary
tags: [parallel]
notes: "Uses the Eval monad with rpar/rseq strategies from Control.Parallel.Strategies."
author: ChidcGithub
date: 2026-07-25
---

# #0370 · Haskell Eval-Monad

## Description

The `Eval` monad from `Control.Parallel.Strategies` provides structured parallelism. `rpar` sparks a computation for parallel evaluation; `rseq` forces sequential evaluation. Two string fragments are sparked in parallel, forced, and combined — a pure, composable parallel computation without explicit forking.

## Source Code

`Main.hs`:

```haskell
import Control.Parallel.Strategies (rpar, rseq, runEval)

main :: IO ()
main = do
    let result = runEval $ do
            a <- rpar ("Hello, " :: String)
            b <- rpar ("World!" :: String)
            rseq a
            rseq b
            return (a ++ b)
    putStrLn result
```

## Run

```bash
cd hello-worlds/haskell/0370-eval-monad
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `concurrent` | Eval monad with strategies |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | Control.Parallel.Strategies |
| tags | `[parallel]` | `rpar` sparks parallel work |
