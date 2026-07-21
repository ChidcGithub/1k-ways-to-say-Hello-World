---
id: 0304
language: javascript
paradigm: functional
output: stdout
platform: cli
era: classic
tags: []
notes: "Closure with memoization; caches greeting computation."
author: ChidcGithub
date: 2026-07-21
---

# #0304 · Closure Memoize

## Description

A Hello World built with a closure that memoizes its result. An IIFE captures a `cached` variable in its lexical scope; on first invocation the greeting is computed and stored, and on subsequent calls the cached value is returned. This demonstrates the canonical closure-as-private-state pattern used for memoization.

## Source Code

`main.js`:

```js
const getGreeting = (function() {
    let cached = null;
    return function() {
        if (cached === null) cached = "Hello, World!";
        return cached;
    };
})();
console.log(getGreeting());
```

## Run

```bash
cd hello-worlds/0304-closure-memoize
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 使用 IIFE 与闭包 |
| paradigm | `functional` | 以闭包封装私有状态 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 在终端通过 Node 运行 |
| era | `classic` | 闭包与 IIFE 为经典 JavaScript 范式 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Closures](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Closures)
