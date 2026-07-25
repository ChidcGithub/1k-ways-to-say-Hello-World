---
id: 0372
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner, code-golf]
notes: "Code-golfed one-liner using ($) to eliminate parens and whitespace."
author: ChidcGithub
date: 2026-07-25
---

# #0372 · Haskell OneLiner-Dollar

## Description

The `($)` operator — low-precedence function application — lets us drop parentheses even in golfed form. `putStrLn$"Hello, World!"` applies `putStrLn` to the string without requiring space or parens after the function name.

## Source Code

`Main.hs`:

```haskell
main=putStrLn$"Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0372-oneliner-dollar
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Minimal function application via `($)` |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[one-liner, code-golf]` | Single line, minimal chars |
