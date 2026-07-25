---
id: 0373
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [code-golf]
notes: "Code-golf using putStr with embedded newline — one byte shorter than putStrLn version."
author: ChidcGithub
date: 2026-07-25
---

# #0373 · Haskell Code-Golf-PutStr

## Description

`putStr "Hello, World!\n"` saves one byte over `putStrLn` by embedding the newline in the string literal. 27-char golf showing that sometimes the "simpler" function (`putStr` vs `putStrLn`) produces the shorter program.

## Source Code

`Main.hs`:

```haskell
main=putStr"Hello, World!\n"
```

## Run

```bash
cd hello-worlds/haskell/0373-code-golf-min
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure function application |
| output | `stdout` | `putStr` with embedded newline |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[code-golf]` | 27-character minimum |
