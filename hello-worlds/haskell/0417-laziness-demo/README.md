---
id: 0417
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Demonstrates lazy evaluation with an infinite list of greetings."
author: ChidcGithub
date: 2026-07-25
---

# #0417 Haskell Laziness-Demo

## Description

Haskell's laziness: infiniteGreetings is an infinite self-referential list. head extracts only the first element; the rest is never evaluated. An infinite data structure in finite time.

## Source Code

Main.hs:

```haskell
main :: IO ()
main = putStrLn (head infiniteGreetings)
  where
    infiniteGreetings = "Hello, World!" : infiniteGreetings
```

## Run

```bash
cd hello-worlds/haskell/0417-laziness-demo
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 2010 |
| paradigm | functional | Lazy infinite data structure |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [] | No special technique |
