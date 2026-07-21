---
id: 0296
language: javascript
paradigm: procedural
output: network
platform: browser
era: modern
tags: []
notes: "Browser fetch() API to POST greeting to a URL."
author: ChidcGithub
date: 2026-07-21
---

# #0296 · JavaScript Fetch API

## Description

A Hello World sent via the browser `fetch()` API, POSTing `"Hello, World!"` to `http://localhost:8080`. A `.then()` confirms success and a `.catch()` falls back to printing the greeting when no server is reachable. The `fetch` API is the modern promise-based replacement for `XMLHttpRequest`, standardized from 2015 onward.

## Source Code

`main.js`:

```javascript
fetch("http://localhost:8080", { method: "POST", body: "Hello, World!" })
    .then(() => console.log("Sent via fetch"))
    .catch(() => console.log("Server not available; greeting: Hello, World!"));
```

## Run

```bash
cd hello-worlds/javascript/0296-fetch-api
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序过程式调用 fetch + Promise 链 |
| output | `network` | 通过 HTTP POST 发送到网络 |
| platform | `browser` | fetch 为浏览器原生 API |
| era | `modern` | fetch API 为现代（2015+）标准 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: fetch](https://developer.mozilla.org/en-US/docs/Web/API/fetch)
