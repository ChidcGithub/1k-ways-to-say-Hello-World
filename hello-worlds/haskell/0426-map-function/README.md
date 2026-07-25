---
id: 0426
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses map to apply an IO action to a list element — one greeting, one action."
author: ChidcGithub
date: 2026-07-25
---

# #0426 Haskell Map-Function

## Description

mapM_ putStrLn applies putStrLn to each element of a list. With a single-element list ["Hello, World!"], it prints exactly one greeting. The map idiom generalizes to any number of greetings - a one-element iteration that demonstrates the pattern.

## Source Code

Main.hs:

```haskell
main = mapM_ putStrLn ["Hello, World!"]
```

## Run

```bash
cd hello-worlds/haskell/0426-map-function
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 2010 |
| paradigm | functional | mapM_ traversal |
| output | stdout | putStrLn per element |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [] | No special technique |
