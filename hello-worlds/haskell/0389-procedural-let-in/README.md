---
id: 0389
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Nested let...in expressions inside a do-block for hierarchical variable scoping."
author: ChidcGithub
date: 2026-07-25
---

# #0389 · Haskell Procedural-Let-In

## Description

Nested `let...in` expressions within a `do` block create a hierarchy of bindings: the outer `let` binds `greeting`, whose definition itself contains an inner `let...in` that scopes `hello` and `world`. Scoped variable definitions in a procedural style, but with Haskell's pure, lexical semantics.

## Source Code

`Main.hs`:

```haskell
main :: IO ()
main = do
    let greeting = let hello = "Hello, "
                       world = "World!"
                   in hello ++ world
    putStrLn greeting
```

## Run

```bash
cd hello-worlds/haskell/0389-procedural-let-in
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | Nested let bindings in do-block |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
