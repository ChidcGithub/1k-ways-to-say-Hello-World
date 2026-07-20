---
id: 0012
language: python
paradigm: logic
output: stdout
platform: cli
era: modern
tags: []
notes: "Tiny rule-based engine: facts and rules infer the greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0012 · Python Logic Rule Engine

## Description

A miniature forward-chaining rule engine. Two facts — `("greeting", "Hello")` and `("punctuation", ", World!")` — are fed into a single rule that combines them into a `("message", ...)` fact. The engine repeatedly applies rules until no new facts can be derived, then the inferred message is printed.

## Source Code

`main.py`:

```python
def forward_chain(facts, rules):
    inferred = list(facts)
    changed = True
    while changed:
        changed = False
        for rule in rules:
            result = rule(inferred)
            if result is not None and result not in inferred:
                inferred.append(result)
                changed = True
    return inferred


def rule_combine_greeting(facts):
    greeting = next((v for k, v in facts if k == "greeting"), None)
    punctuation = next((v for k, v in facts if k == "punctuation"), None)
    if greeting is not None and punctuation is not None:
        return ("message", greeting + punctuation)
    return None


if __name__ == "__main__":
    facts = [("greeting", "Hello"), ("punctuation", ", World!")]
    rules = [rule_combine_greeting]
    inferred = forward_chain(facts, rules)
    message = next(v for k, v in inferred if k == "message")
    print(message)
```

## Run

```bash
cd hello-worlds/python/0012-logic-rule-engine
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, plain standard library |
| paradigm | `logic` | Forward-chaining inference over facts and rules |
| output | `stdout` | `print()` writes to standard output by default |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | Python 3 idioms, modern era |
| tags | `[]` | A pedagogical mini engine, no special technique worth indexing |

## Reference

- [Forward chaining (Wikipedia)](https://en.wikipedia.org/wiki/Forward_chaining)
