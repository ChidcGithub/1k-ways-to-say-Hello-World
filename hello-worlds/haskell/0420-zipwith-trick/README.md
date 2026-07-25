---
id: 0420
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Obfuscated string capitalization using lambda pattern matching on cons."
author: ChidcGithub
date: 2026-07-25
---

# #0420 Haskell Obfuscated-Capitalize

## Description

An obfuscated approach to capitalizing "hello, world!" into "Hello, world!": a lambda pattern-matches on (h:w) to separate first character from rest, applies toUpper, reassembles with (:). A puzzle-like greeting.

## Source Code

Main.hs:

```haskell
import Data.Char (toUpper)

main = putStrLn $ (\(h:w) -> toUpper h : w) "hello, world!"
```

## Run

```bash
cd hello-worlds/haskell/0420-zipwith-trick
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 2010 |
| paradigm | functional | Lambda pattern matching |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [obfuscated] | Obfuscated lambda deconstruction |
