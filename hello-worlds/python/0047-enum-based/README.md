---
id: 0047
language: python
paradigm: oop
output: stderr
platform: cli
era: modern
tags: []
notes: "Uses enum.Enum to define a Message enum; writes to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0047 · Enum-Based Hello

## Description

A Hello World that defines the greeting as a member of an `enum.Enum`. The `Message` enum declares a single member, `HELLO = "Hello, World!"`, so the text lives as a named constant on a type rather than as a free-floating literal. The program then writes `Message.HELLO.value` to **stderr** rather than stdout. Compared with entry #0018 (a bare `sys.stderr.write` of a string literal), the greeting is now an enumerated value; compared with entry #0009 (an instance-based class), the value is a class-level constant rather than per-instance state.

## Source Code

`main.py`:

```python
import sys
import enum


class Message(enum.Enum):
    HELLO = "Hello, World!"


sys.stderr.write(Message.HELLO.value + "\n")
```

## Run

```bash
cd hello-worlds/python/0047-enum-based
python main.py
```

To confirm the greeting is on stderr (and *not* on stdout), redirect stderr to stdout and discard stdout:

```bash
# Windows (cmd / PowerShell)
python main.py 2>&1 1>nul

# POSIX shells
python main.py 2>&1 1>/dev/null
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only (`enum`, `sys`) |
| paradigm | `oop` | The greeting is organized as a member of the `Message` enum class |
| output | `stderr` | Writes via `sys.stderr.write`, going to the standard error stream rather than stdout |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | The `enum` module dates to Python 3.4 (2011), placing it in the modern era |
| tags | `[]` | The enum is the technique; no narrower tag is needed |

## Reference

- [Python `enum` module](https://docs.python.org/3/library/enum.html)
- [PEP 435 — An Enum type for Python](https://peps.python.org/pep-0435/)
- [Python `sys.stderr`](https://docs.python.org/3/library/sys.html#sys.stderr)
