---
id: 0045
language: python
paradigm: declarative
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses match/case (PEP 634, Python 3.10+) to pattern-match and produce the greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0045 · Match Statement Hello

## Description

A Hello World built on Python's structural pattern matching (`match`/`case`), introduced by PEP 634 in Python 3.10. The program presents a literal `"hello"` to the `match` statement, which declares the expected shape of the input; the matching `case` then emits the greeting. Unlike a procedural `if/elif` chain, the logic is expressed by declaring patterns rather than by issuing imperative branches, making this a declarative use of the language's matching machinery.

## Source Code

`main.py`:

```python
match "hello":
    case "hello":
        print("Hello, World!")
    case _:
        pass
```

## Run

```bash
cd hello-worlds/python/0045-match-statement
python main.py
```

Requires Python 3.10 or newer.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `declarative` | The `match`/`case` construct declares the expected pattern; behavior follows from the match rather than from explicit branching |
| output | `stdout` | The matched case prints via `print()` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | `match`/`case` was added in Python 3.10 (PEP 634, 2021), a contemporary idiom |
| tags | `[]` | The pattern match itself is the technique; no narrower tag is needed |

## Reference

- [PEP 634 — Structural Pattern Matching: Specification](https://peps.python.org/pep-0634/)
- [PEP 636 — Structural Pattern Matching: Tutorial](https://peps.python.org/pep-0636/)
