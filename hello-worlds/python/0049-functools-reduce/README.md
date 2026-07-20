---
id: 0049
language: python
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: [one-liner]
notes: "Uses functools.reduce to concatenate a list of string fragments; one-liner body."
author: ChidcGithub
date: 2026-07-20
---

# #0049 · Functools Reduce Hello

## Description

A functional one-liner that builds the greeting by folding a binary `+` over a list of string fragments with `functools.reduce`. Where the canonical Hello World hardcodes a single string literal, this version treats the message as the result of a left-to-right reduction — the body is a single expression that never names an intermediate variable.

## Source Code

`main.py`:

```python
from functools import reduce
print(reduce(lambda a, b: a + b, ["Hello", ", ", "World!"]))
```

## Run

```bash
cd hello-worlds/python/0049-functools-reduce
python main.py
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only (`functools`) |
| paradigm | `functional` | Uses `reduce` (a higher-order fold) with an anonymous binary lambda instead of concatenation by hand |
| output | `stdout` | Result emitted via `print()` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | `functools.reduce` is the modern, recommended spelling of the fold in Python 3 (2021+ idioms) |
| tags | `[one-liner]` | Core logic is a single expression on one line |

## Reference

- [Python `functools.reduce`](https://docs.python.org/3/library/functools.html#functools.reduce)
- [Fold (higher-order function)](https://en.wikipedia.org/wiki/Fold_(higher-order_function))
