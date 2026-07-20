---
id: 0177
language: java
paradigm: generic
output: stdout
platform: cli
era: classic
tags: []
notes: "Generic method greet<T>() prints any type; instantiated with String."
author: ChidcGithub
date: 2026-07-20
---

# #0177 · Java Generic Template

## Description

A generic method `greet<T>(T msg)` accepts any type and prints it. When called with a `String`, it prints the classic greeting. The example highlights how Java's generics allow the same logic to be reused across many types without overloads.

## Source Code

`Main.java`:

```java
public class Main {
    static <T> void greet(T msg) { System.out.println(msg); }
    public static void main(String[] args) { greet("Hello, World!"); }
}
```

## Run

```bash
cd hello-worlds/java/0177-generic-template
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `generic` | Uses a type parameter `<T>` on the method |
| output | `stdout` | Printed via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `classic` | Generics available since Java 5 (2004); pattern is foundational |
| tags | `[]` | No special technique beyond the generic method |

## Reference

- `java.lang.System.out.println`.
- Java Generics (JSR 14, Java 5, 2004).
