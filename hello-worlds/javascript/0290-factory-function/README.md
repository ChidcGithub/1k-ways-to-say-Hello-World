---
id: 0290
language: javascript
paradigm: oop
output: stdout
platform: cli
era: classic
tags: []
notes: "Factory function pattern returning an object with greet method."
author: ChidcGithub
date: 2026-07-21
---

# #0290 · JavaScript Factory Function

## Description

A Hello World using the factory function pattern: `createGreeter()` returns a fresh object literal with a `greet()` method, and the result is invoked immediately. Unlike `new`-based constructors, factory functions avoid `this` binding pitfalls and `new.target` subtleties — a classic JavaScript idiom popularized by Douglas Crockford.

## Source Code

`main.js`:

```javascript
function createGreeter() { return { greet() { console.log("Hello, World!"); } }; }
createGreeter().greet();
```

## Run

```bash
cd hello-worlds/javascript/0290-factory-function
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `oop` | 通过工厂函数返回对象封装行为 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | Node.js 终端运行 |
| era | `classic` | 工厂函数模式为 JS 经典（2008+）写法 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Working with objects](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Working_with_objects)
