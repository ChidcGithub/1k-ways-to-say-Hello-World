---
id: 0364
language: haskell
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses Software Transactional Memory (STM) with TVar for composable atomic operations."
author: ChidcGithub
date: 2026-07-25
---

# #0364 · Haskell STM-Atomically

## Description

Software Transactional Memory (`STM`) provides composable, lock-free atomic operations. A `TVar` holds the greeting; `writeTVar` and `readTVar` operate inside `atomically` blocks, guaranteeing that concurrent access is consistent without explicit locking.

## Source Code

`Main.hs`:

```haskell
import Control.Concurrent.STM (atomically, newTVar, readTVar, writeTVar)

main :: IO ()
main = do
    tv <- atomically $ newTVar ""
    atomically $ writeTVar tv "Hello, World!"
    msg <- atomically $ readTVar tv
    putStrLn msg
```

## Run

```bash
cd hello-worlds/haskell/0364-stm-atomically
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `concurrent` | STM with `atomically` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 (STM in base) |
| tags | `[]` | No special technique |
