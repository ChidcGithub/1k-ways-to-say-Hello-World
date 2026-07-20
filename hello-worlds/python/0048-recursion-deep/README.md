---
id: 0048
language: python
paradigm: functional
output: file
platform: cli
era: modern
tags: []
notes: "Recursively builds 'Hello, World!' character by character, writes to file."
author: ChidcGithub
date: 2026-07-20
---

# #0048 · Recursion-Deep Hello

## Description

A Hello World that reconstructs the greeting one character at a time via a recursive function. `build(s, i)` returns the empty string once `i` reaches the end of `s`, and otherwise returns `s[i]` concatenated with `build(s, i + 1)`. Calling `build("Hello, World!")` walks the string index by index until the base case is hit, then unwinds to assemble the original text. The result is written to `hello.txt` and read back to verify. Compared with entry #0010 (a pure-function `return`), this entry leans on recursion as the primary control flow and persists to a file rather than printing to stdout.

## Source Code

`main.py`:

```python
"""Recursively rebuild 'Hello, World!' one character at a time, then persist to a file."""


def build(s: str, i: int = 0) -> str:
    if i >= len(s):
        return ""
    return s[i] + build(s, i + 1)


def main() -> None:
    result = build("Hello, World!")

    with open("hello.txt", "w", encoding="utf-8") as f:
        f.write(result)

    with open("hello.txt", "r", encoding="utf-8") as f:
        content = f.read()

    print(content)


if __name__ == "__main__":
    main()
```

## Run

```bash
cd hello-worlds/python/0048-recursion-deep
python main.py
```

After running, a file `hello.txt` will appear next to `main.py` containing `Hello, World!`, and the same string will be printed to stdout.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `functional` | The greeting is built by a pure recursive function whose result depends only on its inputs |
| output | `file` | The greeting is persisted to `hello.txt`; stdout is only a verification echo |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Plain Python 3 recursion with default arguments and explicit encoding; no contemporary-only features required |
| tags | `[]` | The recursion is the technique; no narrower tag is needed |

## Reference

- [Python recursion and the call stack](https://docs.python.org/3/tutorial/controlflow.html#defining-functions)
- [Python `sys.setrecursionlimit`](https://docs.python.org/3/library/sys.html#sys.setrecursionlimit)
