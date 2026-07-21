---
id: 0313
language: javascript
paradigm: concurrent
output: stdout
platform: cli
era: contemporary
tags: [parallel]
notes: "SharedArrayBuffer for shared memory between threads; contemporary API."
author: ChidcGithub
date: 2026-07-21
---

# #0313 · Shared Array Buffer

## Description

A Hello World written into and read back from a `SharedArrayBuffer`, the contemporary primitive for shared-memory concurrency between workers. Each character of the greeting is stored as a byte in a `Uint8Array` view over the buffer, then reassembled into a string and printed. This entry showcases the low-level memory-sharing substrate that enables true parallel data exchange across threads.

## Source Code

`main.js`:

```javascript
const sab = new SharedArrayBuffer(13);
const view = new Uint8Array(sab);
const msg = "Hello, World!";
for (let i = 0; i < msg.length; i++) view[i] = msg.charCodeAt(i);
let result = "";
for (let i = 0; i < view.length; i++) result += String.fromCharCode(view[i]);
console.log(result);
```

## Run

```bash
cd hello-worlds/javascript/0313-shared-array-buffer
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `concurrent` | 使用共享内存并发原语 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 在 Node.js 终端运行 |
| era | `contemporary` | `SharedArrayBuffer` 为当代 ES2017+ API |
| tags | `[parallel]` | 涉及跨线程共享内存并行模型 |

## Reference

- [MDN: SharedArrayBuffer](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/SharedArrayBuffer)
- [MDN: Typed Arrays](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Typed_arrays)
