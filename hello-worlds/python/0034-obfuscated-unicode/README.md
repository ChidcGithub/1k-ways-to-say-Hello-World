---
id: 0034
language: python
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Uses chr() calls to build the string without any visible letters of the message."
author: ChidcGithub
date: 2026-07-20
---

# #0034 · Python Obfuscated Unicode

## Description

An obfuscated Hello World: the message "Hello, World!" never appears as a literal in the source. Each character is constructed by its ASCII code via `chr()`, then concatenated. Reading the source reveals only numbers and the `chr`/`print` builtins — the greeting itself is hidden behind numeric codes.

## Source Code

`main.py`:

```python
print(chr(72)+chr(101)+chr(108)+chr(108)+chr(111)+chr(44)+chr(32)+chr(87)+chr(111)+chr(114)+chr(108)+chr(100)+chr(33))
```

## Run

```bash
cd hello-worlds/python/0034-obfuscated-unicode
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using built-in `chr()` and `print()` |
| paradigm | `procedural` | A single sequential expression statement; no classes or higher-order functions |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | `chr()` and `print()` syntax are stable Python 3 idioms (2008+) |
| tags | `[obfuscated]` | The greeting string is hidden behind numeric character codes with no visible letters of the message in source |

## Reference

- [Python 3 `chr()` documentation](https://docs.python.org/3/library/functions.html#chr)
- [ASCII character codes](https://en.wikipedia.org/wiki/ASCII)
