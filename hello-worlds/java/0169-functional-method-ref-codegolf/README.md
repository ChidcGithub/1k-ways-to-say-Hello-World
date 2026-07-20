---
id: 0169
language: java
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [code-golf]
notes: "Method reference to println; code-golfed functional style."
author: ChidcGithub
date: 2026-07-20
---

# #0169 · Java Functional Method Ref Codegolf

## Description

A `Consumer<String>` is created from a method reference to `System.out::println`, then invoked with the greeting string. The whole program is condensed into a single line of functional-style code — a code-golfed take using Java 8 method references.

## Source Code

`Main.java`:

```java
import java.util.function.*;
public class Main {
    public static void main(String[] args) { Consumer<String> c = System.out::println; c.accept("Hello, World!"); }
}
```

## Run

```bash
cd hello-worlds/java/0169-functional-method-ref-codegolf
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `functional` | Uses `Consumer` functional interface and method reference |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `modern` | Method references introduced in Java 8 (2014) |
| tags | `[code-golf]` | Core logic fits on a single condensed line |

## Reference

- `java.util.function.Consumer` functional interface.
- Java 8 method references (JEP 126, 2014).
