---
id: 0398
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: [one-liner]
notes: "Uses LambdaCase to define an anonymous function with case-based dispatch in a single expression."
author: ChidcGithub
date: 2026-07-25
---

# #0398 · Haskell LambdaCase

## Description

`LambdaCase` allows `\case` as a shorthand for `\x -> case x of ...`. The lambda matches `True` to print the greeting and `False` to do nothing — a single-expression anonymous function with multi-branch dispatch. Applied to `True`, it triggers the greeting.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE LambdaCase #-}
main = (\case True -> putStrLn "Hello, World!"; False -> return ()) True
```

## Run

```bash
cd hello-worlds/haskell/0398-lambda-case
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with LambdaCase |
| paradigm | `functional` | Lambda with case dispatch |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | LambdaCase (GHC 7.6+) |
| tags | `[one-liner]` | Single expression |
