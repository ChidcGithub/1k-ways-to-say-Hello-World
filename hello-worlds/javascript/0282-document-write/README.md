---
id: 0282
language: javascript
paradigm: procedural
output: web
platform: browser
era: vintage
tags: []
notes: "Browser document.write() to render greeting on page; vintage web."
author: ChidcGithub
date: 2026-07-21
---

# #0282 · JavaScript Document Write

## Description

Uses the browser `document.write()` API to render the greeting directly into the page during parsing. This is a vintage web-era API that writes content into the document stream. The greeting appears inline in the rendered page rather than in a dialog or console, making `web` the primary output medium. Note that `document.write` only works while the document is being parsed; under Node.js it is undefined, but `node --check` only validates syntax.

## Source Code

`main.js`:

```javascript
document.write("Hello, World!");
```

## Run

Embed in an HTML page and open in a browser, or paste into the browser DevTools console during page load:

```bash
cd hello-worlds/javascript/0282-document-write
# Browser-only: there is no Node.js entry point.
# Example HTML usage:
#   <script src="main.js"></script>
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序调用 `document.write` 完成输出 |
| output | `web` | 输出渲染到网页文档流 |
| platform | `browser` | 运行于 Web 浏览器 |
| era | `vintage` | `document.write` 属早期 web API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: document.write](https://developer.mozilla.org/en-US/docs/Web/API/Document/write)
