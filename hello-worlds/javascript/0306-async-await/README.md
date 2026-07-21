---
id: 0306
language: javascript
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Async/await pattern: async function resolves to greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0306 · Async Await

## Description

A Hello World built with `async`/`await`. `getGreeting` is an async function that resolves to the greeting string; a top-level async IIFE awaits its result and logs it. This demonstrates the modern, Promise-based asynchronous flow-control style even though the underlying computation is synchronous.

## Source Code

`main.js`:

```js
async function getGreeting() { return "Hello, World!"; }
(async () => { console.log(await getGreeting()); })();
```

## Run

```bash
cd hello-worlds/0306-async-await
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 使用 ES2017 async/await |
| paradigm | `functional` | 以 async 函数返回 Promise 并 await |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 在终端通过 Node 运行 |
| era | `modern` | async/await（ES2017+） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: async function](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/async_function)
- [MDN: await](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/await)
