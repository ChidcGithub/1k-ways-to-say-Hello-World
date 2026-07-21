---
id: 0299
language: javascript
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses map and filter to process greeting parts."
author: ChidcGithub
date: 2026-07-21
---

# #0299 · Map-Filter

## Description

A Hello World built by chaining `Array.prototype.map` and `Array.prototype.filter` over an array of greeting parts. `map` passes each element through identity, `filter` drops empty strings, and `join` reassembles the final greeting — illustrating the canonical functional data-transformation pipeline.

## Source Code

`main.js`:

```js
const parts = ["Hello", ", ", "World!"];
const result = parts.map(s => s).filter(s => s.length > 0).join("");
console.log(result);
```

## Run

```bash
cd hello-worlds/0299-map-filter
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 使用 ES6 箭头函数与数组方法 |
| paradigm | `functional` | 以 map/filter 管道变换数据 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 在终端通过 Node 运行 |
| era | `modern` | 箭头函数与数组高阶方法（ES2015+） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Array.prototype.map](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/map)
- [MDN: Array.prototype.filter](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/filter)
