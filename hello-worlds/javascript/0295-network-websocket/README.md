---
id: 0295
language: javascript
paradigm: procedural
output: network
platform: cli
era: contemporary
tags: []
notes: "Uses WebSocket to send greeting; contemporary web standard."
author: ChidcGithub
date: 2026-07-21
---

# #0295 · JavaScript Network WebSocket

## Description

A Hello World sent over a WebSocket connection. A `WebSocket` is opened to `ws://localhost:8080`; on `onopen` the greeting is sent with `ws.send("Hello, World!")`, and on `onerror` the greeting is printed as a fallback. WebSockets represent the contemporary bidirectional web standard (RFC 6455, 2011), distinct from request/response HTTP.

## Source Code

`main.js`:

```javascript
// Browser WebSocket API (also available in Node.js with ws package)
// For syntax check, this is valid JS
const ws = new WebSocket("ws://localhost:8080");
ws.onopen = () => { ws.send("Hello, World!"); console.log("Sent via WebSocket"); };
ws.onerror = () => { console.log("Server not available; greeting: Hello, World!"); };
```

## Run

```bash
cd hello-worlds/javascript/0295-network-websocket
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序过程式绑定事件回调 |
| output | `network` | 通过 WebSocket 发送到网络 |
| platform | `cli` | Node.js 终端运行（也兼容浏览器） |
| era | `contemporary` | WebSocket 为当代（2011+）web 标准 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: WebSocket](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket)
