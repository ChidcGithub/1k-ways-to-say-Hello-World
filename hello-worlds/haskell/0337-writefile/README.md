---
id: 0337
language: haskell
paradigm: functional
output: file
platform: cli
era: modern
tags: [one-liner]
notes: "Writes Hello, World! to a file using writeFile."
author: ChidcGithub
date: 2026-07-25
---

# #0337 · Haskell WriteFile

## Description

`writeFile` opens a file, writes the string, and closes the handle — all in one pure `IO ()` action. The greeting lands on disk rather than a terminal, showcasing that Haskell I/O is medium-agnostic.

## Source Code

`Main.hs`:

```haskell
main = writeFile "hello.txt" "Hello, World!\n"
```

## Run

```bash
cd hello-worlds/haskell/0337-writefile
runhaskell Main.hs && cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure action description |
| output | `file` | Writes to `hello.txt` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[one-liner]` | Single expression |
