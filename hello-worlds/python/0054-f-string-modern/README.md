---
id: 0054
language: python
paradigm: procedural
output: stdout
platform: cli
era: contemporary
tags: [code-golf]
notes: "Uses Python 3.6+ f-string; minimal char count for an f-string Hello World."
author: ChidcGithub
date: 2026-07-20
---

# #0054 · Python F-String Modern

## Description

A modern-era Hello World built on Python's f-string (PEP 498, Python 3.6+). Two variables `a` and `b` are tuple-assigned in a single statement, then interpolated into the greeting via an f-string literal `f"{a}, {b}!"`. Compared with the canonical `print("Hello, World!")` baseline (#0001) and the code-golf entry #0033, this entry is specifically the minimal f-string form: it stretches the f-string mechanism across the whole greeting rather than just printing a static literal, while still keeping the source compact.

Character count of `main.py` (excluding the trailing newline): **39**.

## Source Code

`main.py`:

```python
a,b="Hello","World";print(f"{a}, {b}!")
```

## Run

```bash
cd hello-worlds/python/0054-f-string-modern
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3.6+, using f-string literal syntax |
| paradigm | `procedural` | Two sequential statements joined by `;`; no classes, closures, or data flow |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | Showcases f-strings (PEP 498, Python 3.6, 2016) as a current-era Python feature, distinct from the canonical 3.0 `print()` baseline |
| tags | `[code-golf]` | Source optimised for minimal character count for an f-string variant |

## Reference

- [PEP 498 – Literal String Interpolation](https://peps.python.org/pep-0498/)
