---
id: 0161
language: java
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Lambda expression assigned to a Supplier; invoked to print greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0161 · Java Functional Lambda

## Description

The simplest modern Java functional Hello World: a no-arg lambda `() -> "Hello, World!"` assigned to a `Supplier<String>` and then invoked via `get()`. Lambdas and the `java.util.function` package arrived with Java 8 (2014), making this the minimal modern-functional entry point in the language.

## Source Code

`Main.java`:

```java
import java.util.function.*;
public class Main {
    public static void main(String[] args) {
        Supplier<String> greeting = () -> "Hello, World!";
        System.out.println(greeting.get());
    }
}
```

## Run

```bash
cd hello-worlds/java/0161-functional-lambda
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 8+) |
| paradigm | `functional` | A lambda assigned to a `Supplier` functional interface |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Runs from the terminal |
| era | `modern` | Java 8 lambdas (2014), modern era |
| tags | `[]` | No special technique worth indexing |

## Reference

- [java.util.function.Supplier (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/function/Supplier.html)
- [Lambda Expressions (Java Tutorial)](https://docs.oracle.com/javase/tutorial/java/javaOO/lambdaexpressions.html)
