---
id: 0055
language: python
paradigm: declarative
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Uses string.Template for declarative substitution; one-liner."
author: ChidcGithub
date: 2026-07-20
---

# #0055 · Python Template String

## Description

A declarative Hello World built on `string.Template` from the standard library. The template string `"$a, $b!"` declares the *shape* of the greeting with two placeholders; `substitute(a="Hello", b="World")` supplies the values. Unlike entry #0001's direct `print("Hello, World!")` (procedural construction of the literal) or #0054's f-string interpolation, this entry is declarative in spirit: the template is a separate data artifact that describes the result, and substitution is a parameter-driven fill rather than inline expression evaluation. The core logic is a single statement.

## Source Code

`main.py`:

```python
from string import Template
print(Template("$a, $b!").substitute(a="Hello", b="World"))
```

## Run

```bash
cd hello-worlds/python/0055-template-string
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using the `string` standard library module |
| paradigm | `declarative` | The `Template` object declares the greeting's shape; `substitute()` fills the placeholders rather than constructing the string step by step |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | `string.Template` has been part of Python since 2.0 (2000), firmly within the 2001–2020 modern era |
| tags | `[one-liner]` | The core logic is a single statement — `print(Template(...).substitute(...))` |

## Reference

- [Python 3 `string.Template` documentation](https://docs.python.org/3/library/string.html#template-strings)
- [PEP 292 – Simplified Wrapper for Indentation-Sensitive Languages (Template strings)](https://peps.python.org/pep-0292/)
