---
id: 0366
language: haskell
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses forkOS to create a bound OS thread instead of a lightweight green thread."
author: ChidcGithub
date: 2026-07-25
---

# #0366 · Haskell ForkOS-Thread

## Description

`forkOS` creates a *bound* thread — a Haskell green thread pinned to a dedicated OS thread. Unlike `forkIO`'s lightweight threads multiplexed onto a few OS threads, `forkOS` guarantees that the spawned computation runs on its own native thread.

## Source Code

`Main.hs`:

```haskell
import Control.Concurrent (forkOS, threadDelay)

main :: IO ()
main = do
    _ <- forkOS $ putStrLn "Hello, World!"
    threadDelay 100000
```

## Run

```bash
cd hello-worlds/haskell/0366-forkos-thread
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `concurrent` | Bound OS thread via `forkOS` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
