---
id: 0302
language: javascript
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Curried function builds greeting step by step."
author: ChidcGithub
date: 2026-07-21
---

# #0302 · Curry Partial

## Description

A Hello World built from a curried function `a => b => c => \`${a}${b}${c}\``. Each argument is supplied one at a time, returning a new function expecting the next — illustrating currying and partial application as a way to build the greeting step by step.

## Source Code

`main.js`:

```js
const greet = a => b => c => `${a}${b}${c}`;
console.log(greet("Hello")(", World")("!"));
```

## Run

```bash
cd hello-worlds/0302-curry-partial
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 使用 ES6 箭头函数与模板字符串 |
| paradigm | `functional` | 以 currying 逐步应用参数 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 在终端通过 Node 运行 |
| era | `modern` | 箭头函数与模板字符串（ES2015+） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Arrow functions](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/Arrow_functions)
