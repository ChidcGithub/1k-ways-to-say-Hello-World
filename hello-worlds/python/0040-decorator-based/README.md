---
id: 0040
language: python
paradigm: oop
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "A decorator wraps a function to inject 'Hello, World!' printing; one-liner body."
author: ChidcGithub
date: 2026-07-20
---

# #0040 · Decorator-Based Hello

## Description

A `@say_hello` decorator wraps a target function and injects a `print("Hello, World!")` call into its wrapper before delegating to the original. The decorated call site itself is a single-line `greet()`, demonstrating Python's first-class function transformation machinery.

## Source Code

`main.py`:

```python
def say_hello(func):
    def wrapper(*args, **kwargs):
        print("Hello, World!")
        return func(*args, **kwargs)

    return wrapper


@say_hello
def greet():
    pass


greet()
```

## Run

```bash
cd hello-worlds/python/0040-decorator-based
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `oop` | Behavior is organized around higher-order function objects and the decorator pattern |
| output | `stdout` | Result is emitted via `print()` inside the wrapper to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | The `@decorator` syntax dates to Python 2.4 (2004) and is idiomatic in modern Python 3 |
| tags | `[one-liner]` | The decorated call site `greet()` is a single line that produces the greeting |

## Reference

- [Python function definitions (decorators)](https://docs.python.org/3/reference/compound_stmts.html#function-definitions)
- [PEP 318 — Decorators for Functions and Methods](https://peps.python.org/pep-0318/)
