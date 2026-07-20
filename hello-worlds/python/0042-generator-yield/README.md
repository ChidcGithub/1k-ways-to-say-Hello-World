---
id: 0042
language: python
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "A generator function yields characters of 'Hello, World!'; consumer joins and prints."
author: ChidcGithub
date: 2026-07-20
---

# #0042 · Generator Yield Hello

## Description

A named generator function `char_gen` lazily yields each character of the input string one at a time. The consumer pulls every value via `str.join` and reassembles them into the greeting before printing. Unlike the generator-expression variant, this version uses an explicit `yield` statement inside a function body, highlighting Python's pull-based lazy stream model.

## Source Code

`main.py`:

```python
def char_gen(s):
    for c in s:
        yield c


print(''.join(char_gen("Hello, World!")))
```

## Run

```bash
cd hello-worlds/python/0042-generator-yield
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `functional` | Uses a generator function with explicit `yield` to produce a lazy stream consumed by `str.join` |
| output | `stdout` | Result is emitted via `print()` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | Generator functions with `yield` are a contemporary Python 3 idiom in active use |
| tags | `[]` | No special technique worth indexing beyond the paradigm itself |

## Reference

- [Python yield expressions](https://docs.python.org/3/reference/expressions.html#yield-expressions)
- [Python generator functions](https://docs.python.org/3/tutorial/classes.html#generators)
