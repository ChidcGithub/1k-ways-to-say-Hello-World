---
id: 0374
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Point-free obfuscated greeting built from function composition chains."
author: ChidcGithub
date: 2026-07-25
---

# #0374 · Haskell Obfuscated-Pointfree

## Description

An obfuscated, point-free expression that assembles "Hello, World!" through layers of function composition. The string is built backwards — `"Hello"`, then `"World"`, then `", "`, then `"!"` — by composing `(++)` calls with `flip`. Reads like a puzzle; runs like a greeting.

## Source Code

`Main.hs`:

```haskell
main = (putStrLn .) . flip (++) $ ("!" ++) . (", " ++) . ("World" ++) . ("Hello" ++) $ ""
```

## Run

```bash
cd hello-worlds/haskell/0374-obfuscated-pointfree
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Point-free composition |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[obfuscated]` | Deliberately obfuscated point-free style |
