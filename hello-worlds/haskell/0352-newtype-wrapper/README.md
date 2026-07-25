---
id: 0352
language: haskell
paradigm: generic
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Wraps the string in a newtype with a record accessor for zero-cost abstraction."
author: ChidcGithub
date: 2026-07-25
---

# #0352 · Haskell Newtype-Wrapper

## Description

A `newtype` wraps the greeting string, providing a zero-cost type distinction with a record accessor `getGreeting`. The greeting is constructed, unwrapped, and printed in one line — compile-time type safety with no runtime overhead.

## Source Code

`Main.hs`:

```haskell
newtype Greeting = Greeting { getGreeting :: String }
main = putStrLn $ getGreeting $ Greeting "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0352-newtype-wrapper
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `generic` | `newtype` zero-cost wrapper with record accessor |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[one-liner]` | Single expression |
