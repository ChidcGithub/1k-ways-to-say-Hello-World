---
id: 0393
language: haskell
paradigm: declarative
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses a list comprehension — a declarative set-builder notation — to reconstruct the greeting character by character."
author: ChidcGithub
date: 2026-07-25
---

# #0393 · Haskell Declarative-ListComp

## Description

List comprehensions in Haskell are declarative: they describe *what* to produce, not *how*. `[c | c <- "Hello, World!"]` reads as "the list of all characters c drawn from the greeting string" — a set-builder notation that reconstructs the string character by character. The compiler figures out the iteration.

## Source Code

`Main.hs`:

```haskell
main :: IO ()
main = putStrLn $ concat [c | c <- "Hello, World!"]
```

## Run

```bash
cd hello-worlds/haskell/0393-declarative-listcomp
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `declarative` | List comprehension (set-builder style) |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
