---
id: 0391
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Pattern matching with case expressions to select a greeting based on a data constructor."
author: ChidcGithub
date: 2026-07-25
---

# #0391 · Haskell Procedural-Case

## Description

A `case` expression dispatches on the `Language` variant to select the correct greeting. The pattern-matching structure mirrors a switch/select statement in imperative languages, but is exhaustive — the compiler verifies that every constructor is handled. Dispatch driven by data constructors.

## Source Code

`Main.hs`:

```haskell
data Language = English | Spanish | French

greet :: Language -> String
greet lang = case lang of
    English -> "Hello, World!"
    Spanish -> "Hola, Mundo!"
    French  -> "Bonjour, le Monde!"

main :: IO ()
main = putStrLn $ greet English
```

## Run

```bash
cd hello-worlds/haskell/0391-procedural-case
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | Case expression dispatch |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
