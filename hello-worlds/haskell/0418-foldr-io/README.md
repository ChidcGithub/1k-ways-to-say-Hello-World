---
id: 0418
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses a right fold (foldr) over the string to sequence putChar actions."
author: ChidcGithub
date: 2026-07-25
---

# #0418 Haskell Foldr-IO

## Description

A right fold over a string, where each character triggers putChar then continues. The fold builds a chain of IO () actions from right to left but executes left to right.

## Source Code

Main.hs:

```haskell
main :: IO ()
main = foldr (\c rest -> putChar c >> rest) (return ()) "Hello, World!\n"
```

## Run

```bash
cd hello-worlds/haskell/0418-foldr-io
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 2010 |
| paradigm | functional | Right fold over IO actions |
| output | stdout | putChar per character |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [] | No special technique |
