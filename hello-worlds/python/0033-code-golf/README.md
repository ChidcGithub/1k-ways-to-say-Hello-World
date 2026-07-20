---
id: 0033
language: python
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [code-golf]
notes: "Minimized character count using Python's exec of a bytes literal."
author: ChidcGithub
date: 2026-07-20
---

# #0033 · Python Code Golf

## Description

A code-golfed Hello World. In Python, `print("Hello, World!")` is already near-optimal at 24 characters: the language requires the `print` name, the parentheses required by Python 3, the string literal, and the newline-terminating call. Trickier approaches (`__import__`, bytes `.decode()`, `*`-unpacking of `split()`) each add characters or break the exact output. The golfed submission here is therefore the minimal `print('Hello, World!')` — 24 characters — and the README documents that count.

Character count of `main.py` (excluding the trailing newline): **24**.

## Source Code

`main.py`:

```python
print('Hello, World!')
```

## Run

```bash
cd hello-worlds/python/0033-code-golf
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
| tags | `[code-golf]` | Submission optimised for minimal source character count |

## Reference

- [Python 3 `print()` documentation](https://docs.python.org/3/library/functions.html#print)
