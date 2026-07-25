---
id: 0406
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Defines a pattern synonym Greeting that is both a pattern and an expression."
author: ChidcGithub
date: 2026-07-25
---

# #0406 Haskell PatternSynonyms

## Description

PatternSynonyms defines bidirectional aliases for patterns. pattern Greeting = "Hello, World!" creates Greeting as both a pattern (matching that string) and an expression (producing it).

## Source Code

Main.hs:

```haskell
{-# LANGUAGE PatternSynonyms #-}

pattern Greeting :: String
pattern Greeting = "Hello, World!"

main :: IO ()
main = putStrLn Greeting
```

## Run

```bash
cd hello-worlds/haskell/0406-pattern-synonyms
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with PatternSynonyms |
| paradigm | functional | Pattern synonym as expression |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | contemporary | PatternSynonyms (GHC 7.8+) |
| tags | [] | No special technique |
