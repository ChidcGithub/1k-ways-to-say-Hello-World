---
id: 0032
language: python
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Entire program is a single print() call; no imports, no variables."
author: ChidcGithub
date: 2026-07-20
---

# #0032 · Python One-Liner Print

## Description

The most stripped-down Python Hello World: a single `print()` call, no imports, no variables, no `if __name__` guard. Where entry #0001 stands as the canonical baseline, this entry is deliberately tagged `one-liner` to index it as a technique — the whole program is one statement, end to end.

## Source Code

`main.py`:

```python
print("Hello, World!")
```

## Run

```bash
cd hello-worlds/python/0032-one-liner-print
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using the built-in `print` function |
| paradigm | `procedural` | A single sequential statement; no classes, closures, or data flow |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Python 3's `print()` function syntax dates to 2008 (Python 3.0), placing it in the 2001–2020 modern era |
| tags | `[one-liner]` | The entire program is a single statement — the defining trait worth indexing |

## Reference

- [Python 3 `print()` documentation](https://docs.python.org/3/library/functions.html#print)
