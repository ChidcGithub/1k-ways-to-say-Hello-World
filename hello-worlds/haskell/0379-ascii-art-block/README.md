---
id: 0379
language: haskell
paradigm: functional
output: ascii-art
platform: cli
era: modern
tags: [ascii-art]
notes: "Composes two 5-line ASCII art blocks (HELLO and WORLD) side by side using zipWith."
author: ChidcGithub
date: 2026-07-25
---

# #0379 · Haskell Ascii-Art-Block

## Description

The greeting is split into two separate 5-line ASCII art blocks — "HELLO" and "WORLD" — each stored as a list of strings. `zipWith (++)` interleaves them row by row with spacing, producing a side-by-side banner. Data-oriented composition meets visual output.

## Source Code

`Main.hs`:

```haskell
hello :: [String]
hello = [
    " ##   ##  ######  ##       ##        #######  ",
    " ##   ##  ##      ##       ##       ##     ## ",
    " #######  #####   ##       ##       ##     ## ",
    " ##   ##  ##      ##       ##       ##     ## ",
    " ##   ##  ######  ######   ######    #######  "
    ]

world :: [String]
world = [
    " ##   ##   #######  ######   ##       #####   ",
    " ##   ##  ##     ## ##   ##  ##       ##  ##  ",
    " ## # ##  ##     ## ######   ##       ##   ## ",
    " ### ###  ##     ## ##  ##   ##       ##   ## ",
    " ##   ##   #######  ##   ##  ######   #####   "
    ]

main :: IO ()
main = mapM_ putStrLn $ zipWith (++) hello (replicate 5 "   ") `zipWith` (++) world
```

## Run

```bash
cd hello-worlds/haskell/0379-ascii-art-block
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Composition via `zipWith` |
| output | `ascii-art` | Block letter composition |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[ascii-art]` | ASCII art |
