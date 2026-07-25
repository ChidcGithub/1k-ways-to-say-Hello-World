---
id: 0377
language: haskell
paradigm: functional
output: ascii-art
platform: cli
era: modern
tags: [ascii-art, one-liner]
notes: "Prints the classic 'Hello World' ASCII art banner using mapM_ putStrLn across a list of strings."
author: ChidcGithub
date: 2026-07-25
---

# #0377 · Haskell Ascii-Art-Large

## Description

The ASCII art "Hello World" banner rendered as a list of strings, one per line, printed with `mapM_ putStrLn`. The banner is decomposed line-by-line, separating "Hello" and "World" into two distinct blocks. List traversal meets visual output in a single expression.

## Source Code

`Main.hs`:

```haskell
main = mapM_ putStrLn [" _   _      _ _       ","| | | | ___| | | ___  ","| |_| |/ _ \\ | |/ _ \\ ","|  _  |  __/ | | (_) |","|_| |_|\\___|_|_|\\___/ ","                       ","__        __         _     _ ","\\ \\      / /__  _ __| | __| |"," \\ \\ /\\ / / _ \\| '__| |/ _` |","  \\ V  V / (_) | |  | | (_| |","   \\_/\\_/ \\___/|_|  |_|\\__,_|"]
```

## Run

```bash
cd hello-worlds/haskell/0377-ascii-art-large
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | List traversal with `mapM_` |
| output | `ascii-art` | Large ASCII banner |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[ascii-art, one-liner]` | ASCII art as a single expression |
