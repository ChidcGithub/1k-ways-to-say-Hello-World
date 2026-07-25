---
id: 0351
language: haskell
paradigm: generic
output: stdout
platform: cli
era: modern
tags: []
notes: "Explicitly demonstrates the Monad interface: return to inject a value, then (>>=) to chain with putStrLn."
author: ChidcGithub
date: 2026-07-25
---

# #0351 · Haskell Monad-Return-Bind

## Description

The `Monad` class in explicit action: `return` wraps a pure value in `IO`, and `(>>=)` feeds it to a continuation. The string `"Hello, World!"` is injected into the `IO` monad and bound to `putStrLn` — the canonical demonstration of monadic composition.

## Source Code

`Main.hs`:

```haskell
main = return "Hello, World!" >>= putStrLn
```

## Run

```bash
cd hello-worlds/haskell/0351-monad-return-bind
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `generic` | Monad `return` and `(>>=)` explicitly |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
