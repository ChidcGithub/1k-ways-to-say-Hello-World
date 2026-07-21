---
id: 0294
language: javascript
paradigm: procedural
output: network
platform: cli
era: modern
tags: []
notes: "Uses Node.js http module to send greeting via HTTP POST."
author: ChidcGithub
date: 2026-07-21
---

# #0294 · JavaScript Network HTTP

## Description

A Hello World transmitted over the network using Node.js `http.request`. The script POSTs `"Hello, World!"` to `localhost:8080` and logs a confirmation on response; an `error` handler falls back to printing the greeting if no server is listening. This entry uses the network as its output medium rather than stdout or a file.

## Source Code

`main.js`:

```javascript
const http = require("http");
const req = http.request({ hostname: "localhost", port: 8080, method: "POST" }, (res) => {
    console.log("Sent HTTP request: Hello, World!");
});
req.on("error", () => { console.log("Server not available; greeting: Hello, World!"); });
req.write("Hello, World!");
req.end();
```

## Run

```bash
cd hello-worlds/javascript/0294-network-http
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序过程式调用 http API |
| output | `network` | 通过 HTTP POST 发送到网络 |
| platform | `cli` | Node.js 终端运行 |
| era | `modern` | 现代 Node.js http API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [Node.js: http.request](https://nodejs.org/api/http.html#httprequestoptions-callback)
