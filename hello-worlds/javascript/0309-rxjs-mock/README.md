---
id: 0309
language: javascript
paradigm: reactive
output: stdout
platform: cli
era: modern
tags: []
notes: "Reactive stream mock: simulates RxJS Observable emitting greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0309 · RxJS Mock

## Description

A Hello World emitted through a mock reactive stream. A tiny `Observable.from(...)` shim mimics RxJS by pushing each array element through an observer's `next` callback and signaling `complete` at the end. The greeting is thus assembled piece-by-piece via `process.stdout.write`, with a final newline on completion, demonstrating the push-based reactive model without an external dependency.

## Source Code

`main.js`:

```javascript
// Mock RxJS Observable
const Observable = {
    from: (arr) => ({
        subscribe: (observer) => {
            arr.forEach(item => observer.next(item));
            observer.complete();
        }
    })
};
Observable.from(["Hello", ", ", "World!"]).subscribe({
    next: s => process.stdout.write(s),
    complete: () => console.log()
});
```

## Run

```bash
cd hello-worlds/javascript/0309-rxjs-mock
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `reactive` | 模拟 RxJS Observable/Observer 推模型 |
| output | `stdout` | 通过 `process.stdout.write` 输出 |
| platform | `cli` | 在 Node.js 终端运行 |
| era | `modern` | RxJS 风格响应式编程属现代范式 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [RxJS: Observable](https://rxjs.dev/guide/observable)
- [Reactive Manifesto](https://www.reactivemanifesto.org/)
