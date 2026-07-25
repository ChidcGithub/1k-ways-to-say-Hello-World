---
id: 0416
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Reimplements putStrLn from putStr and newline."
author: ChidcGithub
date: 2026-07-25
---

# #0416 Haskell Custom-PutStrLn

## Description

myPutStrLn reimplements putStrLn from primitive combinators: putStr prints the string, >> sequences, and putStr "\n" adds the newline. Rebuilding the abstraction from the ground up.

## Source Code

Main.hs:

```haskell
myPutStrLn :: String -> IO ()
myPutStrLn s = putStr s >> putStr "\n"

main :: IO ()
main = myPutStrLn "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0416-custom-putstrln
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | Haskell 2010 |
| paradigm | functional | Custom combinator from primitives |
| output | stdout | myPutStrLn then putStr |
| platform | cli | Terminal |
| era | modern | Haskell 2010 |
| tags | [] | No special technique |
