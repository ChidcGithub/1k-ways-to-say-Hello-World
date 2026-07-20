---
id: 0016
language: python
paradigm: reactive
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Generator-based stream: yield characters one at a time, consume reactively."
author: ChidcGithub
date: 2026-07-20
---

# #0016 · Reactive Generator Hello

## Description

A single-line program that treats the greeting as a stream of characters. A generator expression yields characters one at a time, and the consumer (`str.join`) reactively pulls and reassembles them. The entire logic lives on one physical line of code, hence the `one-liner` tag.

## Source Code

`main.py`:

```python
print(''.join(c for c in "Hello, World!"))
```

## Run

```bash
cd hello-worlds/python/0016-reactive-generator
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `reactive` | A generator expression produces a lazy stream of characters that is consumed reactively by `str.join` |
| output | `stdout` | Result is emitted via `print()` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Generator expressions date to Python 2.4 (2004) and are idiomatic in modern Python 3 |
| tags | `[one-liner]` | The core logic fits on a single line |

## Reference

- [Python generator expressions](https://docs.python.org/3/reference/expressions.html#generator-expressions)
- [Python `str.join`](https://docs.python.org/3/library/stdtypes.html#str.join)
