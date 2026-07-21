---
id: 0326
language: javascript
paradigm: procedural
output: audio
platform: browser
era: modern
tags: []
notes: "Web Audio API: generates a tone encoding 'Hello, World!'."
author: ChidcGithub
date: 2026-07-21
---

# #0326 · JavaScript Web Audio

## Description

Uses the Web Audio API to create an `AudioContext`, wire an `OscillatorNode` to the output destination, and play a short tone. The greeting is announced via `console.log` as a textual companion to the audio signal. This entry treats sound—not text—as the primary output medium, representing the browser's real-time audio graph API.

## Source Code

`main.js`:

```js
const ctx = new (window.AudioContext || window.webkitAudioContext)();
const osc = ctx.createOscillator();
osc.connect(ctx.destination);
osc.start();
osc.stop(ctx.currentTime + 0.5);
console.log("Playing audio: Hello, World!");
```

## Run

Load `main.js` inside an HTML page opened in a browser (the Web Audio API is not available in Node.js):

```bash
cd hello-worlds/javascript/0326-audio-webaudio
# Load main.js inside an HTML page opened in a browser
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序：建上下文、连节点、启停 |
| output | `audio` | 通过 Web Audio 产生声音 |
| platform | `browser` | 依赖浏览器 Web Audio API |
| era | `modern` | 使用现代 Web Audio API |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [MDN: Web Audio API](https://developer.mozilla.org/en-US/docs/Web/API/Web_Audio_API)
