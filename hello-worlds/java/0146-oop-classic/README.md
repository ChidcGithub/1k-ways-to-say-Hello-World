---
id: 0146
language: java
paradigm: oop
output: stdout
platform: cli
era: classic
tags: []
notes: "Classic OOP: Greeter class with a greet() method."
author: ChidcGithub
date: 2026-07-20
---

# #0146 · Java OOP Classic

## Description

The textbook object-oriented Hello World. A `Greeter` class encapsulates the act of greeting behind an instance method `greet()`. The `main` entry point creates a `Greeter` instance with `new Greeter()` and delegates the output to that object — the canonical "tell, don't ask" form. `Greeter` is declared as a static nested class purely so the whole example fits in a single `Main.java` file.

## Source Code

`Main.java`:

```java
public class Main {
    static class Greeter {
        void greet() {
            System.out.println("Hello, World!");
        }
    }

    public static void main(String[] args) {
        new Greeter().greet();
    }
}
```

## Run

```bash
cd hello-worlds/java/0146-oop-classic
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `oop` | Logic lives in an instance method of a `Greeter` class |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Run from the terminal |
| era | `classic` | Uses only Java 1.0 features (1996) |
| tags | `[]` | No special technique tag |

## Reference

- [The Java Tutorials: Classes and Objects (Oracle)](https://docs.oracle.com/javase/tutorial/java/javaOO/index.html)
- Java 1.0 language specification (1996).
