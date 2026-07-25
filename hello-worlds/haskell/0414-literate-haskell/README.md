---
id: 0414
language: haskell
paradigm: functional
output: stdout
platform: cli
era: classic
tags: []
notes: "Written in literate Haskell style (Bird-style, > prefixed)."
author: ChidcGithub
date: 2026-07-25
---

# #0414 Haskell Literate-Haskell

## Description

Literate Haskell (Bird-style) inverts comment-code relationship: lines are prose by default, code lines prefixed with >. The program is the document.

## Source Code

Main.hs:

```haskell
This is a literate Haskell file.
Lines starting with '>' are code; everything else is prose.

> main :: IO ()
> main = putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0414-literate-haskell
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Literate Haskell (Bird-style) |
| paradigm | functional | Pure IO action |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | classic | Literate programming tradition |
| tags | [] | No special technique |
