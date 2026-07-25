---
id: 0419
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses a left fold (foldl) to build a chain of putChar IO actions."
author: ChidcGithub
date: 2026-07-25
---

# #0419 Haskell Foldl-IO

## Description

A left fold over the greeting string builds an IO () action by accumulating: each step prepends a putChar before the accumulated rest. Contrast with foldr direction.

## Source Code

Main.hs:

```haskell
main :: IO ()
main = foldl (\act c -> act >> putChar c) (return ()) "Hello, World!\n"
```

## Run

```bash
cd hello-worlds/haskell/0419-foldl-io
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 2010 |
| paradigm | functional | Left fold over IO actions |
| output | stdout | putChar per character |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [] | No special technique |
