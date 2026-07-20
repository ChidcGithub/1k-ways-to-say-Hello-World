---
id: 0036
language: python
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [polyglot]
notes: "Same file runs as both Bash and Python, printing 'Hello, World!' in each."
author: ChidcGithub
date: 2026-07-20
---

# #0036 · Python/Bash Polyglot

## Description

A single file that is valid in both Bash and Python and prints "Hello, World!" in either interpreter. The trick hinges on the line `""":"`: in Bash, adjacent quoted strings collapse into the single word `:` (the shell's no-op builtin), so the following `echo` runs and `exit` stops the script before it ever sees the Python code. In Python, `"""` opens a triple-quoted string that swallows the Bash lines as content; the string is closed by `"""` on the `":"""` line, and execution then falls through to `print("Hello, World!")`.

## Source Code

`main.py`:

```python
#!/bin/bash
""":"
echo "Hello, World!"
exit
":"""
print("Hello, World!")
```

## Run

As Python:

```bash
cd hello-worlds/python/0036-polyglot-python-bash
python main.py
```

As Bash (if available):

```bash
cd hello-worlds/python/0036-polyglot-python-bash
bash main.py
```

Both invocations print exactly `Hello, World!`.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3 is one of the two interpreters the file targets |
| paradigm | `procedural` | A small sequence of statements; no classes or higher-order abstractions |
| output | `stdout` | Both `echo` (Bash) and `print()` (Python) write to standard output |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Uses Python 3 `print()` and standard Bash quoting, both modern idioms |
| tags | `[polyglot]` | The same source file is executable under two different language interpreters |

## Reference

- [Polyglot (computing) — Wikipedia](https://en.wikipedia.org/wiki/Polyglot_(computing))
- [Bash `:` (null) builtin](https://www.gnu.org/software/bash/manual/html_node/Bourne-Shell-Builtins.html)
- [Python 3 triple-quoted strings](https://docs.python.org/3/reference/lexical_analysis.html#string-and-bytes-literals)
