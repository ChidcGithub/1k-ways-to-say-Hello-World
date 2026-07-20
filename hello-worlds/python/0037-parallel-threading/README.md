---
id: 0037
language: python
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "Spawns N threads, each prints part of 'Hello, World!'; a condition variable orders them so output is non-interleaved."
author: ChidcGithub
date: 2026-07-20
---

# #0037 · Python Parallel Threading

## Description

The greeting is split into ordered parts and each part is handed to its own `threading.Thread`. Because thread scheduling is non-deterministic, a `threading.Condition` (which wraps a lock) gates each thread to print only on its turn: a thread waits until a shared `turn` counter matches its index, prints its part, increments the counter, and notifies the others. The lock prevents interleaved writes to stdout, so after all threads are joined the combined output is exactly `Hello, World!`.

## Source Code

`main.py`:

```python
import threading

# Split the greeting into ordered parts; each part is printed by its own thread.
parts = ["Hello", ", ", "World!"]

# A condition variable (built on a lock) ensures threads print in order
# without interleaving their output on stdout.
cv = threading.Condition()
turn = 0


def worker(idx, part):
    global turn
    with cv:
        while turn != idx:
            cv.wait()
        print(part, end="", flush=True)
        turn += 1
        cv.notify_all()


threads = [threading.Thread(target=worker, args=(i, part)) for i, part in enumerate(parts)]
for t in threads:
    t.start()
for t in threads:
    t.join()

print()
```

## Run

```bash
cd hello-worlds/python/0037-parallel-threading
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using the `threading` standard-library module |
| paradigm | `procedural` | Threads execute a procedural worker; no classes or functional combinators |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | `threading` and `Condition` are stable Python 3 idioms |
| tags | `[parallel]` | Concurrency via OS-level threads is the defining trait worth indexing |

## Reference

- [Python 3 `threading` documentation](https://docs.python.org/3/library/threading.html)
- [Python 3 `Condition` objects](https://docs.python.org/3/library/threading.html#condition-objects)
