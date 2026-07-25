---
id: 0396
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Recursively prints the greeting character by character using pattern matching and tail recursion."
author: ChidcGithub
date: 2026-07-25
---

# #0396 · Haskell Procedural-Recursion

## Description

A recursive function `go` pattern-matches on the string: the base case (`[]`) returns `()`; the inductive case prints the head character and recurses on the tail. Effectful recursion — printing a string without using `putStr`, one `putChar` at a time, like a procedural index-based loop.

## Source Code

`Main.hs`:

```haskell
main :: IO ()
main = go "Hello, World!"
  where
    go :: String -> IO ()
    go [] = return ()
    go (x:xs) = do
        putChar x
        go xs
```

## Run

```bash
cd hello-worlds/haskell/0396-procedural-recursion
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | Effectful recursive traversal |
| output | `stdout` | `putChar` per character |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
