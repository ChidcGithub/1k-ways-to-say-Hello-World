---
id: 0019
language: python
paradigm: procedural
output: file
platform: cli
era: modern
tags: []
notes: "Writes 'Hello, World!' to a file named hello.txt, then reads it back and prints to confirm."
author: ChidcGithub
date: 2026-07-20
---

# #0019 · Python File Write

## Description

A Hello World whose primary output medium is a file. The program opens `hello.txt` in write mode, writes the string `Hello, World!` to it, then reopens the file in read mode and prints its contents to stdout for verification. Unlike the canonical `print()` entry, the greeting's durable destination is the filesystem; the stdout print is only a confirmation that the write succeeded. Uses only the built-in `open()` function with context managers.

## Source Code

`main.py`:

```python
"""Write 'Hello, World!' to a file, then read it back to verify."""


def main():
    with open("hello.txt", "w", encoding="utf-8") as f:
        f.write("Hello, World!")

    with open("hello.txt", "r", encoding="utf-8") as f:
        content = f.read()

    print(content)


if __name__ == "__main__":
    main()
```

## Run

```bash
cd hello-worlds/python/0019-file-write
python main.py
```

After running, a file `hello.txt` will appear next to `main.py` containing `Hello, World!`, and the same string will be printed to stdout.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using the built-in `open()` function |
| paradigm | `procedural` | A sequence of statements with no classes or higher-order functions |
| output | `file` | The greeting is written to `hello.txt` on disk; stdout is only a verification echo |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Uses Python 3 context-manager `with` syntax and explicit `encoding=` (Python 3.0+, 2008) |
| tags | `[]` | No special technique worth indexing — straightforward file I/O |

## Reference

- [Python 3 `open()` documentation](https://docs.python.org/3/library/functions.html#open)
