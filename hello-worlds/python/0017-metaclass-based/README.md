---
id: 0017
language: python
paradigm: oop
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses a metaclass to auto-generate the greet method on class creation."
author: ChidcGithub
date: 2026-07-20
---

# #0017 · Metaclass-Based Hello

## Description

A metaclass (`GreeterMeta`) intercepts class creation and automatically injects a `greet()` method onto any class built with it. The `HelloWorld` class body is intentionally empty — all behavior is supplied at class-creation time by the metaclass. Instantiating and calling `greet()` then prints the greeting. This showcases Python's contemporary OOP machinery for class construction.

## Source Code

`main.py`:

```python
# A metaclass that, at class-creation time, injects a greet() method onto
# the new class. The class body itself is empty — the behavior is added
# entirely by the metaclass.


class GreeterMeta(type):
    def __new__(mcs, name, bases, namespace):
        cls = super().__new__(mcs, name, bases, namespace)

        def greet(self):
            print("Hello, World!")

        cls.greet = greet
        return cls


class HelloWorld(metaclass=GreeterMeta):
    pass


HelloWorld().greet()
```

## Run

```bash
cd hello-worlds/python/0017-metaclass-based
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `oop` | Behavior is organized around a class instantiated at runtime; the metaclass customizes class construction |
| output | `stdout` | Result is emitted via `print()` inside the injected method to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | Metaclass customization via `metaclass=` keyword and `type.__new__` overrides is a contemporary Python 3 (post-2010s) idiom |
| tags | `[]` | No special technique worth indexing beyond the paradigm itself |

## Reference

- [Python metaclasses](https://docs.python.org/3/reference/datamodel.html#metaclasses)
- [PEP 3115 — Metaclass syntax in Python 3000](https://peps.python.org/pep-3115/)
