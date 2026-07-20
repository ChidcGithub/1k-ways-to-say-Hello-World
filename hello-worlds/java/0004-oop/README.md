---
id: 0004
language: java
paradigm: oop
output: stdout
platform: cli
era: classic
tags: []
notes: "Java 1.0-era style; everything lives inside a class."
author: ChidcGithub
date: 2026-07-20
---

# #0004 · Java OOP

## Description

The canonical Java Hello World using a class and `System.out.println`. Everything in Java must live inside a class, and execution begins at the `main` method — making this the most representative OOP entry point for the language.

## Source Code

`HelloWorld.java`:

```java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```

## Run

```bash
cd hello-worlds/0004-java-oop
javac HelloWorld.java
java HelloWorld
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `oop` | Code lives inside a class; entry point is a static method |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `classic` | Java 1.0 (1996), within the 1981–2000 classic era |
| tags | `[]` | No special technique; the textbook form |

## Reference

- [The Java Tutorials: "Hello World!" (Oracle)](https://docs.oracle.com/javase/tutorial/getStarted/application/index.html)
- Java 1.0 language specification (1996).
