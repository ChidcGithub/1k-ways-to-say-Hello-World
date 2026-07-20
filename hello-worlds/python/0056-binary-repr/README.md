---
id: 0056
language: python
paradigm: procedural
output: stdout
platform: cli
era: contemporary
tags: [obfuscated]
notes: "Builds the greeting from binary representations of each character."
author: ChidcGithub
date: 2026-07-20
---

# #0056 · Python Binary Repr

## Description

An obfuscated Hello World: the source contains no letter literals for the greeting — only 8-bit binary strings of `0`s and `1`s. Each string in `bits` is the 8-bit binary representation of one ASCII character of `Hello, World!` (e.g. `"01001000"` is `0x48` = `'H'`). At runtime, each binary string is parsed with `int(b, 2)`, converted back to a character with `chr()`, and the pieces are joined into the final greeting. The visible source therefore hides the message behind a wall of bits — a deliberately obfuscated reconstruction rather than a literal print.

## Source Code

`main.py`:

```python
bits = [
    "01001000",
    "01100101",
    "01101100",
    "01101100",
    "01101111",
    "00101100",
    "00100000",
    "01010111",
    "01101111",
    "01110010",
    "01101100",
    "01100100",
    "00100001",
]
print("".join(chr(int(b, 2)) for b in bits))
```

## Run

```bash
cd hello-worlds/python/0056-binary-repr
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using built-ins `int()`, `chr()`, and a generator expression |
| paradigm | `procedural` | A sequence of statements: define the data, then transform-and-print |
| output | `stdout` | `print()` writes the joined string to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | Showcases a current-era obfuscation technique layered on top of standard built-ins, distinct from the canonical baseline |
| tags | `[obfuscated]` | The greeting is intentionally hidden behind binary strings; no letter literals for the message appear in the source |

## Reference

- [Python 3 `int(x, base)` documentation](https://docs.python.org/3/library/functions.html#int)
- [Python 3 `chr()` documentation](https://docs.python.org/3/library/functions.html#chr)
