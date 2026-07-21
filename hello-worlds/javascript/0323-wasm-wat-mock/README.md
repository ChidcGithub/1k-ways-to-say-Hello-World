---
id: 0323
language: javascript
paradigm: procedural
output: stdout
platform: wasm
era: contemporary
tags: []
notes: "WebAssembly mock: simulates calling a WASM module that returns greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0323 · JavaScript WASM Mock

## Description

Simulates the shape of a real WebAssembly interaction: a module object exposes an `exports` bag, and host code invokes an exported `greet` function to obtain "Hello, World!". The module here is a plain JS object standing in for an actual `WebAssembly.Module` instance, illustrating the call boundary without the WAT compilation step.

## Source Code

`main.js`:

```js
// Mock WASM module
const wasmModule = {
    exports: {
        greet: () => "Hello, World!"
    }
};
console.log(wasmModule.exports.greet());
```

## Run

```bash
cd hello-worlds/javascript/0323-wasm-wat-mock
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序：定义模块并调用导出函数 |
| output | `stdout` | 通过 console.log 输出 |
| platform | `wasm` | 模拟 WebAssembly 模块调用 |
| era | `contemporary` | 对应 WASM 时代（2017+） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: WebAssembly.Module](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/WebAssembly/Module)
