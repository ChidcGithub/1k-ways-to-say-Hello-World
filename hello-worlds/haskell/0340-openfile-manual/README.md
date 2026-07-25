---
id: 0340
language: haskell
paradigm: functional
output: file
platform: cli
era: modern
tags: []
notes: "Manual handle management with openFile, hPutStrLn, and hClose."
author: ChidcGithub
date: 2026-07-25
---

# #0340 · Haskell OpenFile-Manual

## Description

Explicit handle management: `openFile` acquires a `Handle`, `hPutStrLn` writes to it, and `hClose` releases the resource. The `do` block sequences these three IO actions, making resource lifecycle visible — contrast with `withFile`'s implicit bracket.

## Source Code

`Main.hs`:

```haskell
import System.IO (openFile, hPutStrLn, hClose, IOMode(WriteMode))
main = do
    h <- openFile "hello.txt" WriteMode
    hPutStrLn h "Hello, World!"
    hClose h
```

## Run

```bash
cd hello-worlds/haskell/0340-openfile-manual
runhaskell Main.hs && cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Do-block sequencing of IO actions |
| output | `file` | Writes to `hello.txt` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
