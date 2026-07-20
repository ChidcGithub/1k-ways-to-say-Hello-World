---
id: 0041
language: python
paradigm: oop
output: stdout
platform: cli
era: contemporary
tags: [one-liner]
notes: "Uses a context manager (with-statement) that prints 'Hello, World!' on __enter__."
author: ChidcGithub
date: 2026-07-20
---

# #0041 · Context Manager Hello

## Description

A `Hello` class implements the context manager protocol (`__enter__` / `__exit__`). Entering the `with` block triggers `__enter__`, which prints the greeting; the body itself is just `pass`. This demonstrates Python's resource-management protocol being repurposed for side-effectful greeting emission, with the call site reduced to a single `with` statement.

## Source Code

`main.py`:

```python
class Hello:
    def __enter__(self):
        print("Hello, World!")
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        return False


with Hello():
    pass
```

## Run

```bash
cd hello-worlds/python/0041-context-manager
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `oop` | Behavior is organized around a class implementing the context manager protocol |
| output | `stdout` | Result is emitted via `print()` inside `__enter__` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | The `with` statement and context manager protocol are contemporary Python 3 (post-2010s) idioms |
| tags | `[one-liner]` | The consumer site `with Hello(): pass` is a single line that produces the greeting |

## Reference

- [Python context manager types](https://docs.python.org/3/reference/datamodel.html#with-statement-context-managers)
- [PEP 343 — The "with" statement](https://peps.python.org/pep-0343/)
