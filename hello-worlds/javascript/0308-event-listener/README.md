---
id: 0308
language: javascript
paradigm: reactive
output: stdout
platform: browser
era: classic
tags: []
notes: "Event listener pattern: greeting displayed on DOMContentLoaded."
author: ChidcGithub
date: 2026-07-21
---

# #0308 · Event Listener

## Description

A Hello World wired through the browser's event system. The greeting is logged to the console only after the `DOMContentLoaded` event fires, illustrating the reactive pattern of registering a handler that runs in response to a lifecycle event rather than executing immediately. Compared with an inline `console.log`, this entry demonstrates deferring execution until the document is parse-ready.

## Source Code

`main.js`:

```javascript
document.addEventListener("DOMContentLoaded", () => {
    console.log("Hello, World!");
});
```

## Run

Open a browser console with this script loaded, or include it in an HTML page:

```bash
cd hello-worlds/javascript/0308-event-listener
# Load main.js from an HTML page in a browser; the message appears in the console.
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `reactive` | 通过事件监听器响应 `DOMContentLoaded` 事件 |
| output | `stdout` | 通过 `console.log` 输出到控制台 |
| platform | `browser` | 依赖浏览器 DOM 事件 API |
| era | `classic` | `DOMContentLoaded` 为早期经典 Web API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: DOMContentLoaded](https://developer.mozilla.org/en-US/docs/Web/API/Document/DOMContentLoaded_event)
- [MDN: addEventListener](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/addEventListener)
