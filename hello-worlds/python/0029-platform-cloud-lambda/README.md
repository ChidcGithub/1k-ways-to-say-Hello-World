---
id: 0029
language: python
paradigm: procedural
output: stdout
platform: cloud
era: contemporary
tags: []
notes: "AWS Lambda handler style: def lambda_handler(event, context) returns the greeting; a local test harness invokes it."
author: ChidcGithub
date: 2026-07-20
---

# #0029 · Python Platform Cloud Lambda

## Description

An AWS Lambda-style Hello World. The entry point is the conventional `lambda_handler(event, context)` function that returns the greeting string. A small local test harness under `__main__` simulates an invocation so the file runs as a normal script on any CPython interpreter while still being deployable to AWS Lambda unchanged.

## Source Code

`main.py`:

```python
def lambda_handler(event, context):
    return "Hello, World!"


if __name__ == "__main__":
    result = lambda_handler({}, None)
    print(result)
```

## Run

```bash
cd hello-worlds/python/0029-platform-cloud-lambda
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only |
| paradigm | `procedural` | A function and a sequential `__main__` block; no classes or closures |
| output | `stdout` | The harness `print()`s the handler's return value to standard output |
| platform | `cloud` | Follows the AWS Lambda handler signature for serverless deployment |
| era | `contemporary` | AWS Lambda's Python runtime (2015+) places this in the 2021–present contemporary era |
| tags | `[]` | The handler signature alone is not a separate indexed technique |

## Reference

- [AWS Lambda Python handler documentation](https://docs.aws.amazon.com/lambda/latest/dg/python-handler.html)
