---
id: 0039
language: python
paradigm: reactive
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses async/await with asyncio to print the greeting asynchronously."
author: ChidcGithub
date: 2026-07-20
---

# #0039 · Async asyncio Hello

## Description

An asynchronous coroutine (`greet`) wraps `print` and is scheduled on the event loop via `asyncio.run`. Although `print` itself is synchronous, the program is structured around `async`/`await` semantics, showcasing Python's contemporary concurrency model for greeting emission.

## Source Code

`main.py`:

```python
import asyncio


async def greet():
    print("Hello, World!")


asyncio.run(greet())
```

## Run

```bash
cd hello-worlds/python/0039-async-asyncio
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only (`asyncio`) |
| paradigm | `reactive` | Control flow is driven by an event loop dispatching a coroutine |
| output | `stdout` | Result is emitted via `print()` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | `async`/`await` syntax and `asyncio.run` are contemporary Python 3.7+ (2018+) idioms |
| tags | `[]` | No special technique worth indexing beyond the paradigm itself |

## Reference

- [Python `asyncio` documentation](https://docs.python.org/3/library/asyncio.html)
- [PEP 492 — Coroutines with async and await syntax](https://peps.python.org/pep-0492/)
