---
id: 0285
language: javascript
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [code-golf]
notes: "Minimized JS Hello World; shortest viable form."
author: ChidcGithub
date: 2026-07-21
---

# #0285 · JavaScript Code Golf

## Description

A minimized JavaScript Hello World using `console.log` with the trailing semicolon omitted. ASI (Automatic Semicolon Insertion) makes the semicolon optional at end of file, so the program remains a single statement that prints "Hello, World!" followed by a newline. The source file is 28 characters long, making this the shortest viable form using only standard Node.js APIs.

## Source Code

`main.js` (28 characters):

```javascript
console.log("Hello, World!")
```

## Run

```bash
cd hello-worlds/javascript/0285-code-golf
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 单行调用 `console.log` 函数 |
| output | `stdout` | 通过 `console.log` 写入标准输出 |
| platform | `cli` | 在 Node.js 命令行运行 |
| era | `modern` | 依赖 ASI，属现代风格写法 |
| tags | `[code-golf]` | 以最短字符数为目标 |

## Reference

- [MDN: Automatic semicolon insertion](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Lexical_grammar#automatic_semicolon_insertion)
