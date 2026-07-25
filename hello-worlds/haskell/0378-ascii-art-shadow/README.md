---
id: 0378
language: haskell
paradigm: functional
output: ascii-art
platform: cli
era: modern
tags: [ascii-art]
notes: "Block-letter ASCII art of Hello World built from individual characters spelled with characters."
author: ChidcGithub
date: 2026-07-25
---

# #0378 · Haskell Ascii-Art-Shadow

## Description

A 5-line block-letter rendering of "HELLO WORLD!!" where each letter is a 5x5 character grid. `unlines` joins the rows, and `putStrLn` outputs the result. Pure data-to-pixel transformation without any external font library.

## Source Code

`Main.hs`:

```haskell
main = putStrLn $ unlines
    [ "H   H  EEEEE  L     L      OOO       W   W   OOO   RRRR   L     DDDD   !!"
    , "H   H  E      L     L     O   O      W   W  O   O  R   R  L     D   D  !!"
    , "HHHHH  EEEE   L     L     O   O      W W W  O   O  RRRR   L     D   D  !!"
    , "H   H  E      L     L     O   O      W W W  O   O  R  R   L     D   D    "
    , "H   H  EEEEE  LLLLL LLLLL  OOO        W W    OOO   R   R  LLLLL DDDD   !!"
    ]
```

## Run

```bash
cd hello-worlds/haskell/0378-ascii-art-shadow
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure string transformation |
| output | `ascii-art` | Block-letter ASCII banner |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[ascii-art]` | ASCII art |
