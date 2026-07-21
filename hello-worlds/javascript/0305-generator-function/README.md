---
id: 0305
language: javascript
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "ES6 generator function yielding greeting characters."
author: ChidcGithub
date: 2026-07-21
---

# #0305 · Generator Function

## Description

A Hello World built with an ES6 generator. `chars` is a `function*` that yields each character of the input string one at a time; a `for...of` loop consumes the iterator and accumulates the greeting. This showcases lazy, pull-based iteration using the iterator protocol.

## Source Code

`main.js`:

```js
function* chars(s) { for (const c of s) yield c; }
let result = "";
for (const c of chars("Hello, World!")) result += c;
console.log(result);
```

## Run

```bash
cd hello-worlds/0305-generator-function
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 使用 ES6 generator 与 `for...of` |
| paradigm | `functional` | 以生成器惰性产出字符序列 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 在终端通过 Node 运行 |
| era | `modern` | generator 函数（ES2015+） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: function*](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/function*)
- [MDN: for...of](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/for...of)
