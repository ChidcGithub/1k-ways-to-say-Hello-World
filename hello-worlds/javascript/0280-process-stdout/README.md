---
id: 0280
language: javascript
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses process.stdout.write for raw stdout output without newline."
author: ChidcGithub
date: 2026-07-21
---

# #0280 · JavaScript Process Stdout

## Description

Uses `process.stdout.write` to write the greeting directly to the stdout stream. Unlike `console.log`, which appends a trailing newline, `process.stdout.write` performs a raw write, so the newline must be supplied explicitly. This entry demonstrates the lower-level Node.js stream API rather than the convenience wrapper.

## Source Code

`main.js`:

```javascript
process.stdout.write("Hello, World!\n");
```

## Run

```bash
cd hello-worlds/javascript/0280-process-stdout
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序调用 `process.stdout.write` 完成输出 |
| output | `stdout` | 通过 `process.stdout` 写入标准输出 |
| platform | `cli` | 在 Node.js 命令行运行 |
| era | `modern` | 使用现代 Node.js Streams API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [Node.js: process.stdout](https://nodejs.org/api/process.html#processstdout)
- [Node.js: Stream API](https://nodejs.org/api/stream.html)
