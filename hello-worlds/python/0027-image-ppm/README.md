---
id: 0027
language: python
paradigm: procedural
output: image
platform: cli
era: modern
tags: []
notes: "Generates a PPM (P6) bitmap with 'Hello, World!' rendered as pixel blocks."
author: ChidcGithub
date: 2026-07-20
---

# #0027 · Image PPM

## Description

A procedural pixel-pushing Hello World. A tiny 3-wide × 5-tall bitmap font is hand-defined for exactly the glyphs needed (H, E, L, O, W, R, D, comma, space, exclamation). The program iterates over "HELLO, WORLD!", stamping each glyph's "on" pixels into a 2-D grid as white blocks (scaled up so they are visible), then writes the grid out as a binary P6 PPM file `hello.ppm`. Unlike the SVG entry (0026), the image is built pixel by pixel rather than declared as markup — every byte of the bitmap is computed in Python.

## Source Code

`main.py`:

```python
# 3-wide x 5-tall bitmap font. Each glyph is 5 rows of 3 chars ('1' = on, '0' = off).
FONT = {
    'H': ["101", "111", "101", "101", "101"],
    'E': ["111", "100", "111", "100", "111"],
    'L': ["100", "100", "100", "100", "111"],
    'O': ["111", "101", "101", "101", "111"],
    'W': ["101", "101", "101", "101", "111"],
    'R': ["110", "101", "110", "100", "100"],
    'D': ["110", "101", "101", "101", "110"],
    ',': ["000", "000", "000", "010", "100"],
    ' ': ["000", "000", "000", "000", "000"],
    '!': ["010", "010", "010", "000", "010"],
}

CHAR_W = 3
CHAR_H = 5
GAP = 1          # blank column gap between glyphs (in font pixels)
SCALE = 6        # each font pixel becomes SCALE x SCALE output pixels
MARGIN = 6       # output-pixel margin around the whole image

text = "HELLO, WORLD!"

cols = len(text) * (CHAR_W + GAP) - GAP
rows = CHAR_H
width = MARGIN * 2 + cols * SCALE
height = MARGIN * 2 + rows * SCALE

# Build a 2-D grid: 0 = black, 1 = white.
grid = [[0] * width for _ in range(height)]


def draw_char(ch, ox, oy):
    glyph = FONT[ch]
    for r in range(CHAR_H):
        for c in range(CHAR_W):
            if glyph[r][c] == '1':
                for dy in range(SCALE):
                    for dx in range(SCALE):
                        grid[oy + r * SCALE + dy][ox + c * SCALE + dx] = 1


x = MARGIN
for ch in text:
    draw_char(ch, x, MARGIN)
    x += (CHAR_W + GAP) * SCALE

# Write a binary P6 PPM: header in ASCII, then raw RGB triplets.
with open("hello.ppm", "wb") as f:
    f.write(f"P6\n{width} {height}\n255\n".encode("ascii"))
    data = bytearray()
    for row in grid:
        for v in row:
            c = 255 if v == 1 else 0
            data += bytes((c, c, c))
    f.write(bytes(data))

print("Wrote hello.ppm")
```

## Run

```bash
cd hello-worlds/python/0027-image-ppm
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3 standard library file I/O; no image libraries used |
| paradigm | `procedural` | Explicit nested loops mutate a shared pixel grid step by step |
| output | `image` | The deliverable is a raster image file (`hello.ppm`) rendered from computed pixels |
| platform | `cli` | Runs from a terminal and writes a file to the working directory |
| era | `modern` | The PPM format predates this, but the hand-rolled bitmap-font + list-grid approach is idiomatic modern Python 3 (2001–2020) |
| tags | `[]` | No special technique beyond procedural pixel synthesis |

## Reference

- [Netpbm PPM format specification](https://netpbm.sourceforge.net/doc/ppm.html)
