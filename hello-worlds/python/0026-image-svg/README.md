---
id: 0026
language: python
paradigm: declarative
output: image
platform: cli
era: modern
tags: []
notes: "Writes an SVG file with 'Hello, World!' as text element; SVG is declarative markup."
author: ChidcGithub
date: 2026-07-20
---

# #0026 · Image SVG

## Description

A declarative image Hello World. Rather than imperatively drawing pixels, the program emits an SVG document — a piece of declarative XML markup that *describes* what the image should contain: a white background and a `<text>` element reading "Hello, World!". Python is used only to assemble and write the markup string to `hello.svg`; the actual rendering is delegated to any SVG viewer. This contrasts with the procedural pixel-pushing approach of the PPM entry (0027).

## Source Code

`main.py`:

```python
svg = (
    '<?xml version="1.0" encoding="UTF-8"?>\n'
    '<svg xmlns="http://www.w3.org/2000/svg" width="320" height="120">\n'
    '  <rect width="100%" height="100%" fill="white"/>\n'
    '  <text x="20" y="70" font-family="sans-serif" font-size="36" fill="black">Hello, World!</text>\n'
    '</svg>\n'
)

with open("hello.svg", "w", encoding="utf-8") as f:
    f.write(svg)

print("Wrote hello.svg")
```

## Run

```bash
cd hello-worlds/python/0026-image-svg
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3 standard library file I/O; the SVG markup is the actual artifact |
| paradigm | `declarative` | The greeting is expressed as a description of what the image contains (an SVG `<text>` node), not how to draw it |
| output | `image` | The deliverable is a vector image file (`hello.svg`) that renders to a visible picture |
| platform | `cli` | Runs from a terminal and writes a file to the working directory |
| era | `modern` | SVG 1.1 (2003) and Python's plain string/file handling sit in the 2001–2020 modern era |
| tags | `[]` | No special technique beyond emitting declarative markup |

## Reference

- [SVG 1.1 specification (W3C)](https://www.w3.org/TR/SVG11/)
