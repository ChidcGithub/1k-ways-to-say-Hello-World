---
id: 0359
language: haskell
paradigm: meta
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Manually constructs the AST for putStrLn \"Hello, World!\" using TH constructors."
author: ChidcGithub
date: 2026-07-25
---

# #0359 · Haskell TH-Expression

## Description

Rather than using quotation brackets, the AST is assembled by hand with TH data constructors: `AppE` applies `VarE 'putStrLn` to `LitE (StringL ...)`. Every node of the expression tree is explicitly built, giving raw access to GHC's internal representation.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE TemplateHaskell #-}
import Language.Haskell.TH

main :: IO ()
main = $(return (AppE (VarE 'putStrLn) (LitE (StringL "Hello, World!"))))
```

## Run

```bash
cd hello-worlds/haskell/0359-th-expression
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with Template Haskell |
| paradigm | `meta` | Manual AST construction |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | Template Haskell |
| tags | `[]` | No special technique |
