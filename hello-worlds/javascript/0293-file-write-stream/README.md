---
id: 0293
language: javascript
paradigm: procedural
output: file
platform: cli
era: modern
tags: []
notes: "Uses fs.createWriteStream to write greeting to file."
author: ChidcGithub
date: 2026-07-21
---

# #0293 · JavaScript File Write Stream

## Description

A Hello World written to `hello.txt` using Node.js `fs.createWriteStream`. The greeting is streamed via `ws.write(...)` and the stream is closed with `ws.end()`; the `"finish"` event then logs a confirmation. Compared with the synchronous `writeFileSync` variant, this entry showcases Node's streaming I/O model suitable for larger or chunked writes.

## Source Code

`main.js`:

```javascript
const fs = require("fs");
const ws = fs.createWriteStream("hello.txt");
ws.write("Hello, World!");
ws.end();
ws.on("finish", () => console.log("Written to hello.txt"));
```

## Run

```bash
cd hello-worlds/javascript/0293-file-write-stream
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序过程式调用流 API |
| output | `file` | 写入 `hello.txt` 文件 |
| platform | `cli` | Node.js 终端运行 |
| era | `modern` | 现代 Node.js Streams API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [Node.js: fs.createWriteStream](https://nodejs.org/api/fs.html#fscreatewritestreampath-options)
