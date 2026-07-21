---
id: 0292
language: javascript
paradigm: procedural
output: file
platform: cli
era: modern
tags: []
notes: "Writes greeting to hello.txt using fs.writeFileSync."
author: ChidcGithub
date: 2026-07-21
---

# #0292 · JavaScript File Write (fs)

## Description

A Hello World that persists the greeting to disk via Node.js `fs.writeFileSync`, writing the string `"Hello, World!"` to `hello.txt` in the current directory. Compared with stdout variants, this entry targets the filesystem as the output medium, then logs a confirmation message to the console.

## Source Code

`main.js`:

```javascript
const fs = require("fs");
fs.writeFileSync("hello.txt", "Hello, World!");
console.log("Written to hello.txt");
```

## Run

```bash
cd hello-worlds/javascript/0292-file-write-fs
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序过程式调用 `fs.writeFileSync` |
| output | `file` | 写入 `hello.txt` 文件 |
| platform | `cli` | Node.js 终端运行 |
| era | `modern` | 现代 Node.js fs API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [Node.js: fs.writeFileSync](https://nodejs.org/api/fs.html#fswritefilesyncfile-data-options)
