---
id: 0342
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Explicitly writes to stdout handle using hPutStrLn."
author: ChidcGithub
date: 2026-07-25
---

# #0342 · Haskell HPutStr-Stdout

## Description

`hPutStrLn stdout "Hello, World!"` writes the greeting to the stdout handle explicitly. While `putStrLn` is sugar for this call, making the handle visible emphasizes Haskell's handle abstraction and the uniform treatment of all output destinations.

## Source Code

`Main.hs`:

```haskell
import System.IO (hPutStrLn, stdout)
main = hPutStrLn stdout "Hello, World!"
```

## Run

```bash
cd hello-worlds/haskell/0342-hputstr-stdout
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure `IO ()` via handle |
| output | `stdout` | Explicit `stdout` handle |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
