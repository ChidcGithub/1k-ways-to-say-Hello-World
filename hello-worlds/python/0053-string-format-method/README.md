---
id: 0053
language: python
paradigm: declarative
output: stdout
platform: cli
era: contemporary
tags: [one-liner]
notes: "Uses str.format() method as a declarative template; one-liner."
author: ChidcGithub
date: 2026-07-20
---

# #0053 · String Format Method Hello

## Description

A declarative one-liner that separates the *shape* of the greeting from its *content*. The template string `"{}, {}!"` declares the structure — two placeholders punctuated by a comma-space and a trailing exclamation mark — and `str.format` fills in the values. There is no explicit concatenation, no loop, no statement ordering; the code describes what the output should look like, and lets the method do the assembly.

## Source Code

`main.py`:

```python
print("{}, {}!".format("Hello", "World"))
```

## Run

```bash
cd hello-worlds/python/0053-string-format-method
python main.py
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only (`str.format`) |
| paradigm | `declarative` | A template string declares the structure of the output; `format` fills the slots, with no imperative assembly |
| output | `stdout` | Result emitted via `print()` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | `str.format` is the modern, recommended declarative templating method in Python 3 (2021+ idioms) |
| tags | `[one-liner]` | Core logic is a single expression on one line |

## Reference

- [Python `str.format`](https://docs.python.org/3/library/stdtypes.html#str.format)
- [Format String Syntax](https://docs.python.org/3/library/string.html#formatstrings)
