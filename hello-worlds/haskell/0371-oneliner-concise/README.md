---
id: 0371
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [code-golf]
notes: "Minimal whitespace code-golf — 28 characters excluding newline."
author: ChidcGithub
date: 2026-07-25
---

# #0371 · Haskell Code-Golf-Min

## Description

Code golf: the greeting stripped to its absolute lexicographic minimum. All unnecessary whitespace is removed — `main=putStrLn"Hello, World!"` is the shortest valid Haskell program that prints "Hello, World!" with a newline. 28 characters of pure function application.

## Source Code

`Main.hs`:

```haskell
main=putStrLn"Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0371-oneliner-concise
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure function application |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[code-golf]` | Minimal character count (28 chars) |
