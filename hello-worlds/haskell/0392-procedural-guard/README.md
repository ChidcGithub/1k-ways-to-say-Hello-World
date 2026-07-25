---
id: 0392
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses guard clauses for conditional branching — if/else-if via Boolean predicates."
author: ChidcGithub
date: 2026-07-25
---

# #0392 · Haskell Procedural-Guard

## Description

Guard clauses provide conditional branching based on Boolean predicates. `loud` selects uppercase; `otherwise` (a synonym for `True`) is the catch-all. Guards read like a decision table — a declarative if/else chain that is evaluated top-to-bottom until one matches.

## Source Code

`Main.hs`:

```haskell
greet :: Bool -> String
greet loud
    | loud      = "HELLO, WORLD!"
    | otherwise = "Hello, World!"

main :: IO ()
main = putStrLn $ greet False
```

## Run

```bash
cd hello-worlds/haskell/0392-procedural-guard
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | Guard-based conditional |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
