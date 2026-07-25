---
id: 0338
language: haskell
paradigm: functional
output: file
platform: cli
era: modern
tags: []
notes: "Appends Hello, World! to a file using appendFile."
author: ChidcGithub
date: 2026-07-25
---

# #0338 · Haskell AppendFile

## Description

`appendFile` opens a file in append mode and writes the string. Unlike `writeFile`, repeated runs accumulate greetings — each invocation adds a line rather than overwriting.

## Source Code

`Main.hs`:

```haskell
main = appendFile "hello.txt" "Hello, World!\n"
```

## Run

```bash
cd hello-worlds/haskell/0338-appendfile
runhaskell Main.hs && cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure action description |
| output | `file` | Appends to `hello.txt` |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[]` | No special technique |
