---
id: 0336
language: haskell
paradigm: functional
output: stderr
platform: cli
era: modern
tags: []
notes: "Redirects output to stderr using hPutStrLn."
author: ChidcGithub
date: 2026-07-25
---

# #0336 · Haskell Stderr-Output

## Description

Instead of stdout, the greeting flows to stderr via `hPutStrLn`. This trivial shift illustrates Haskell's handle-based I/O: any `Handle` can receive output, and the same pure `IO ()` type abstracts over both streams seamlessly.

## Source Code

`Main.hs`:

```haskell
import System.IO (hPutStrLn, stderr)
main = hPutStrLn stderr "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0336-stderr-output
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure `IO ()` action |
| output | `stderr` | `hPutStrLn stderr` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
