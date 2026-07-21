---
id: 0314
language: javascript
paradigm: declarative
output: web
platform: browser
era: vintage
tags: []
notes: "Declarative HTML with inline JS; pure markup approach."
author: ChidcGithub
date: 2026-07-21
---

# #0314 · Declarative HTML

## Description

A Hello World emitted through the vintage `document.write` API. A single call injects an `<h1>` element directly into the document stream during parsing, treating the HTML markup as a declarative string. Compared with modern DOM manipulation, this entry harks back to the pre-DOM-scripting era where inline scripts wrote literal markup into the page.

## Source Code

`main.js`:

```javascript
document.write("<h1>Hello, World!</h1>");
```

## Run

Load `main.js` during page parse in a browser (must run before the document finishes loading):

```bash
cd hello-worlds/javascript/0314-declarative-html
# Include main.js inline in an HTML page during initial parse.
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `declarative` | 直接声明要写入的 HTML 标记字符串 |
| output | `web` | 写入文档流，由浏览器渲染 |
| platform | `browser` | 依赖浏览器 `document.write` API |
| era | `vintage` | `document.write` 为早期 Web 1.0 风格 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: document.write](https://developer.mozilla.org/en-US/docs/Web/API/Document/write)
