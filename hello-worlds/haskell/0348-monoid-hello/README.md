---
id: 0348
language: haskell
paradigm: generic
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses the Semigroup (<>) operator on String, which is a Monoid."
author: ChidcGithub
date: 2026-07-25
---

# #0348 · Haskell Monoid-Hello

## Description

The `(<>)` operator from `Semigroup` concatenates two strings — because `String` is a `Monoid` (and thus a `Semigroup`). This entry uses algebraic structure to assemble the greeting, highlighting how type-class laws compose with ordinary string data.

## Source Code

`Main.hs`:

```haskell
main = putStrLn $ "Hello, " <> "World!"
```

## Run

```bash
cd hello-worlds/haskell/0348-monoid-hello
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `generic` | Semigroup/Monoid algebra via `(<>)` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
