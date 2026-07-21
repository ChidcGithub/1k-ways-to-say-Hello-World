---
id: 0284
language: javascript
paradigm: procedural
output: gui
platform: browser
era: classic
tags: []
notes: "Browser prompt() dialog; displays greeting in input dialog."
author: ChidcGithub
date: 2026-07-21
---

# #0284 · JavaScript Prompt GUI

## Description

Uses the browser `prompt()` function to display the greeting in an input dialog. Like `alert`, `prompt` is a GUI dialog API; unlike `alert`, the message appears above a text input field that the user can fill in (and whose return value is ignored here). The greeting is shown in a GUI dialog rather than on the page, making `gui` the primary output medium. Under Node.js, `prompt` is undefined, but `node --check` only validates syntax.

## Source Code

`main.js`:

```javascript
prompt("Hello, World!");
```

## Run

Embed in an HTML page and open in a browser, or paste into the browser DevTools console:

```bash
cd hello-worlds/javascript/0284-prompt-gui
# Browser-only: there is no Node.js entry point.
# Open the browser DevTools console and run:
#     prompt("Hello, World!");
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序调用 `prompt` 函数完成输出 |
| output | `gui` | 通过浏览器输入对话框展示 |
| platform | `browser` | 运行于 Web 浏览器 |
| era | `classic` | `prompt` 属经典浏览器 API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: window.prompt](https://developer.mozilla.org/en-US/docs/Web/API/Window/prompt)
