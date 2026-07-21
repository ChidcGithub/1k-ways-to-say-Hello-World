---
id: 0298
language: javascript
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Arrow function IIFE returning greeting; one-liner."
author: ChidcGithub
date: 2026-07-21
---

# #0298 · Arrow IIFE Oneliner

## Description

A single-line Hello World built from an arrow function wrapped in an immediately-invoked function expression (IIFE). The arrow `() => \`Hello, World!\`` is defined and invoked inline within the `console.log` call, so the entire program is one expression with no statements.

## Source Code

`main.js`:

```js
console.log((()=>`Hello, World!`)());
```

## Run

```bash
cd hello-worlds/0298-arrow-iife-oneliner
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 使用 ES6+ 语法 |
| paradigm | `functional` | 以表达式求值驱动，使用箭头函数 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 在终端通过 Node 运行 |
| era | `modern` | 箭头函数与模板字符串（ES2015+） |
| tags | `[one-liner]` | 核心逻辑为单行表达式 |

## Reference

- [MDN: Arrow functions](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/Arrow_functions)
- [MDN: IIFE](https://developer.mozilla.org/en-US/docs/Glossary/IIFE)
