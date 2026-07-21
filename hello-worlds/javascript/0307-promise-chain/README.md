---
id: 0307
language: javascript
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Promise chain: resolves greeting through .then() calls."
author: ChidcGithub
date: 2026-07-21
---

# #0307 · Promise Chain

## Description

A Hello World built by chaining `Promise.prototype.then` calls. The chain starts from `Promise.resolve("Hello")`, then appends `", World"`, then `"!"`, and finally logs the result. This demonstrates the monadic-flavored sequential transformation pattern central to Promise-based flow control.

## Source Code

`main.js`:

```js
Promise.resolve("Hello")
    .then(s => s + ", World")
    .then(s => s + "!")
    .then(s => console.log(s));
```

## Run

```bash
cd hello-worlds/0307-promise-chain
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 使用 ES6 Promise 与箭头函数 |
| paradigm | `functional` | 以 `.then` 链式变换值 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 在终端通过 Node 运行 |
| era | `modern` | 原生 Promise（ES2015+） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Promise](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Promise)
- [MDN: Promise.prototype.then](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Promise/then)
