---
id: 0005
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Haskell 2010; main is a pure IO action."
author: ChidcGithub
date: 2026-07-20
---

# #0005 · Haskell Functional

## Description

A pure functional Hello World using Haskell's `main = putStrLn`. Haskell treats `main` as a value of type `IO ()` — a pure description of an effectful computation that the runtime executes. This entry differs from imperative Hello Worlds by expressing output as an applicative action rather than a statement, showcasing Haskell's hallmark separation between pure values and effects.

## Source Code

`Main.hs`:

```haskell
main :: IO ()
main = putStrLn "Hello, World!"
```

## Run

Using `runhaskell` (interpreted, no compilation artifacts):

```bash
cd hello-worlds/0005-haskell-functional
runhaskell Main.hs
```

Or compiling with `ghc`:

```bash
cd hello-worlds/0005-haskell-functional
ghc Main.hs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | `main` is a pure `IO ()` action; output via function application |
| output | `stdout` | `putStrLn` writes to standard output |
| platform | `cli` | Runs in a terminal |
| era | `modern` | Haskell 2010 standard (modern era) |
| tags | `[]` | No special trick — canonical form |

## Reference

- [Haskell 2010 Language Report](https://www.haskell.org/definition/haskell2010.pdf)
- [putStrLn — Haskell Prelude](https://hackage.haskell.org/package/base/docs/Prelude.html#v:putStrLn)
