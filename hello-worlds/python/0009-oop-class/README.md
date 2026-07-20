---
id: 0009
language: python
paradigm: oop
output: stdout
platform: cli
era: modern
tags: []
notes: "Class-based Hello World using a Greeter class with a greet() method."
author: ChidcGithub
date: 2026-07-20
---

# #0009 · Python OOP Class

## Description

A class-based Hello World. A `Greeter` class encapsulates a message and exposes a `greet()` method that prints it. Unlike the procedural baseline, behavior is bundled with state inside an object, illustrating the object-oriented paradigm in minimal form.

## Source Code

`main.py`:

```python
class Greeter:
    def __init__(self, message):
        self.message = message

    def greet(self):
        print(self.message)


if __name__ == "__main__":
    greeter = Greeter("Hello, World!")
    greeter.greet()
```

## Run

```bash
cd hello-worlds/python/0009-oop-class
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using class and instance methods |
| paradigm | `oop` | State and behavior are encapsulated in a `Greeter` class |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Python 3 class syntax, well within the modern era |
| tags | `[]` | A straightforward class definition, no special technique worth indexing |

## Reference

- [Python 3 `class` documentation](https://docs.python.org/3/tutorial/classes.html)
