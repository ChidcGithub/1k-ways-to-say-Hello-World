---
id: 0300
language: javascript
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses Array.reduce() to fold greeting parts into single string."
author: ChidcGithub
date: 2026-07-21
---

# #0300 · Reduce Fold

## Description

A Hello World built with `Array.prototype.reduce`, folding an array of greeting parts into a single string with an empty-string seed. This demonstrates the classic left-fold pattern central to functional programming, where the accumulator threads state through each element.

## Source Code

`main.js`:

```js
const parts = ["Hello", ", ", "World!"];
const result = parts.reduce((acc, s) => acc + s, "");
console.log(result);
```

## Run

```bash
cd hello-worlds/0300-reduce-fold
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 使用 ES6 箭头函数与 `reduce` |
| paradigm | `functional` | 以 fold/reduce 归约数组 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 在终端通过 Node 运行 |
| era | `modern` | 箭头函数与数组高阶方法（ES2015+） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Array.prototype.reduce](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/reduce)
