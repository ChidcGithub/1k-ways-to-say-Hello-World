---
id: 0321
language: javascript
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Obfuscated: constructs greeting from Unicode escape sequences."
author: ChidcGithub
date: 2026-07-21
---

# #0321 · JavaScript Unicode Obfuscation

## Description

The greeting string is assembled entirely from `\uXXXX` Unicode escape sequences rather than literal characters. The JavaScript lexer resolves these escapes at parse time, so `console.log` receives the plain string "Hello, World!"—but a casual reader of the source sees only hex code points. This demonstrates how the language's string literal grammar can obscure intent without any runtime decoding step.

## Source Code

`main.js`:

```js
console.log("\u0048\u0065\u006c\u006c\u006f\u002c\u0020\u0057\u006f\u0072\u006c\u0064\u0021");
```

## Run

```bash
cd hello-worlds/javascript/0321-obfuscated-unicode
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 单语句调用 |
| output | `stdout` | 通过 console.log 输出 |
| platform | `cli` | 终端运行 |
| era | `modern` | 使用 ES 标准 Unicode 转义 |
| tags | `[obfuscated]` | 通过转义序列隐藏文本 |

## Reference

- [MDN: JavaScript lexical grammar - Unicode escapes](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Lexical_grammar#unicode_escapes)
