---
id: 0343
language: haskell
paradigm: functional
output: stderr
platform: cli
era: modern
tags: [one-liner]
notes: "One-liner using hPutStrLn to stderr handle."
author: ChidcGithub
date: 2026-07-25
---

# #0343 · Haskell HPutStr-Stderr

## Description

A compact one-liner that writes "Hello, World!" to stderr. Uses explicit handle-based I/O — `hPutStrLn stderr` — where the handle becomes part of the function application rather than a default.

## Source Code

`Main.hs`:

```haskell
import System.IO (hPutStrLn, stderr)
main = hPutStrLn stderr "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0343-hputstr-stderr
runhaskell Main.hs 2>&1
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure action description |
| output | `stderr` | `hPutStrLn stderr` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[one-liner]` | Single import + one-liner body |
