---
id: 0421
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Uses the Y combinator (fix) for self-reference, creating an infinite loop that prints once before the process dies."
author: ChidcGithub
date: 2026-07-25
---

# #0421 Haskell Fix-Point

## Description

fix is the Y combinator - the essence of recursion without naming. fix (\f -> putStrLn "Hello, World!" >> f) creates an infinite printing loop. The greeting prints at least once before the program is killed. A mind-bending functional pearl.

## Source Code

Main.hs:

```haskell
main = fix (\f -> putStrLn "Hello, World!" >> f)

fix :: (a -> a) -> a
fix f = let x = f x in x
```

## Run

```bash
cd hello-worlds/haskell/0421-fix-point
timeout 1 runhaskell Main.hs || true
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 2010 |
| paradigm | functional | Y combinator (fix) recursion |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [obfuscated] | Obfuscated via fix-point combinator |
