---
id: 0339
language: haskell
paradigm: functional
output: file
platform: cli
era: modern
tags: []
notes: "Uses withFile (bracket pattern) for safe handle management."
author: ChidcGithub
date: 2026-07-25
---

# #0339 · Haskell WithFile-Bracket

## Description

`withFile` encapsulates the bracket pattern: open a handle, run the action, and guarantee closure — even if an exception occurs. A lambda receives the `Handle` and writes the greeting. Safe resource management through higher-order functions.

## Source Code

`Main.hs`:

```haskell
import System.IO (withFile, IOMode(WriteMode), hPutStrLn)
main = withFile "hello.txt" WriteMode (\h -> hPutStrLn h "Hello, World!")
```

## Run

```bash
cd hello-worlds/haskell/0339-withfile-bracket
runhaskell Main.hs && cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Higher-order bracket pattern |
| output | `file` | Writes to `hello.txt` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
