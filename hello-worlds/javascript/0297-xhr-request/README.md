---
id: 0297
language: javascript
paradigm: procedural
output: network
platform: browser
era: vintage
tags: []
notes: "XMLHttpRequest to send greeting; vintage AJAX pattern."
author: ChidcGithub
date: 2026-07-21
---

# #0297 · JavaScript XHR Request

## Description

A Hello World sent via `XMLHttpRequest` — the original AJAX mechanism that powered the Web 2.0 era. An `XHR` instance is opened in async mode, POSTs `"Hello, World!"` to `http://localhost:8080`, and logs a confirmation when `readyState === 4`. This entry showcases the vintage callback-driven pattern that predated `fetch` and Promises.

## Source Code

`main.js`:

```javascript
const xhr = new XMLHttpRequest();
xhr.open("POST", "http://localhost:8080", true);
xhr.onreadystatechange = function() {
    if (xhr.readyState === 4) console.log("Sent via XHR");
};
xhr.send("Hello, World!");
```

## Run

```bash
cd hello-worlds/javascript/0297-xhr-request
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序过程式调用 XHR + 回调 |
| output | `network` | 通过 HTTP POST 发送到网络 |
| platform | `browser` | XHR 为浏览器原生 API |
| era | `vintage` | XMLHttpRequest 属 Web 2.0 时期（2000s） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: XMLHttpRequest](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest)
