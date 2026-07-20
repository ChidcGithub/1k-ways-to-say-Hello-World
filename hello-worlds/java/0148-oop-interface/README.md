---
id: 0148
language: java
paradigm: oop
output: stdout
platform: cli
era: modern
tags: []
notes: "Interface-based greeter with default method (Java 8+)."
author: ChidcGithub
date: 2026-07-20
---

# #0148 · Java OOP Interface

## Description

An interface-based greeter leveraging Java 8's `default` method feature. The `Greeter` interface supplies a default `greet()` implementation, and `GreeterImpl` simply implements it without overriding anything — demonstrating how interfaces can carry behavior since Java 8, blurring the line between interfaces and abstract classes.

## Source Code

`Main.java`:

```java
public class Main {
    interface Greeter { default void greet() { System.out.println("Hello, World!"); } }
    static class GreeterImpl implements Greeter {}
    public static void main(String[] args) { new GreeterImpl().greet(); }
}
```

## Run

```bash
cd hello-worlds/java/0148-oop-interface
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 8+) |
| paradigm | `oop` | Behavior lives in an interface; class implements it |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `modern` | Java 8 default methods (2014), within 2001–2020 modern era |
| tags | `[]` | Textbook interface + default method usage |

## Reference

- [Java Interface Default Methods (Oracle)](https://docs.oracle.com/javase/tutorial/java/IandI/defaultmethods.html)
- JEP 126: Lambda Expressions & Default Methods (Java 8).
