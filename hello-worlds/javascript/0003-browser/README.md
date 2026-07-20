---
id: 0003
language: javascript
paradigm: declarative
output: web
platform: browser
era: modern
tags: []
notes: "No build step; open the HTML file directly in any browser."
author: ChidcGithub
date: 2026-07-20
---

# #0003 · JavaScript Browser

## Description

A Hello World rendered in the browser via `document.body.textContent`. A single inline `<script>` writes the string directly into the document body, so the page paints "Hello, World!" with no DOM scaffolding, no framework, and no build step. Compared with a `console.log` variant, this entry surfaces the text in the rendered page itself, making `web` the primary output medium.

## Source Code

`index.html`:

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>Hello, World!</title>
</head>
<body>
    <script>
        document.body.textContent = "Hello, World!";
    </script>
</body>
</html>
```

## Run

Open the HTML file directly in any browser (no server, no build step):

```bash
cd hello-worlds/0003-javascript-browser
start index.html        # Windows
open index.html         # macOS
xdg-open index.html     # Linux
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `declarative` | 通过赋值声明 body 内容，描述"是什么"而非"怎么做" |
| output | `web` | 由浏览器渲染到网页 |
| platform | `browser` | 运行于 Web 浏览器 |
| era | `modern` | 使用现代浏览器 DOM API（2001–2020 区间） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: document.body](https://developer.mozilla.org/en-US/docs/Web/API/Document/body)
- [MDN: Node.textContent](https://developer.mozilla.org/en-US/docs/Web/API/Node/textContent)
