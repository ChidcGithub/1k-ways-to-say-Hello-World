---
id: 0324
language: javascript
paradigm: procedural
output: stdout
platform: cloud
era: contemporary
tags: []
notes: "AWS Lambda handler style; simulates serverless function."
author: ChidcGithub
date: 2026-07-21
---

# #0324 · JavaScript Cloud Lambda Handler

## Description

Structured as an AWS Lambda handler: `exports.handler` is an `async` function accepting an `event` and returning a standard `{ statusCode, body }` response. A local verification line invokes the handler so the response can be observed without deploying to the cloud. This entry represents the serverless execution model where code runs on demand inside a managed runtime.

## Source Code

`main.js`:

```js
exports.handler = async (event) => {
    return { statusCode: 200, body: "Hello, World!" };
};
// Local verification
console.log(exports.handler(null));
```

## Run

```bash
cd hello-worlds/javascript/0324-cloud-lambda
node main.js
```

## Categorization

| 维度 | 取值 | 理由 |
|------|------|------|
| language | `javascript` | 主体逻辑语言为 JavaScript |
| paradigm | `procedural` | 导出处理函数并立即调用 |
| output | `stdout` | 本地验证通过 console.log 输出 |
| platform | `cloud` | 模拟 AWS Lambda 无服务器函数 |
| era | `contemporary` | 对应云原生/无服务器时代 |
| tags | `[]` | 无特殊技巧标记 |

## Reference

- [AWS Lambda Node.js Handler](https://docs.aws.amazon.com/lambda/latest/dg/nodejs-handler.html)
