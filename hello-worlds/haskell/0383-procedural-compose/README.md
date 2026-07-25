---
id: 0383
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Procedural-style do-block with let bindings simulating local variable assignments."
author: ChidcGithub
date: 2026-07-25
---

# #0383 · Haskell Procedural-Compose

## Description

A procedural-style `do` block that uses `let` bindings to simulate local variable assignments. Two string fragments are bound, concatenated, and printed — the familiar imperative pattern of "declare, compute, output", expressed within Haskell's monadic syntax.

## Source Code

`Main.hs`:

```haskell
main :: IO ()
main = do
    let hello = "Hello, "
        world = "World!"
    let greeting = hello ++ world
    putStrLn greeting
```

## Run

```bash
cd hello-worlds/haskell/0383-procedural-compose
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | Do-block with let bindings |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
