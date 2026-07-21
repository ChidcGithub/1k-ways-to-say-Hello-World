---
id: 0315
language: javascript
paradigm: declarative
output: web
platform: browser
era: modern
tags: []
notes: "Declarative template literal HTML rendering."
author: ChidcGithub
date: 2026-07-21
---

# #0315 · Declarative Template

## Description

A Hello World rendered via an ES2015 template literal. A backtick string declares the markup for a `#greeting` div, which is then assigned to `document.body.innerHTML` for declarative rendering. Compared with `document.write`, this entry uses the modern tagged-template-friendly literal syntax and the DOM's `innerHTML` setter, separating the declaration of structure from its insertion.

## Source Code

`main.js`:

```javascript
const html = `<div id="greeting">Hello, World!</div>`;
document.body.innerHTML = html;
```

## Run

Load `main.js` from an HTML page in a browser:

```bash
cd hello-worlds/javascript/0315-declarative-template
# Include main.js in an HTML page and open in a browser.
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `declarative` | 模板字符串声明 HTML 结构 |
| output | `web` | 通过 `innerHTML` 渲染到网页 |
| platform | `browser` | 依赖浏览器 DOM API |
| era | `modern` | ES2015 模板字符串为现代语法 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Template literals](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals)
- [MDN: Element.innerHTML](https://developer.mozilla.org/en-US/docs/Web/API/Element/innerHTML)
