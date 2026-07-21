---
id: 0291
language: javascript
paradigm: oop
output: stdout
platform: cli
era: classic
tags: []
notes: "Singleton pattern via module-scoped instance."
author: ChidcGithub
date: 2026-07-21
---

# #0291 · JavaScript Singleton Pattern

## Description

A Hello World implementing the Singleton pattern via an IIFE module. The outer `Greeter` holds a module-scoped `instance` variable; `getInstance()` lazily creates the object on first call and reuses it thereafter. This IIFE-module idiom was the standard way to namespace and gate object creation before ES modules and `class` singletons.

## Source Code

`main.js`:

```javascript
const Greeter = (function() {
    let instance;
    function create() { return { greet() { console.log("Hello, World!"); } }; }
    return { getInstance() { if (!instance) instance = create(); return instance; } };
})();
Greeter.getInstance().greet();
```

## Run

```bash
cd hello-worlds/javascript/0291-singleton-pattern
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `oop` | 使用单例模式封装对象创建 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | Node.js 终端运行 |
| era | `classic` | IIFE 模块模式为 ES6 前经典写法 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: IIFE](https://developer.mozilla.org/en-US/docs/Glossary/IIFE)
