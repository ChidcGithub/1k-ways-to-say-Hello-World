---
id: 0327
language: javascript
paradigm: procedural
output: image
platform: browser
era: modern
tags: []
notes: "Canvas API: draws 'Hello, World!' text on a canvas element."
author: ChidcGithub
date: 2026-07-21
---

# #0327 · JavaScript Canvas Image

## Description

Creates an HTML `<canvas>` element via the DOM API, obtains a 2D rendering context, sets a font, and calls `fillText` to paint "Hello, World!" onto the bitmap before appending the canvas to the document body. The greeting exists as rendered pixels rather than text nodes, making `image` the primary output medium.

## Source Code

`main.js`:

```js
const canvas = document.createElement("canvas");
canvas.width = 200;
canvas.height = 50;
const ctx = canvas.getContext("2d");
ctx.font = "20px Arial";
ctx.fillText("Hello, World!", 10, 30);
document.body.appendChild(canvas);
console.log("Canvas rendered: Hello, World!");
```

## Run

Load `main.js` inside an HTML page opened in a browser (the Canvas and DOM APIs are not available in Node.js):

```bash
cd hello-worlds/javascript/0327-image-canvas
# Load main.js inside an HTML page opened in a browser
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序：建画布、设字体、绘制、挂载 |
| output | `image` | 通过 Canvas 绘制像素 |
| platform | `browser` | 依赖浏览器 DOM 与 Canvas API |
| era | `modern` | 使用现代 Canvas 2D API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Canvas API](https://developer.mozilla.org/en-US/docs/Web/API/Canvas_API)
