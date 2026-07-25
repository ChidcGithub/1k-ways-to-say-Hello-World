---
id: 0380
language: haskell
paradigm: functional
output: ascii-art
platform: cli
era: modern
tags: [ascii-art, obfuscated]
notes: "Slanted/3D-style ASCII art letters spelling Hello World."
author: ChidcGithub
date: 2026-07-25
---

# #0380 · Haskell Ascii-Art-Slant

## Description

A slanted, pseudo-3D ASCII art rendering where each letter of "Hello World" appears as individual character blocks with perspective lines. The letters are arranged horizontally, each rendered with varying styles — mixing uppercase, lowercase, and block forms. A playful, hand-crafted typographic experiment.

## Source Code

`Main.hs`:

```haskell
main = putStrLn $ unlines [
    "    H        e        l        l        o                 W        o        r        l        d        !",
    "   / \\               / \\      / \\      / \\              / \\               / \\      / \\      / \\      / \\",
    "  /   \\             /   \\    /   \\    /   \\            /   \\             /   \\    /   \\    /   \\    /   \\",
    " /_____\\             \\__/     \\__/     \\__/             \\__/              \\__/     \\__/     \\__/     \\__/",
    "|  H  |    e         l         l        o                W        o        r        l        d        !",
    "|  |  |                                                                                                   ",
    "|_____|   EEEEE     L         L        OOO             W   W     OOO     RRRR     L        DDDD      !   "
    ]
```

## Run

```bash
cd hello-worlds/haskell/0380-ascii-art-slant
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `haskell` | Haskell 2010 |
| paradigm | `functional` | String rendering |
| output | `ascii-art` | Slanted ASCII art |
| platform | `cli` | Terminal |
| era | `modern` | Haskell 2010 |
| tags | `[ascii-art, obfuscated]` | Artful/obfuscated visual output |
