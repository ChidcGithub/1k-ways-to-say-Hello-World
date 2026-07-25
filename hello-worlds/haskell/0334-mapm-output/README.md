---
id: 0334
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Prints character by character using mapM_ and putChar over a String (which is [Char])."
author: ChidcGithub
date: 2026-07-25
---

# #0334 · Haskell MapM-Output

## Description

Since `String` is `[Char]`, `mapM_ putChar` traverses the list, sending each character to stdout one at a time. The output is identical to `putStr`, but the underlying mechanism exposes the traversable nature of strings and how monadic mapping bridges pure data with effectful I/O.

## Source Code

`Main.hs`:

```haskell
main = mapM_ putChar "Hello, World!\n"
```

## Run

```bash
cd hello-worlds/haskell/0334-mapm-output
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Traversable + Monad via `mapM_` |
| output | `stdout` | `putChar` per character |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
