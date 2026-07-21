---
id: 0278
language: javascript
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "The canonical JavaScript Hello World using console.log (Node.js)."
author: ChidcGithub
date: 2026-07-21
---

# #0278 · JavaScript Console Log

## Description

The canonical JavaScript Hello World using `console.log` running on Node.js. This is the most widely recognized form of a JavaScript greeting: a single call to `console.log` writes the string literal to standard output followed by a newline. Compared with browser-based variants, this entry targets the Node.js CLI runtime, making `stdout` the primary output medium.

## Source Code

`main.js`:

```javascript
console.log("Hello, World!");
```

## Run

```bash
cd hello-worlds/javascript/0278-console-log
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序调用 `console.log` 函数完成输出 |
| output | `stdout` | 通过 `console.log` 写入标准输出 |
| platform | `cli` | 在 Node.js 命令行运行 |
| era | `classic` | `console.log` 自早期 Node.js 即可用 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: console.log](https://developer.mozilla.org/en-US/docs/Web/API/console/log)
- [Node.js: Console](https://nodejs.org/api/console.html)
