---
id: 0155
language: java
paradigm: oop
output: stdout
platform: cli
era: contemporary
tags: [one-liner]
notes: "Java 16+ record as a data carrier for the greeting; one-liner main."
author: ChidcGithub
date: 2026-07-20
---

# #0155 · Java OOP Record One-Liner

## Description

A Java 16+ `record Greeting(String message)` is a transparent data carrier with an auto-generated accessor `message()`. The `main` method instantiates the record and prints its accessor in a single expression — the entire greeting logic fits on one line.

## Source Code

`Main.java`:

```java
public class Main {
    record Greeting(String message) {}
    public static void main(String[] args) { System.out.println(new Greeting("Hello, World!").message()); }
}
```

## Run

```bash
cd hello-worlds/java/0155-oop-record-oneliner
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 16+) |
| paradigm | `oop` | Record is an implicitly final data class |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `contemporary` | Records standardized in Java 16 (2021) |
| tags | `[one-liner]` | Core greeting logic is a single expression |

## Reference

- JEP 395: Records (Java 16).
- [Java Records Tutorial (Oracle)](https://docs.oracle.com/javase/tutorial/java/javaOO/records.html).
