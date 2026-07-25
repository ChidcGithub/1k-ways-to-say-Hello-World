---
id: 0376
language: haskell
paradigm: functional
output: ascii-art
platform: cli
era: modern
tags: [ascii-art]
notes: "Prints 'Hello World' as a large ASCII art banner using putStrLn with embedded newlines."
author: ChidcGithub
date: 2026-07-25
---

# #0376 · Haskell Ascii-Art-Banner

## Description

A multi-line ASCII art banner of "Hello World" — each character rendered as a 5-line-tall glyph. The entire banner is a single string literal with embedded `\n` characters, passed to `putStrLn`. Text as visual art, compiled and printed in pure Haskell.

## Source Code

`Main.hs`:

```haskell
main = putStrLn " _   _      _ _         __        __         _     _  _ \n| | | | ___| | | ___    \\ \\      / /__  _ __| | __| || |\n| |_| |/ _ \\ | |/ _ \\    \\ \\ /\\ / / _ \\| '__| |/ _` || |\n|  _  |  __/ | | (_) |    \\ V  V / (_) | |  | | (_| ||_|\n|_| |_|\\___|_|_|\\___/      \\_/\\_/ \\___/|_|  |_|\\__,_|(_)"
```

## Run

```bash
cd hello-worlds/haskell/0376-ascii-art-banner
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | Pure IO action |
| output | `ascii-art` | Multi-line ASCII banner |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[ascii-art]` | ASCII art banner rendering |
