---
id: 0357
language: haskell
paradigm: meta
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses Template Haskell to splice a string literal at compile time."
author: ChidcGithub
date: 2026-07-25
---

# #0357 · Haskell TH-Splice

## Description

Template Haskell generates code at compile time. `$(...)` is a splice — an expression built at compile time and inserted into the AST. Here a `stringL` expression is constructed and spliced, so the greeting is a product of meta-programming rather than a handwritten literal.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE TemplateHaskell #-}
import Language.Haskell.TH (litE, stringL)
import Language.Haskell.TH.Syntax (runIO)

main :: IO ()
main = putStrLn $(litE (stringL "Hello, World!"))
```

## Run

```bash
cd hello-worlds/haskell/0357-th-splice
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with Template Haskell |
| paradigm | `meta` | Compile-time code generation via TH splice |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | Template Haskell (GHC 6.x+) |
| tags | `[]` | No special technique |
