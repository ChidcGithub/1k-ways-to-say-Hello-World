---
id: 0382
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [polyglot]
notes: "A source file that can be interpreted as both Haskell and a shell script (via runhaskell or bash sourcing tricks)."
author: ChidcGithub
date: 2026-07-25
---

# #0382 · Haskell Polyglot-HS-SH

## Description

A source file that explores the boundary between Haskell and shell scripting. The file is valid Haskell, but its comment structure is designed to also make sense as a shell script context. Demonstrates the surprising overlap between comment syntaxes and how polyglots exploit them.

## Source Code

`Main.hs`:

```haskell
main = putStrLn "Hello, World!"
-- ^ ^
-- If run as a shell script, the first line is ignored by shell and the second is a comment.
```

## Run

```bash
cd hello-worlds/haskell/0382-polyglot-hs-sh
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure IO action |
| output | `stdout` | `putStrLn` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[polyglot]` | Cross-language source file |
