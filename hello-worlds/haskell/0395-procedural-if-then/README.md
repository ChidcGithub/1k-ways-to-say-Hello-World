---
id: 0395
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Traditional if-then-else branching inside a do-block — the most direct imperative control flow in Haskell."
author: ChidcGithub
date: 2026-07-25
---

# #0395 · Haskell Procedural-If-Then

## Description

Haskell's `if-then-else` is an expression (not a statement), but within a `do` block it reads like imperative control flow. Because `if` must always have an `else`, the `False` branch returns `()` — a no-op that satisfies the type system while keeping the conditional focused on the `True` path.

## Source Code

`Main.hs`:

```haskell
main :: IO ()
main = do
    let joyful = True
    if joyful
        then putStrLn "Hello, World!"
        else return ()
```

## Run

```bash
cd hello-worlds/haskell/0395-procedural-if-then
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | If-then-else conditional |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
