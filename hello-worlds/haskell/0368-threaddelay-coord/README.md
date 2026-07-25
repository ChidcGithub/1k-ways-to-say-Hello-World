---
id: 0368
language: haskell
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: []
notes: "Coordinates two threads with timing (threadDelay) — no shared data, purely temporal."
author: ChidcGithub
date: 2026-07-25
---

# #0368 · Haskell ThreadDelay-Coord

## Description

Coordination by timing alone: the child thread sleeps briefly before printing, while the parent sleeps longer to stay alive. No shared variables, no messages — just two concurrent timelines racing toward the same output stream. The simplest possible concurrent coordination.

## Source Code

`Main.hs`:

```haskell
import Control.Concurrent (forkIO, threadDelay)

main :: IO ()
main = do
    _ <- forkIO $ do
        threadDelay 50000
        putStrLn "Hello, World!"
    threadDelay 100000
```

## Run

```bash
cd hello-worlds/haskell/0368-threaddelay-coord
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `concurrent` | Time-based thread coordination |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
