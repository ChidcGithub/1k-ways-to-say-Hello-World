---
id: 0283
language: javascript
paradigm: procedural
output: web
platform: browser
era: classic
tags: []
notes: "DOM manipulation: sets innerHTML of an element with greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0283 · JavaScript DOM innerHTML

## Description

Uses DOM manipulation to set the `innerHTML` of an element with id `app` to the greeting string. Compared with `document.write` (which writes into the document stream during parsing), this approach locates an existing element after the DOM is constructed and updates its content, which is the more idiomatic classic-era pattern for interactive page updates. Under Node.js there is no DOM, but `node --check` only validates syntax.

## Source Code

`main.js`:

```javascript
document.getElementById("app").innerHTML = "Hello, World!";
```

## Run

Include in an HTML page that contains an element with id `app`:

```bash
cd hello-worlds/javascript/0283-dom-innerhtml
# Browser-only: there is no Node.js entry point.
# Example HTML usage:
#   <div id="app"></div>
#   <script src="main.js"></script>
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序调用 DOM API 完成赋值 |
| output | `web` | 输出渲染到网页元素内 |
| platform | `browser` | 运行于 Web 浏览器 |
| era | `classic` | 使用经典 DOM API（getElementById + innerHTML） |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: document.getElementById](https://developer.mozilla.org/en-US/docs/Web/API/Document/getElementById)
- [MDN: Element.innerHTML](https://developer.mozilla.org/en-US/docs/Web/API/Element/innerHTML)
