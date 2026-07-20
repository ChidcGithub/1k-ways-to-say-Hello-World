---
id: 0043
language: python
paradigm: procedural
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Strict PEP 484 type annotations on every function and variable."
author: ChidcGithub
date: 2026-07-20
---

# #0043 · Type-Hints Strict Hello

## Description

A straightforward procedural Hello World with strict PEP 484 type annotations applied to every function signature, return type, and module-level variable. The function `greet` takes and returns a `str`, and the message variable is explicitly annotated as `str`. Type checkers such as `mypy` can verify the program with no inference required.

## Source Code

`main.py`:

```python
def greet(message: str) -> str:
    return message


msg: str = "Hello, World!"

print(greet(msg))
```

## Run

```bash
cd hello-worlds/python/0043-type-hints-strict
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `procedural` | A top-down sequence of function definition, variable binding, and call |
| output | `stdout` | Result is emitted via `print()` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | PEP 484 variable annotations (`x: T`) require Python 3.6+ (2016+) and are a contemporary idiom |
| tags | `[]` | No special technique worth indexing beyond the paradigm itself |

## Reference

- [PEP 484 — Type Hints](https://peps.python.org/pep-0484/)
- [Python typing — type annotations](https://docs.python.org/3/library/typing.html)
