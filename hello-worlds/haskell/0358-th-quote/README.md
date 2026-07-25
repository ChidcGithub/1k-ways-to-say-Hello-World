---
id: 0358
language: haskell
paradigm: meta
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses Template Haskell expression quotation brackets [||] to capture code as data."
author: ChidcGithub
date: 2026-07-25
---

# #0358 · Haskell TH-Quote

## Description

Expression quotation brackets `[| ... |]` capture Haskell code as an AST (`Q Exp`). `genGreeting` produces the expression `putStrLn "Hello, World!"`, and the splice `$(...)` inserts it into `main`. Code as first-class data.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE TemplateHaskell #-}
import Language.Haskell.TH

genGreeting :: Q Exp
genGreeting = [| putStrLn "Hello, World!" |]

main :: IO ()
main = $(genGreeting)
```

## Run

```bash
cd hello-worlds/haskell/0358-th-quote
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with Template Haskell |
| paradigm | `meta` | Expression quotation |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | Template Haskell |
| tags | `[]` | No special technique |
