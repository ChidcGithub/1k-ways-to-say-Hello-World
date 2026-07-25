---
id: 0344
language: haskell
paradigm: functional
output: file
platform: cli
era: modern
tags: []
notes: "Reads from one file and writes to another using monadic bind."
author: ChidcGithub
date: 2026-07-25
---

# #0344 · Haskell ReadFile-WriteFile

## Description

A file-to-file copy reduced to its essence: `readFile` produces the content lazily, `writeFile` consumes it eagerly, and `>>=` threads the data through. If the source file contains "Hello, World!\n", the destination mirrors it — pure composition of effectful file I/O.

## Source Code

`Main.hs`:

```haskell
main = readFile "hello.txt" >>= writeFile "hello2.txt"
```

## Run

```bash
cd hello-worlds/haskell/0344-readfile-writefile
echo "Hello, World!" > hello.txt && runhaskell Main.hs && cat hello2.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Monadic bind chains read and write |
| output | `file` | Copies via `writeFile` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
