---
id: 0362
language: haskell
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: []
notes: "Spawns a lightweight thread with forkIO to print Hello, World!"
author: ChidcGithub
date: 2026-07-25
---

# #0362 · Haskell ForkIO-Basic

## Description

`forkIO` spawns a lightweight Haskell thread to execute `putStrLn "Hello, World!"` concurrently. A brief `threadDelay` keeps the main thread alive long enough for the spawned thread to finish. Haskell's green threads make concurrency cheap and idiomatic.

## Source Code

`Main.hs`:

```haskell
import Control.Concurrent (forkIO, threadDelay)

main :: IO ()
main = do
    _ <- forkIO $ putStrLn "Hello, World!"
    threadDelay 100000
```

## Run

```bash
cd hello-worlds/haskell/0362-forkio-basic
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `concurrent` | Thread creation with `forkIO` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 (Control.Concurrent in base) |
| tags | `[]` | No special technique |
