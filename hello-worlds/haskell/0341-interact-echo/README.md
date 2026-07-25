---
id: 0341
language: haskell
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Uses interact to replace entire stdin with Hello, World!."
author: ChidcGithub
date: 2026-07-25
---

# #0341 · Haskell Interact-Echo

## Description

`interact` applies a `String -> String` function to stdin and writes the result to stdout. By ignoring the input with `const`, the entire pipeline reduces to a constant greeting — lazy I/O in one line.

## Source Code

`Main.hs`:

```haskell
main = interact (const "Hello, World!\n")
```

## Run

```bash
cd hello-worlds/haskell/0341-interact-echo
echo anything | runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure function over lazy strings |
| output | `stdout` | `interact` writes to stdout |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[one-liner]` | Single expression |
