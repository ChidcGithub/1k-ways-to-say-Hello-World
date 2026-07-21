---
id: 0289
language: javascript
paradigm: oop
output: stdout
platform: cli
era: vintage
tags: []
notes: "Pre-ES6 prototype-based OOP; constructor function with prototype method."
author: ChidcGithub
date: 2026-07-21
---

# #0289 · JavaScript Prototype OOP

## Description

A Hello World using pre-ES6 prototype-based OOP — a constructor function `Greeter` whose `greet()` method is attached to `Greeter.prototype` so it is shared across all instances. This is the classic JavaScript OOP style before ES6 `class` syntax sugar, reflecting how the language modeled objects throughout the 1995–2015 era.

## Source Code

`main.js`:

```javascript
function Greeter() {}
Greeter.prototype.greet = function() { console.log("Hello, World!"); };
new Greeter().greet();
```

## Run

```bash
cd hello-worlds/javascript/0289-prototype-oop
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `oop` | 通过构造函数 + prototype 方法实现面向对象 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | Node.js 终端运行 |
| era | `vintage` | 原型链 OOP 属 ES6 之前（1995–2015） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Inheritance and the prototype chain](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Inheritance_and_the_prototype_chain)
