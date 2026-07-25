---
id: 0331
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses putStr with explicit newline escape instead of putStrLn."
author: ChidcGithub
date: 2026-07-25
---

# #0331 · Haskell PutStr Variant

## Description

`putStr` prints a string literally — no automatic newline. By embedding `\n` the output matches `putStrLn "Hello, World!"` exactly. A subtle reminder that `putStrLn s = putStr (s ++ "\n")`.

## Source Code

`Main.hs`:

```haskell
main = putStr "Hello, World!\n"
```

## Run

```bash
cd hello-worlds/haskell/0331-putstr-variant
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure function application |
| output | `stdout` | Standard output via `putStr` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
