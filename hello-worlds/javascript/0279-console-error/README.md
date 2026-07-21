---
id: 0279
language: javascript
paradigm: procedural
output: stderr
platform: cli
era: classic
tags: []
notes: "Writes to stderr using console.error."
author: ChidcGithub
date: 2026-07-21
---

# #0279 · JavaScript Console Error

## Description

Writes the greeting to standard error using `console.error` on Node.js. Unlike `console.log` (which targets stdout), `console.error` writes to the `stderr` stream, making this entry distinct in its output channel. The message text is identical, but redirecting stdout vs. stderr reveals the difference.

## Source Code

`main.js`:

```javascript
console.error("Hello, World!");
```

## Run

```bash
cd hello-worlds/javascript/0279-console-error
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序调用 `console.error` 函数完成输出 |
| output | `stderr` | 通过 `console.error` 写入标准错误流 |
| platform | `cli` | 在 Node.js 命令行运行 |
| era | `classic` | `console.error` 自早期 Node.js 即可用 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: console.error](https://developer.mozilla.org/en-US/docs/Web/API/console/error)
- [Node.js: Console](https://nodejs.org/api/console.html)
