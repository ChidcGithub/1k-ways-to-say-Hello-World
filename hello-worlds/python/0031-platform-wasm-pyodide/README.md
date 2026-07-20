---
id: 0031
language: python
paradigm: procedural
output: stdout
platform: wasm
era: contemporary
tags: []
notes: "Pyodide-style: uses js.document to write to the DOM when running in WASM; falls back to print() on CPython."
author: ChidcGithub
date: 2026-07-20
---

# #0031 · Python Platform WASM Pyodide

## Description

A Pyodide-flavoured Hello World that runs in the browser via WebAssembly. When executed under Pyodide, the bridged `js` module exposes the global `document` object and the program writes the greeting straight into the page's `<body>`; on a regular CPython interpreter the import fails and the `ImportError` fallback prints the same text to the terminal. One source file, two runtimes.

## Source Code

`main.py`:

```python
try:
    from js import document

    document.body.textContent = "Hello, World!"
except ImportError:
    print("Hello, World!")
```

## Run

```bash
cd hello-worlds/python/0031-platform-wasm-pyodide
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3 syntax understood by both CPython and Pyodide |
| paradigm | `procedural` | Sequential try/except block; no classes or closures |
| output | `stdout` | On CPython the fallback `print()` writes to standard output (in the browser it writes to the DOM) |
| platform | `wasm` | Targets Pyodide running Python in WebAssembly inside a browser |
| era | `contemporary` | Pyodide reached 1.0 in 2022, placing this in the 2021–present contemporary era |
| tags | `[]` | The platform itself is the distinguishing feature; no extra technique tag |

## Reference

- [Pyodide `js` module documentation](https://docs.pyodide.org/en/stable/usage/api/python-api.html)
