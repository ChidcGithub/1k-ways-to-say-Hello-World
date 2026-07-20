---
id: 0011
language: python
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Single-expression lambda with map() over character list."
author: ChidcGithub
date: 2026-07-20
---

# #0011 · Python Functional Lambda

## Description

A single-expression Hello World. A `lambda` is mapped over each character of the literal, and the resulting iterable is joined back into the original string before printing. Demonstrates functional combinators (`map`, `lambda`, `str.join`) in one line.

## Source Code

`main.py`:

```python
print(''.join(map(lambda c: c, "Hello, World!")))
```

## Run

```bash
cd hello-worlds/python/0011-functional-lambda
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using `lambda`, `map`, and `str.join` |
| paradigm | `functional` | Uses `map` with an anonymous function instead of a loop |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Python 3 functional built-ins, modern era |
| tags | `[one-liner]` | Core logic is a single expression |

## Reference

- [Python 3 `map` documentation](https://docs.python.org/3/library/functions.html#map)
- [Python 3 `lambda` expressions](https://docs.python.org/3/tutorial/controlflow.html#lambda-expressions)
