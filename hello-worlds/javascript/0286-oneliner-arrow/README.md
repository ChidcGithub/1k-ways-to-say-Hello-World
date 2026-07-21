---
id: 0286
language: javascript
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "One-liner using arrow function IIFE."
author: ChidcGithub
date: 2026-07-21
---

# #0286 · JavaScript One-Liner Arrow

## Description

A single-line Hello World that uses an arrow function IIFE (Immediately Invoked Function Expression). An empty-parameter arrow function `()=>console.log(...)` is wrapped in parentheses and immediately invoked with `()`, all on one line. The arrow function syntax is an ES6 (2015) addition; combined with IIFE invocation this gives a concise one-liner that still runs as a callable expression.

## Source Code

`main.js`:

```javascript
(()=>console.log("Hello, World!"))();
```

## Run

```bash
cd hello-worlds/javascript/0286-oneliner-arrow
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 通过 IIFE 立即执行一次性过程 |
| output | `stdout` | 通过 `console.log` 写入标准输出 |
| platform | `cli` | 在 Node.js 命令行运行 |
| era | `modern` | 使用 ES6 箭头函数 |
| tags | `[one-liner]` | 核心逻辑单行 |

## Reference

- [MDN: Arrow functions](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/Arrow_functions)
- [MDN: IIFE](https://developer.mozilla.org/en-US/docs/Glossary/IIFE)
