---
id: 0320
language: javascript
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [polyglot]
notes: "Polyglot: valid as both JavaScript and Python; prints greeting in each."
author: ChidcGithub
date: 2026-07-21
---

# #0320 · JavaScript/Python Polyglot

## Description

A single source file that is valid as both JavaScript and Python, printing "Hello, World!" in either interpreter. In JavaScript, `1//2;` is an expression followed by a line comment, `console.log` runs, and the Python code is hidden inside a `/* ... */` block comment. In Python, `1//2` is floor division (a no-op), `"""` opens a triple-quoted string that swallows the JavaScript body, then `print("Hello, World!")` executes. The same bytes produce the same greeting through two completely different parse paths.

## Source Code

`main.js`:

```js
1//2;"""
console.log("Hello, World!")
/*
"""
print("Hello, World!")
# */
```

## Run

JavaScript:

```bash
cd hello-worlds/javascript/0320-polyglot-js-python
node main.js
```

Python:

```bash
cd hello-worlds/javascript/0320-polyglot-js-python
python main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主要登记语言为 JavaScript |
| paradigm | `procedural` | 顺序语句执行 |
| output | `stdout` | 通过 console.log / print 输出 |
| platform | `cli` | 终端运行 |
| era | `modern` | 兼容现代 JS 与 Python 3 |
| tags | `[polyglot]` | 同一源码可被两种语言执行 |

## Reference

- [Polyglot (computing) - Wikipedia](https://en.wikipedia.org/wiki/Polyglot_(computing))
