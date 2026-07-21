---
id: 0322
language: javascript
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Obfuscated: greeting encoded as char codes, decoded via String.fromCharCode and eval."
author: ChidcGithub
date: 2026-07-21
---

# #0322 · JavaScript Char-Code Eval Obfuscation

## Description

The source contains no readable text—only an array of integers. Each integer is an ASCII code point; `String.fromCharCode(...codes)` reconstructs the string `console.log("Hello, World!")`, which `eval` then executes. This pattern mirrors a classic obfuscation technique where payload logic is hidden behind numeric indirection and dynamic evaluation.

## Source Code

`main.js`:

```js
const codes = [99,111,110,115,111,108,101,46,108,111,103,40,34,72,101,108,108,111,44,32,87,111,114,108,100,33,34,41];
eval(String.fromCharCode(...codes));
```

## Run

```bash
cd hello-worlds/javascript/0322-obfuscated-eval
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序：构造字符串并 eval |
| output | `stdout` | 由 eval 执行的 console.log 输出 |
| platform | `cli` | 终端运行 |
| era | `modern` | 使用 ES6 展开语法 |
| tags | `[obfuscated]` | 通过字符码与 eval 隐藏意图 |

## Reference

- [MDN: String.fromCharCode](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/fromCharCode)
- [MDN: eval](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/eval)
