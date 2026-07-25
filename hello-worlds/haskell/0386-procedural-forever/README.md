---
id: 0386
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Spawns a thread that prints forever, then kills it — an unbounded loop wrapped in a finite scope."
author: ChidcGithub
date: 2026-07-25
---

# #0386 · Haskell Procedural-Forever

## Description

`forever` repeats an action indefinitely — an infinite loop in monadic form. A forked thread prints the greeting endlessly, while the main thread terminates after a short delay, causing the whole program to exit. An infinite loop contained by process lifetime; the greeting prints at least once.

## Source Code

`Main.hs`:

```haskell
import Control.Monad (forever)
import Control.Concurrent (forkIO, threadDelay)

main :: IO ()
main = do
    _ <- forkIO $ forever $ putStrLn "Hello, World!"
    threadDelay 100000
```

## Run

```bash
cd hello-worlds/haskell/0386-procedural-forever
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | Infinite loop via `forever` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[obfuscated]` | Infinite loop tamed by thread lifetime |
