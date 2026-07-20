---
id: 0044
language: python
paradigm: procedural
output: stdout
platform: cli
era: contemporary
tags: [one-liner]
notes: "Uses the walrus operator := (PEP 572, Python 3.8+) to assign and print in one expression."
author: ChidcGithub
date: 2026-07-20
---

# #0044 · Walrus Operator Hello

## Description

A one-line Hello World that uses the walrus operator (`:=`) introduced by PEP 572 in Python 3.8. A single expression both binds the name `msg` to `"Hello, World!"` and passes that value to `print()`. Unlike entry #0032 (a plain `print` call), the assignment expression makes the binding observable: after the line executes, `msg` is in scope and reusable, all without a separate assignment statement.

## Source Code

`main.py`:

```python
print((msg := "Hello, World!"))
```

## Run

```bash
cd hello-worlds/python/0044-walrus-operator
python main.py
```

Requires Python 3.8 or newer.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `procedural` | A single sequential expression statement; no classes, closures, or data flow |
| output | `stdout` | `print()` writes the assigned value to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | The walrus operator `:=` was added in Python 3.8 (PEP 572, 2019), a contemporary idiom |
| tags | `[one-liner]` | The entire program is a single expression statement that both assigns and prints |

## Reference

- [PEP 572 — Assignment Expressions](https://peps.python.org/pep-0572/)
- [Python 3.8 What's New](https://docs.python.org/3/whatsnew/3.8.html#assignment-expressions)
