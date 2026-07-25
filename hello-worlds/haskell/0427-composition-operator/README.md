---
id: 0427
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Builds the greeting via left-to-right function composition with (.), applied to empty string."
author: ChidcGithub
date: 2026-07-25
---

# #0427 Haskell Composition-Operator

## Description

Function composition (.) chains functions right to left. The greeting string is built by composing string appends: "Hello" ++, then ", " ++, then "World" ++, then "!" ++, finally fed through putStrLn. Applied to "" - the empty string seed. A one-liner pipeline.

## Source Code

Main.hs:

```haskell
main = (putStrLn . ("!" ++) . ("World" ++) . (", " ++) . ("Hello" ++)) ""
```

## Run

```bash
cd hello-worlds/haskell/0427-composition-operator
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 2010 |
| paradigm | functional | Function composition pipeline |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [one-liner] | Single expression |
