---
id: 0035
language: python
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [quine]
notes: "A quine that prints its own source on line 1, then 'Hello, World!' on line 2."
author: ChidcGithub
date: 2026-07-20
---

# #0035 · Python Quine

## Description

A quine is a program that outputs its own source code. This entry uses the classic Python self-referencing format string `s='s=%r;print(s%%s)';print(s%s)`, which prints itself by feeding the string through `%r` (repr) and escaping `%` as `%%`. After the quine prints the source on line 1, a second `print("Hello, World!")` appends the greeting on line 2 — making the output a faithful copy of the source followed by the canonical message.

## Source Code

`main.py`:

```python
s='s=%r;print(s%%s)';print(s%s)
print("Hello, World!")
```

## Run

```bash
cd hello-worlds/python/0035-quine
python main.py
```

Expected output (line 1 reproduces the source's first line, line 2 is the greeting):

```
s='s=%r;print(s%%s)';print(s%s)
Hello, World!
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using `%`-formatting and `print()` |
| paradigm | `procedural` | Two sequential statements; no classes or higher-order abstractions |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Python 3 `print()` function and `%`-style formatting are modern idioms |
| tags | `[quine]` | The first statement is a self-reproducing program — the defining trait worth indexing |

## Reference

- [Quine (computing) — Wikipedia](https://en.wikipedia.org/wiki/Quine_(computing))
- [Python 3 string formatting](https://docs.python.org/3/library/stdtypes.html#printf-style-string-formatting)
