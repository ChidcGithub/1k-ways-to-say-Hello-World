---
id: 0162
language: java
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Stream API to build and print the greeting; one-liner main body."
author: ChidcGithub
date: 2026-07-20
---

# #0162 · Java Functional Stream One-Liner

## Description

A single-expression `main` body uses `Stream.of(...)` to build a `Stream<String>` of three greeting fragments, then folds them with `.reduce("", String::concat)` and prints the result. This is the one-liner version of the modern functional Hello World in Java: the entire program logic fits on a single line that ends with a `;`.

## Source Code

`Main.java`:

```java
import java.util.stream.*;
public class Main {
    public static void main(String[] args) { System.out.println(Stream.of("Hello", ", ", "World!").reduce("", String::concat)); }
}
```

## Run

```bash
cd hello-worlds/java/0162-functional-stream-oneliner
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 8+) |
| paradigm | `functional` | Stream API + method reference as the accumulator |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Runs from the terminal |
| era | `modern` | Stream API is Java 8 (2014), modern era |
| tags | `[one-liner]` | Core logic is a single statement |

## Reference

- [java.util.stream.Stream (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/stream/Stream.html)
- [Stream.reduce (Oracle)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/stream/Stream.html#reduce(U,java.util.function.BiFunction,java.util.function.BinaryOperator))
