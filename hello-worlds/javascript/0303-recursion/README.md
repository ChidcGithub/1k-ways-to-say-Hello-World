---
id: 0303
language: javascript
paradigm: functional
output: stdout
platform: cli
era: classic
tags: []
notes: "Recursive function prints greeting char by char."
author: ChidcGithub
date: 2026-07-21
---

# #0303 · Recursion

## Description

A Hello World printed character by character via a recursive function. `printRec` writes one character through `process.stdout.write` then calls itself with the next index until the string is exhausted, where it emits a trailing newline. This demonstrates the classic recursion-with-base-case pattern.

## Source Code

`main.js`:

```js
function printRec(s, i) {
    if (i >= s.length) { console.log(); return; }
    process.stdout.write(s[i]);
    printRec(s, i + 1);
}
printRec("Hello, World!", 0);
```

## Run

```bash
cd hello-worlds/0303-recursion
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 使用函数声明与 `process.stdout` |
| paradigm | `functional` | 以递归替代循环完成遍历 |
| output | `stdout` | 通过 `process.stdout.write` 输出 |
| platform | `cli` | 在终端通过 Node 运行 |
| era | `classic` | 递归与函数声明为经典范式 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: process.stdout](https://nodejs.org/api/process.html#processstdout)
