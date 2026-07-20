---
id: 0165
language: java
paradigm: functional
output: stderr
platform: cli
era: modern
tags: []
notes: "Function composition with andThen; outputs to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0165 · Java Functional Compose Stderr

## Description

A modern functional entry that composes two `Function<String,String>` lambdas with `andThen`: the first appends `", World"`, the second appends `"!"`. The composed function is applied to `"Hello"` and the result `"Hello, World!"` is emitted on `stderr` via `System.err.println`. Composing functions with `andThen` / `compose` is the canonical way to build pipelines of pure transformations in `java.util.function`.

## Source Code

`Main.java`:

```java
import java.util.function.*;
public class Main {
    public static void main(String[] args) {
        Function<String, String> addWorld = s -> s + ", World";
        Function<String, String> addBang = s -> s + "!";
        Function<String, String> greet = addWorld.andThen(addBang);
        System.err.println(greet.apply("Hello"));
    }
}
```

## Run

```bash
cd hello-worlds/java/0165-functional-compose-stderr
javac Main.java
java Main
```

The greeting is written to the standard error stream, so to capture it explicitly use:

```bash
java Main 2>&1
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 8+) |
| paradigm | `functional` | `andThen` composes two pure functions |
| output | `stderr` | Output via `System.err.println` |
| platform | `cli` | Runs from the terminal |
| era | `modern` | `java.util.function` is Java 8 (2014), modern era |
| tags | `[]` | No special technique worth indexing |

## Reference

- [java.util.function.Function.andThen (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/function/Function.html#andThen(java.util.function.Function))
- [System.err (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/lang/System.html#err)
