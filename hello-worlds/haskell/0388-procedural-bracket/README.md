---
id: 0388
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses bracket (acquire/use/release pattern) with a trivial acquire and release."
author: ChidcGithub
date: 2026-07-25
---

# #0388 · Haskell Procedural-Bracket

## Description

`bracket` encapsulates the acquire-use-release pattern for safe resource management. Here the "resource" is the greeting string (trivially acquired via `return`), "used" by `putStrLn`, and "released" as a no-op. A heavy-weight safety combinator applied to a trivial task — demonstrating the pattern's shape.

## Source Code

`Main.hs`:

```haskell
import Control.Exception (bracket)

main :: IO ()
main = bracket
    (return "Hello, World!")
    (\_ -> return ())
    putStrLn
```

## Run

```bash
cd hello-worlds/haskell/0388-procedural-bracket
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | Bracket pattern for structured IO |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
