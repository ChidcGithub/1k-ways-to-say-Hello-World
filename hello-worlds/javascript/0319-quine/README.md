---
id: 0319
language: javascript
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [quine]
notes: "A JavaScript quine that prints its own source, then prints 'Hello, World!' on the next line."
author: ChidcGithub
date: 2026-07-21
---

# #0319 · JavaScript Quine

## Description

A self-reproducing program. An immediately-invoked function expression references itself by name (`q`), coerces the function to its source string via `q.toString()`, and prints `(q)()`—reconstructing the program's own source on the first output line. A second `console.log` then emits "Hello, World!" on the next line. The function-toString technique avoids the quote-escaping pitfalls of template-string quines and produces a faithful copy of the source.

## Source Code

`main.js`:

```js
(function q(){console.log("(" + q + ")()");console.log("Hello, World!")})()
```

## Run

```bash
cd hello-worlds/javascript/0319-quine
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序执行的自调用函数 |
| output | `stdout` | 通过 console.log 输出 |
| platform | `cli` | 终端运行 |
| era | `modern` | 使用具名函数表达式（ES5+） |
| tags | `[quine]` | 自打印程序 |

## Reference

- [MDN: Function.prototype.toString](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Function/toString)
- [Wikipedia: Quine (computing)](https://en.wikipedia.org/wiki/Quine_(computing))
