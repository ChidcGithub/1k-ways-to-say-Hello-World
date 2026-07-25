---
id: 0328
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Haskell do-block gives a procedural flavour to IO composition."
author: ChidcGithub
date: 2026-07-25
---

# #0328 · Haskell Do-Procedural

## Description

Using `do` notation to sequence IO actions in a procedural style. While Haskell remains pure, the `do` block resembles imperative statements — a syntactic bridge between functional purity and real-world effects.

## Source Code

`Main.hs`:

```haskell
main :: IO ()
main = do
    putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0328-do-procedural
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | `do` notation sequences actions imperatively |
| output | `stdout` | `putStrLn` writes to standard output |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
