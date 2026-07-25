---
id: 0361
language: haskell
paradigm: meta
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses typed Template Haskell splices ($$) with typed quotations [||...||]."
author: ChidcGithub
date: 2026-07-25
---

# #0361 · Haskell TH-Typed-Splice

## Description

Typed Template Haskell uses `$$(...)` for splices and `[|| ... ||]` for quotations — the typed variants guarantee that the generated expression type-checks. Here the typed quotation captures `putStrLn "Hello, World!"` and the splice inserts it, with static type safety across the meta-programming boundary.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE TemplateHaskell #-}
import Language.Haskell.TH

main :: IO ()
main = $$(return [|| putStrLn "Hello, World!" ||])
```

## Run

```bash
cd hello-worlds/haskell/0361-th-typed-splice
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with Template Haskell |
| paradigm | `meta` | Typed TH splice |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | Template Haskell typed splices |
| tags | `[]` | No special technique |
