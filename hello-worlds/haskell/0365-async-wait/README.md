---
id: 0365
language: haskell
paradigm: concurrent
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Simulates async/wait pattern with MVar to synchronize with a forked thread."
author: ChidcGithub
date: 2026-07-25
---

# #0365 · Haskell Async-Wait

## Description

An `async`/`await` pattern built from primitives: `forkIO` spawns work, and an `MVar` signals completion. The child thread prints the greeting then puts `()` into the MVar; the parent blocks on `takeMVar` until the child finishes. A hand-rolled concurrency primitive.

## Source Code

`Main.hs`:

```haskell
import Control.Concurrent (forkIO, newEmptyMVar, putMVar, takeMVar)

main :: IO ()
main = do
    mvar <- newEmptyMVar
    _ <- forkIO $ putStrLn "Hello, World!" >> putMVar mvar ()
    takeMVar mvar
```

## Run

```bash
cd hello-worlds/haskell/0365-async-wait
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `concurrent` | MVar-based synchronization |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | Modern concurrency idiom |
| tags | `[]` | No special technique |
