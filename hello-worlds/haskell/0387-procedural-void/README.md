---
id: 0387
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses void to discard the () result of putStrLn — explicitly ignoring return values."
author: ChidcGithub
date: 2026-07-25
---

# #0387 · Haskell Procedural-Void

## Description

`void` discards the result of a monadic action — here, the `()` from `putStrLn` is explicitly ignored. While the action still executes, `void` makes the "fire-and-forget" intent explicit. A small combinator that communicates programmer intention through types.

## Source Code

`Main.hs`:

```haskell
import Control.Monad (void)

main :: IO ()
main = do
    void $ putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0387-procedural-void
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | `void` to discard action result |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
