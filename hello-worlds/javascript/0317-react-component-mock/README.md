---
id: 0317
language: javascript
paradigm: declarative
output: web
platform: browser
era: contemporary
tags: []
notes: "Mock React component returning greeting JSX; declarative UI."
author: ChidcGithub
date: 2026-07-21
---

# #0317 · React Component Mock

## Description

A Hello World expressed as a mock React functional component. A minimal `React.createElement` shim produces a virtual element `{ tag, props, children }`, and a `Greeting` component returns an `h1` virtual node containing the greeting. This entry demonstrates the declarative UI paradigm—UI declared as a function of state—without bundling the actual React library.

## Source Code

`main.js`:

```javascript
// Mock React.createElement for syntax check
const React = { createElement: (tag, props, ...children) => ({ tag, props, children }) };
const h = React.createElement;
const Greeting = () => h("h1", null, "Hello, World!");
const result = Greeting();
console.log("React component would render:", result.children[0]);
```

## Run

```bash
cd hello-worlds/javascript/0317-react-component-mock
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `declarative` | 声明式 UI，组件返回虚拟节点 |
| output | `web` | 模拟浏览器端 React 渲染输出 |
| platform | `browser` | React 组件目标平台为浏览器 |
| era | `contemporary` | 函数组件 + Hooks 为当代 React 范式 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [React: createElement](https://react.dev/reference/react/createElement)
- [React: Components and Props](https://react.dev/learn/your-first-component)
