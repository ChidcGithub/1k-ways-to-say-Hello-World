---
id: 0301
language: javascript
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Function composition: compose(addWorld, addBang) applied to 'Hello'."
author: ChidcGithub
date: 2026-07-21
---

# #0301 · Compose Functions

## Description

A Hello World built by composing two unary functions. `addWorld` appends `", World"` and `addBang` appends `"!"`; `compose(addBang, addWorld)` produces a new function that applies them right-to-left. This mirrors the classic `compose(f, g)(x) = f(g(x))` pattern from functional programming.

## Source Code

`main.js`:

```js
const addWorld = s => s + ", World";
const addBang = s => s + "!";
const compose = (f, g) => x => f(g(x));
const greet = compose(addBang, addWorld);
console.log(greet("Hello"));
```

## Run

```bash
cd hello-worlds/0301-compose-functions
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 使用 ES6 箭头函数 |
| paradigm | `functional` | 以函数组合构建最终行为 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 在终端通过 Node 运行 |
| era | `modern` | 箭头函数与高阶函数（ES2015+） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Arrow functions](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/Arrow_functions)
