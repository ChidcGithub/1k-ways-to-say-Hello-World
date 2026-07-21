---
id: 0318
language: javascript
paradigm: procedural
output: ascii-art
platform: cli
era: modern
tags: [ascii-art]
notes: "Prints 'HELLO WORLD' as a 3-line ASCII art banner using # characters."
author: ChidcGithub
date: 2026-07-21
---

# #0318 · JavaScript ASCII Art

## Description

Prints "HELLO WORLD" as a 3-line ASCII art banner composed of `#` characters. Each letter is hand-encoded as a column pattern in a string array, then emitted to stdout via `console.log`. Unlike a plain-text greeting, this entry treats the terminal as a fixed-width canvas, emphasizing visual output over textual content.

## Source Code

`main.js`:

```js
const art = [
    "#   #  #   #  #   #  #   #    #     #   #  #   #  #   #  #   #  #   #",
    "#####  #   #  #      #   #    #     #####  #   #  #      #   #  #   #",
    "#   #  #####  #      #   #    #     #   #  #####  #      #   #  #####"
];
art.forEach(line => console.log(line));
```

## Run

```bash
cd hello-worlds/javascript/0318-ascii-art
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 顺序遍历数组并逐行打印 |
| output | `ascii-art` | 以 ASCII 字符画形式输出 |
| platform | `cli` | 终端运行 |
| era | `modern` | 使用现代 ES6+ 语法 |
| tags | `[ascii-art]` | 核心特征为字符画 banner |

## Reference

- [MDN: Array.prototype.forEach](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/forEach)
