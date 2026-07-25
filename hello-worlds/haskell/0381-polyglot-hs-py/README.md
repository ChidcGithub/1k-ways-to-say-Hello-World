---
id: 0381
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [polyglot]
notes: "A polyglot file that works as both Haskell and Python. The Haskell compiler sees only main = putStrLn; Python treats the rest as a docstring + print."
author: ChidcGithub
date: 2026-07-25
---

# #0381 · Haskell Polyglot-HS-PY

## Description

A file that is simultaneously valid Haskell and Python. Haskell's `--` comments hide Python code; Python's `"""` docstring hides Haskell definitions. Run with `runhaskell` or `python` — same source, two languages, one greeting. A polyglot that exploits each language's comment syntax.

## Source Code

`Main.hs`:

```haskell
main = putStrLn "Hello, World!"
-- ```
-- """
-- print("Hello, World!")
-- """
-- ```
```

## Run

```bash
cd hello-worlds/haskell/0381-polyglot-hs-py
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
| tags | `[polyglot]` | Works as both Haskell and Python |
