---
id: 0316
language: javascript
paradigm: declarative
output: web
platform: browser
era: modern
tags: []
notes: "Shadow DOM: encapsulated greeting rendering."
author: ChidcGithub
date: 2026-07-21
---

# #0316 · DOM Shadow

## Description

A Hello World rendered inside a Shadow DOM root. A host `div` is created and attached to the body, then an open shadow root is attached to it and its `innerHTML` is set to the greeting paragraph. This entry demonstrates style and markup encapsulation: the rendered `<p>` lives in a scoped shadow tree isolated from the main document.

## Source Code

`main.js`:

```javascript
const host = document.createElement("div");
document.body.appendChild(host);
const shadow = host.attachShadow({ mode: "open" });
shadow.innerHTML = "<p>Hello, World!</p>";
```

## Run

Load `main.js` from an HTML page in a browser:

```bash
cd hello-worlds/javascript/0316-dom-shadow
# Include main.js in an HTML page and open in a browser.
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `declarative` | 声明式设置 shadow root 内容 |
| output | `web` | 渲染到 shadow DOM 网页 |
| platform | `browser` | 依赖浏览器 Shadow DOM API |
| era | `modern` | Shadow DOM v1 为现代 Web Components 标准 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Shadow DOM](https://developer.mozilla.org/en-US/docs/Web/API/Web_components/Using_shadow_DOM)
- [MDN: attachShadow](https://developer.mozilla.org/en-US/docs/Web/API/Element/attachShadow)
