---
id: 0310
language: javascript
paradigm: reactive
output: web
platform: browser
era: modern
tags: []
notes: "CustomEvent dispatch: greeting carried via custom DOM event."
author: ChidcGithub
date: 2026-07-21
---

# #0310 · Custom Event

## Description

A Hello World carried by a custom DOM event. A `CustomEvent` named `greet` is created with the greeting string as its `detail` payload; a registered listener then writes that payload into `document.body.innerHTML` when the event is dispatched. This entry showcases decoupled, message-driven DOM communication—producer and consumer interact only through a named event channel.

## Source Code

`main.js`:

```javascript
const event = new CustomEvent("greet", { detail: "Hello, World!" });
document.addEventListener("greet", (e) => {
    document.body.innerHTML = e.detail;
});
document.dispatchEvent(event);
```

## Run

Load `main.js` from an HTML page in a browser; the body will display "Hello, World!":

```bash
cd hello-worlds/javascript/0310-custom-event
# Include main.js in an HTML page and open in a browser.
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `reactive` | 通过 `dispatchEvent`/`addEventListener` 事件驱动 |
| output | `web` | 渲染到 `document.body` 网页 |
| platform | `browser` | 依赖浏览器 DOM 自定义事件 API |
| era | `modern` | `CustomEvent` 构造器为现代 DOM API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: CustomEvent](https://developer.mozilla.org/en-US/docs/Web/API/CustomEvent)
- [MDN: dispatchEvent](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/dispatchEvent)
