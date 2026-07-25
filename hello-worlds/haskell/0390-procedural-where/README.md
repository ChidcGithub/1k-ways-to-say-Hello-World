---
id: 0390
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses a where clause to define local bindings for the do-block, separating computation from definition."
author: ChidcGithub
date: 2026-07-25
---

# #0390 · Haskell Procedural-Where

## Description

A `where` clause attached to the `do` block defines `greeting`, `hello`, and `world` as local bindings after the body of the computation. The procedural action body (`putStrLn greeting`) stays clean, while all supporting definitions are deferred — the classic "tell then explain" pattern.

## Source Code

`Main.hs`:

```haskell
main :: IO ()
main = do
    putStrLn greeting
  where
    greeting = hello ++ world
    hello = "Hello, "
    world = "World!"
```

## Run

```bash
cd hello-worlds/haskell/0390-procedural-where
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | Where clause with do-block |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
