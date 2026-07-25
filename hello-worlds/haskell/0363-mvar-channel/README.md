---
id: 0363
language: haskell
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: []
notes: "Communicates the greeting string between threads using an MVar channel."
author: ChidcGithub
date: 2026-07-25
---

# #0363 · Haskell MVar-Channel

## Description

An `MVar` acts as a single-slot mailbox between threads. The forked thread constructs the greeting and deposits it via `putMVar`; the main thread retrieves it with `takeMVar` and prints. Thread-safe message passing without locks — just an empty/full variable.

## Source Code

`Main.hs`:

```haskell
import Control.Concurrent (forkIO, newEmptyMVar, putMVar, takeMVar)

main :: IO ()
main = do
    mvar <- newEmptyMVar
    _ <- forkIO $ do
        let msg = "Hello, World!"
        putMVar mvar msg
    result <- takeMVar mvar
    putStrLn result
```

## Run

```bash
cd hello-worlds/haskell/0363-mvar-channel
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `concurrent` | Inter-thread MVar communication |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
