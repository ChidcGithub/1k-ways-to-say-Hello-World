---
id: 0050
language: python
paradigm: array
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses itertools.chain to merge character iterators, treats data as arrays."
author: ChidcGithub
date: 2026-07-20
---

# #0050 · Itertools Chain Hello

## Description

An array-style Hello World that treats the greeting as three separate character arrays and merges them into one with `itertools.chain`, before joining the resulting iterator back into a string. No explicit concatenation operator is written — the fragments flow through `chain` as a single lazy sequence, echoing APL's "operate on the whole array at once" mindset but over multiple input arrays.

## Source Code

`main.py`:

```python
from itertools import chain
print(''.join(chain("Hello", ", ", "World!")))
```

## Run

```bash
cd hello-worlds/python/0050-itertools-chain
python main.py
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only (`itertools`) |
| paradigm | `array` | Each fragment is treated as an array of characters and combined by chaining whole sequences rather than looping element-by-element |
| output | `stdout` | Result emitted via `print()` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | `itertools.chain` over multiple iterables is the modern Python 3 idiom for lazy array fusion (2021+) |
| tags | `[]` | No special technique worth indexing beyond the array paradigm |

## Reference

- [Python `itertools.chain`](https://docs.python.org/3/library/itertools.html#itertools.chain)
