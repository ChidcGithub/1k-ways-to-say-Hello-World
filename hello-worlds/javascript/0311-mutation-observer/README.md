---
id: 0311
language: javascript
paradigm: reactive
output: web
platform: browser
era: modern
tags: []
notes: "MutationObserver reacts to DOM changes and displays greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0311 · Mutation Observer

## Description

A Hello World observed reactively through DOM mutations. A `MutationObserver` is attached to `document.body` watching for `childList` changes; when the body's `innerHTML` is set to the greeting, the observer's callback fires and logs the change. This entry demonstrates the browser's built-in reactive primitive for tracking DOM tree modifications.

## Source Code

`main.js`:

```javascript
const observer = new MutationObserver((mutations) => {
    console.log("DOM changed; greeting: Hello, World!");
});
observer.observe(document.body, { childList: true });
document.body.innerHTML = "Hello, World!";
```

## Run

Load `main.js` from an HTML page in a browser; the mutation observer fires when the body is updated:

```bash
cd hello-worlds/javascript/0311-mutation-observer
# Include main.js in an HTML page and open in a browser.
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `reactive` | 通过 `MutationObserver` 响应 DOM 变更 |
| output | `web` | 修改 `document.body` 网页渲染 |
| platform | `browser` | 依赖浏览器 MutationObserver API |
| era | `modern` | `MutationObserver` 为现代 DOM API (2012+) |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: MutationObserver](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver)
