---
id: 0013
language: python
paradigm: declarative
output: stdout
platform: cli
era: modern
tags: []
notes: "Declarative: a regex pattern describes the expected greeting; re.match validates and extracts."
author: ChidcGithub
date: 2026-07-20
---

# #0013 · Python Declarative Regex

## Description

A declarative Hello World. Instead of constructing the greeting step by step, a regular expression pattern `(Hello), (World!)` declares what a valid greeting looks like. `re.match` validates the input and captures the two groups, which are then joined and printed. The regex describes the *what*, not the *how*.

## Source Code

`main.py`:

```python
import re

if __name__ == "__main__":
    pattern = r"(Hello), (World!)"
    match = re.match(pattern, "Hello, World!")
    if match:
        print(", ".join(match.groups()))
```

## Run

```bash
cd hello-worlds/python/0013-declarative-regex
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using the `re` standard library module |
| paradigm | `declarative` | The regex pattern declares the shape of the greeting; matching extracts it |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Python 3 `re` module, modern era |
| tags | `[]` | A minimal pattern-match-and-extract, no special technique worth indexing |

## Reference

- [Python 3 `re` module documentation](https://docs.python.org/3/library/re.html)
