---
id: 0288
language: javascript
paradigm: oop
output: stdout
platform: cli
era: modern
tags: []
notes: "ES6 class with greet() method."
author: ChidcGithub
date: 2026-07-21
---

# #0288 · JavaScript Class OOP

## Description

A Hello World implemented with an ES6 `class` declaration. A `Greeter` class exposes a `greet()` method that writes the string to stdout via `console.log`, and a one-shot instance is created with `new Greeter().greet()`. Compared with a free-floating `console.log` variant, this entry packages behavior behind a class instance — the canonical object-oriented entry point introduced with ES6 (2015).

## Source Code

`main.js`:

```javascript
class Greeter { greet() { console.log("Hello, World!"); } }
new Greeter().greet();
```

## Run

```bash
cd hello-worlds/javascript/0288-class-oop
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `oop` | 使用 ES6 class 与实例方法 |
| output | `stdout` | 通过 `console.log` 输出到标准输出 |
| platform | `cli` | Node.js 终端运行 |
| era | `modern` | ES6 class（2015 起） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Classes](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Classes)
