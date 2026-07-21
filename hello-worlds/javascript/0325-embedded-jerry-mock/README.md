---
id: 0325
language: javascript
paradigm: procedural
output: stdout
platform: embedded
era: modern
tags: []
notes: "Embedded JS engine (JerryScript) mock; simulates IoT device greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0325 · JavaScript Embedded JerryScript Mock

## Description

Mimics the environment of JerryScript—a lightweight JavaScript engine designed for microcontrollers and IoT devices. A local `print` shim prefixes output with `[JerryScript]:` to emulate constrained-device logging, then emits "Hello, World!". The mock runs under standard Node.js while illustrating how embedded JS runtimes expose a minimal `print` API instead of `console.log`.

## Source Code

`main.js`:

```js
// Mock JerryScript print for embedded environment
const print = (s) => console.log("[JerryScript]: " + s);
print("Hello, World!");
```

## Run

```bash
cd hello-worlds/javascript/0325-embedded-jerry-mock
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 定义 shim 后顺序调用 |
| output | `stdout` | 通过 console.log 输出 |
| platform | `embedded` | 模拟嵌入式 JS 引擎环境 |
| era | `modern` | 对应 IoT/边缘计算时代 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [JerryScript Project](https://jerryscript.net/)
