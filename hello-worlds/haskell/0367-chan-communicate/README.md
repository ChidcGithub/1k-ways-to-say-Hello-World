---
id: 0367
language: haskell
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses unbounded Chan for FIFO communication between threads."
author: ChidcGithub
date: 2026-07-25
---

# #0367 · Haskell Chan-Communicate

## Description

A `Chan` is an unbounded FIFO channel for inter-thread communication. The forked thread writes the greeting; the main thread reads it back. Unlike a single-slot `MVar`, a `Chan` can buffer multiple messages, providing more flexible pipeline patterns.

## Source Code

`Main.hs`:

```haskell
import Control.Concurrent (forkIO, newChan, writeChan, readChan)

main :: IO ()
main = do
    chan <- newChan
    _ <- forkIO $ writeChan chan "Hello, World!"
    msg <- readChan chan
    putStrLn msg
```

## Run

```bash
cd hello-worlds/haskell/0367-chan-communicate
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `concurrent` | Unbounded `Chan` pipeline |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
