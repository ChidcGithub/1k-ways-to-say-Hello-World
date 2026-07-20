---
id: 0038
language: python
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "Uses multiprocessing.Pool with a pure worker function to assemble the greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0038 · Python Parallel Multiprocessing

## Description

The greeting is assembled through a process pool: a pure function `greet(ch)` simply returns its character argument, and `Pool().map(greet, list("Hello, World!"))` fans the characters out across worker processes. Each worker applies `greet` to its character, the pool collects the results in order, and `''.join(result)` stitches them back into the final string. The `if __name__ == "__main__"` guard is required on spawn-based platforms (Windows, macOS) so worker processes import the module without re-executing the pool creation.

## Source Code

`main.py`:

```python
from multiprocessing import Pool


def greet(ch):
    return ch


if __name__ == "__main__":
    with Pool() as pool:
        result = pool.map(greet, list("Hello, World!"))
    print("".join(result))
```

## Run

```bash
cd hello-worlds/python/0038-parallel-multiprocessing
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using the `multiprocessing` standard-library module |
| paradigm | `functional` | A pure function `greet` is applied via `map`; no shared mutable state, result assembled from return values |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | `multiprocessing.Pool` is a stable Python 3 idiom |
| tags | `[parallel]` | Concurrency via OS-level processes is the defining trait worth indexing |

## Reference

- [Python 3 `multiprocessing` documentation](https://docs.python.org/3/library/multiprocessing.html)
- [Python 3 `Pool.map`](https://docs.python.org/3/library/multiprocessing.html#multiprocessing.pool.Pool.map)
