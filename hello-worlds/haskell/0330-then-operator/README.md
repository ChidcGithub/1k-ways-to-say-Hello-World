---
id: 0330
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses the >> (then) operator to sequence putStr and putStrLn, discarding the first result."
author: ChidcGithub
date: 2026-07-25
---

# #0330 · Haskell Then-Operator

## Description

The `>>` (then) operator sequences two IO actions, discarding the result of the first. `putStr` prints without a newline; `putStrLn` appends one. Together they produce the canonical greeting through explicit monadic glue.

## Source Code

`Main.hs`:

```haskell
main = putStr "Hello, " >> putStrLn "World!"
```

## Run

```bash
cd hello-worlds/haskell/0330-then-operator
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Monadic `(>>)` combinator |
| output | `stdout` | Standard output |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
