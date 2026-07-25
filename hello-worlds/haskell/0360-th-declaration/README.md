---
id: 0360
language: haskell
paradigm: meta
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses Template Haskell to generate a top-level declaration (variable binding) at compile time."
author: ChidcGithub
date: 2026-07-25
---

# #0360 · Haskell TH-Declaration

## Description

Template Haskell can generate not just expressions but whole declarations. `generateGreeting` produces a top-level `greeting :: String` binding compiled into the module. `main` then references this compile-time-generated value — metaprogramming as declaration generation.

## Source Code

`Main.hs`:

```haskell
{-# LANGUAGE TemplateHaskell #-}
import Language.Haskell.TH

generateGreeting :: Q [Dec]
generateGreeting = do
    let greetingName = mkName "greeting"
    let body = NormalB (LitE (StringL "Hello, World!"))
    return [SigD greetingName (ConT ''String), ValD (VarP greetingName) body []]

generateGreeting

main :: IO ()
main = putStrLn greeting
```

## Run

```bash
cd hello-worlds/haskell/0360-th-declaration
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | GHC with Template Haskell |
| paradigm | `meta` | Compile-time declaration generation |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `contemporary` | Template Haskell |
| tags | `[]` | No special technique |
