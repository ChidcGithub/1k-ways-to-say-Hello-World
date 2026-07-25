---
id: 0335
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses replicateM_ to run putStrLn exactly once."
author: ChidcGithub
date: 2026-07-25
---

# #0335 · Haskell Replicate-Output

## Description

`replicateM_ n action` repeats `action` `n` times and discards results. Here `n = 1`, so the greeting prints once — a deliberately redundant use of the combinator that highlights how Haskell's control-flow primitives compose uniformly with IO.

## Source Code

`Main.hs`:

```haskell
main = replicateM_ 1 (putStrLn "Hello, World!")
```

## Run

```bash
cd hello-worlds/haskell/0335-replicate-output
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Combinator `replicateM_` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
