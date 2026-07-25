---
id: 0329
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Monadic bind (>>=) chains a pure return with putStrLn in a single expression."
author: ChidcGithub
date: 2026-07-25
---

# #0329 · Haskell Bind-Seq

## Description

Monadic binding (`>>=`) sequences `return ()` into `putStrLn`. Rather than `do` notation, the raw combinator exposes how IO actions compose — a pure expression describing an effectful computation. One-liner.

## Source Code

`Main.hs`:

```haskell
main = return () >>= \_ -> putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0329-bind-seq
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Combinator-based composition (>>=) |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[one-liner]` | Single expression line |
