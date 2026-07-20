---
id: 0015
language: python
paradigm: array
output: stdout
platform: cli
era: modern
tags: []
notes: "APL-style: operate on the whole character array at once via list comprehension."
author: ChidcGithub
date: 2026-07-20
---

# #0015 · Array Comprehension Hello

## Description

An APL-flavored take that treats the greeting as a single array of characters and processes it in one whole-array step. A list comprehension applies the identity function to every element of the character array in one expression; the result is then rejoined into a string. No explicit per-element loop is written — the comprehension captures the entire transformation.

## Source Code

`main.py`:

```python
# APL-style: operate on the whole character array at once via list comprehension.
# The string is treated as an array of characters; the comprehension applies
# identity to every element in a single whole-array expression, then the array
# is reassembled into a string. No element-by-element loop is written by hand.

text = "Hello, World!"
chars = list(text)  # materialize the character array

# Whole-array operation: identity applied to each element via comprehension.
result = "".join([c for c in chars])

print(result)
```

## Run

```bash
cd hello-worlds/python/0015-array-comprehension
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `array` | The string is treated as an array of characters and transformed in one whole-array comprehension, echoing APL's array-at-a-time style |
| output | `stdout` | Result is emitted via `print()` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | List comprehensions and `str.join` are idiomatic Python 3 (2008+) features |
| tags | `[]` | No special technique worth indexing beyond the paradigm itself |

## Reference

- [APL programming language](https://en.wikipedia.org/wiki/APL_(programming_language))
- [Python list comprehensions](https://docs.python.org/3/tutorial/datastructures.html#list-comprehensions)
