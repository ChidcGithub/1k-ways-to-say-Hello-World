---
id: 0312
language: javascript
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "Web Worker mock: simulates parallel computation of greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0312 · Worker Parallel

## Description

A Hello World computed in a background thread via the Web Worker API. Worker source code is embedded as a string, wrapped in a `Blob`, and instantiated from an object URL. The main thread sends `postMessage("start")`, the worker replies with `postMessage("Hello, World!")`, and the main thread logs and terminates the worker—illustrating parallel message-passing between threads.

## Source Code

`main.js`:

```javascript
// Mock Web Worker for Node.js syntax check
const workerCode = `self.onmessage = (e) => { self.postMessage("Hello, World!"); };`;
const blob = new Blob([workerCode]);
const worker = new Worker(URL.createObjectURL(blob));
worker.onmessage = (e) => { console.log(e.data); worker.terminate(); };
worker.postMessage("start");
```

## Run

Load `main.js` in a browser context that supports `Worker` and `Blob`:

```bash
cd hello-worlds/javascript/0312-worker-parallel
# Run in a browser environment; workers are not available in plain Node.js.
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `concurrent` | 通过 Web Worker 在独立线程并发执行 |
| output | `stdout` | 通过 `console.log` 输出 |
| platform | `cli` | 设计为脚本化运行环境 |
| era | `modern` | Web Worker API 为现代 Web 标准 |
| tags | `[parallel]` | 利用多线程并行消息传递 |

## Reference

- [MDN: Web Workers API](https://developer.mozilla.org/en-US/docs/Web/API/Web_Workers_API)
- [MDN: URL.createObjectURL](https://developer.mozilla.org/en-US/docs/Web/API/URL/createObjectURL)
