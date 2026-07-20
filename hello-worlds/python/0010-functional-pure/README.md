---
id: 0010
language: python
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Pure functional style: immutable data, no statements, only expressions."
author: ChidcGithub
date: 2026-07-20
---

# #0010 · Python Functional Pure

## Description

A pure-functional take: a function `greet(msg)` simply returns its argument unchanged, and `print` consumes the result. No mutable state, no reassignment, no classes — the greeting flows as a value through a small expression pipeline.

## Source Code

`main.py`:

```python
def greet(msg):
    return msg


if __name__ == "__main__":
    print(greet("Hello, World!"))
```

## Run

```bash
cd hello-worlds/python/0010-functional-pure
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using first-class functions |
| paradigm | `functional` | Pure function with no side effects until `print`; immutable argument |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Python 3 first-class function style, modern era |
| tags | `[]` | A small pure function composition, no special technique worth indexing |

## Reference

- [Python 3 functional programming HOWTO](https://docs.python.org/3/howto/functional.html)
