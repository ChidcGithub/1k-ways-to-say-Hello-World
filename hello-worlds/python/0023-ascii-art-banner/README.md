---
id: 0023
language: python
paradigm: procedural
output: ascii-art
platform: cli
era: modern
tags: [ascii-art]
notes: "Renders 'HELLO WORLD' as large ASCII-art banner using a hardcoded font dictionary."
author: ChidcGithub
date: 2026-07-20
---

# #0023 · Python ASCII Art Banner

## Description

A Hello World rendered as a large ASCII-art banner. The program defines a `FONT` dictionary mapping each required letter (`H`, `E`, `L`, `O`, `W`, `R`, `D`) to a 3-line-tall ASCII pattern. The `render()` function walks the input string `"HELLO WORLD"`, and for each of the three output lines it concatenates the corresponding row of every letter's glyph (with a wider gap at the space between words). The three finished lines are then printed in order, producing a block-letter banner several terminal rows tall. Unlike the canonical one-line `print()`, here the greeting is a *picture* made of characters — the output medium is ASCII art, not a plain string.

## Source Code

`main.py`:

```python
"""Render 'HELLO WORLD' as a large ASCII-art banner using a hardcoded font."""

FONT = {
    "H": ["H   H", "H   H", "HHHHH"],
    "E": ["EEEEE", "E    ", "EEEEE"],
    "L": ["L    ", "L    ", "LLLLL"],
    "O": ["OOOOO", "O   O", "OOOOO"],
    "W": ["W   W", "W   W", "W W W"],
    "R": ["RRRR ", "R  R ", "R RR "],
    "D": ["DDDD ", "D   D", "DDDD "],
}

LETTER_GAP = " "
WORD_GAP = "   "


def render(text):
    lines = ["", "", ""]
    for char in text:
        if char == " ":
            for i in range(3):
                lines[i] += WORD_GAP
        elif char.upper() in FONT:
            glyph = FONT[char.upper()]
            for i in range(3):
                lines[i] += glyph[i] + LETTER_GAP
    return lines


def main():
    for line in render("HELLO WORLD"):
        print(line)


if __name__ == "__main__":
    main()
```

## Run

```bash
cd hello-worlds/python/0023-ascii-art-banner
python main.py
```

Expected stdout (a 3-line ASCII-art banner):

```
H   H EEEEE L     L     OOOOO    W   W OOOOO RRRR  L     DDDDD 
H   H E     L     L     O   O    W   W O   O R  R  L     D    D
HHHHH EEEEE LLLLL LLLLL OOOOO    W W W OOOOO R RR  LLLLL DDDDD 
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using only built-in data structures (dict, list, str) |
| paradigm | `procedural` | A `render()` function transforming a string into lines, plus a `main()` driver; no classes or higher-order abstractions |
| output | `ascii-art` | The greeting is delivered as a picture made of ASCII characters, not a literal string |
| platform | `cli` | Runs from a terminal and writes the banner to stdout |
| era | `modern` | Uses only Python 3 core features (dict literals, f-strings not required); the pattern itself is era-agnostic but the implementation is modern Python 3 |
| tags | `[ascii-art]` | The whole point is rendering the greeting as ASCII art — the technique is the entry |

## Reference

- [FIGlet](http://www.figlet.org/) — the classic ASCII-text banner generator that inspired this kind of font-dict approach
