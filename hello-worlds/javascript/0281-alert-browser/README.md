---
id: 0281
language: javascript
paradigm: procedural
output: gui
platform: browser
era: vintage
tags: []
notes: "Browser alert() dialog showing greeting; vintage ES1-era browser API."
author: ChidcGithub
date: 2026-07-21
---

# #0281 · JavaScript Alert Browser

## Description

Uses the browser `alert()` function to display the greeting in a modal dialog. This is a vintage ES1-era browser API that has been available since the earliest JavaScript-capable browsers. The greeting appears in a GUI dialog rather than on the console or page, making `gui` the primary output medium. Note that this code runs in the browser; under Node.js, `alert` is not defined, but `node --check` only validates syntax and will pass because `alert` is treated as an unresolved function call.

## Source Code

`main.js`:

```javascript
alert("Hello, World!");
```

## Run

Embed in an HTML page and open in a browser, or paste into the browser DevTools console:

```bash
cd hello-worlds/javascript/0281-alert-browser
# Browser-only: there is no Node.js entry point.
# Open the browser DevTools console and run:
#     alert("Hello, World!");
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序调用 `alert` 函数完成输出 |
| output | `gui` | 通过浏览器模态对话框展示 |
| platform | `browser` | 运行于 Web 浏览器 |
| era | `vintage` | `alert` 属 ES1 (1997) 时代 API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: window.alert](https://developer.mozilla.org/en-US/docs/Web/API/Window/alert)
