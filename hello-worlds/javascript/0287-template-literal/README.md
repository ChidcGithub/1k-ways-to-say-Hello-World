---
id: 0287
language: javascript
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses ES6 template literal (backticks) for greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0287 · JavaScript Template Literal

## Description

Uses an ES6 template literal (backticks) to interpolate the target into the greeting string. The variable `target` is declared with `const` and substituted into the template via `${target}`. Compared with string concatenation (`"Hello, " + target + "!"`), the template literal reads more like the final output and demonstrates the modern ES6 (2015) string syntax.

## Source Code

`main.js`:

```javascript
const target = "World";
console.log(`Hello, ${target}!`);
```

## Run

```bash
cd hello-worlds/javascript/0287-template-literal
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序声明与调用完成输出 |
| output | `stdout` | 通过 `console.log` 写入标准输出 |
| platform | `cli` | 在 Node.js 命令行运行 |
| era | `modern` | 使用 ES6 模板字符串 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Template literals](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals)
