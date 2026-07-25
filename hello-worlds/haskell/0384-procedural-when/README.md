---
id: 0384
language: haskell
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses Control.Monad.when as a conditional guard — if-then without the else."
author: ChidcGithub
date: 2026-07-25
---

# #0384 · Haskell Procedural-When

## Description

`when` from `Control.Monad` acts as a conditional guard: execute the action only if the condition holds. Here `True` ensures execution, but the pattern — guard, then action — mirrors imperative `if` statements without an `else` branch. Control flow in monadic style.

## Source Code

`Main.hs`:

```haskell
import Control.Monad (when)

main :: IO ()
main = do
    when True $ putStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0384-procedural-when
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `procedural` | Guarded action via `when` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
