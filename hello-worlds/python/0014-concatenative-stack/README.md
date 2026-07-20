---
id: 0014
language: python
paradigm: concatenative
output: stdout
platform: cli
era: modern
tags: []
notes: "Stack-based (Forth-like) execution: push strings, then concatenate by popping."
author: ChidcGithub
date: 2026-07-20
---

# #0014 · Concatenative Stack Hello

## Description

A miniature Forth-like stack machine implemented on a Python list. Strings are pushed as literals onto the stack, then a single concatenation operation (pop two, push their concatenation) is repeated until one item remains. This mirrors the concatenative paradigm where programs are built by composing operations that consume and produce values on a shared stack.

## Source Code

`main.py`:

```python
# Tiny stack machine (Forth-like): push strings, then concatenate by popping.
# The only operation is a concatenation op: pop top two items, push their
# concatenation. Repeat until a single item remains on the stack.

stack = []

# Push literals onto the stack (top is the rightmost element).
stack.append("Hello")
stack.append(", ")
stack.append("World!")

# Concatenation op: pop two, push their concatenation, until one item remains.
while len(stack) > 1:
    b = stack.pop()  # top of stack
    a = stack.pop()  # second from top
    stack.append(a + b)

# The single remaining item is the concatenated result.
print(stack[0])
```

## Run

```bash
cd hello-worlds/python/0014-concatenative-stack
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `concatenative` | Program logic is expressed as a sequence of stack operations (push, pop, concat) rather than nested function calls |
| output | `stdout` | Result is emitted via `print()` to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Uses Python 3 list semantics; concatenative style references Forth (1970s) but the implementation is idiomatic modern Python |
| tags | `[]` | No special technique worth indexing beyond the paradigm itself |

## Reference

- [Forth programming language](https://en.wikipedia.org/wiki/Forth_(programming_language))
- [Concatenative programming language](https://en.wikipedia.org/wiki/Concatenative_programming_language)
