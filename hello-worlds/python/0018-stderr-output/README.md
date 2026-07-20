---
id: 0018
language: python
paradigm: procedural
output: stderr
platform: cli
era: modern
tags: []
notes: "Writes to stderr instead of stdout using sys.stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0018 · Stderr Output Hello

## Description

A simple procedural program that deliberately writes the greeting to standard **error** instead of standard output, using `sys.stderr.write`. The output stream is the only difference from the canonical Hello World, but it matters for shell pipelines and log routing.

## Source Code

`main.py`:

```python
import sys

sys.stderr.write("Hello, World!\n")
```

## Run

```bash
cd hello-worlds/python/0018-stderr-output
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
| language | `python` | Python 3, standard library only |
| paradigm | `procedural` | A single sequential statement; no classes, closures, or data flow |
| output | `stderr` | Writes via `sys.stderr.write`, going to the standard error stream rather than stdout |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | `sys.stderr` has been part of Python since the earliest versions and is idiomatic in Python 3 |
| tags | `[]` | No special technique worth indexing beyond the non-default output stream |

## Reference

- [Python `sys.stderr`](https://docs.python.org/3/library/sys.html#sys.stderr)
- [Standard streams](https://en.wikipedia.org/wiki/Standard_streams)
