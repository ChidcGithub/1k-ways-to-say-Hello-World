---
id: 0151
language: java
paradigm: oop
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Factory pattern with sealed interface and records (Java 17+)."
author: ChidcGithub
date: 2026-07-20
---

# #0151 · Java OOP Factory Contemporary

## Description

A modern OOP showcase combining three Java 17+ features: `sealed` interface with explicit `permits`, a `record` implementing it, and a static factory `GreeterFactory.create()`. The factory returns the sealed interface type; the caller downcasts to invoke the concrete `greet()` method.

## Source Code

`Main.java`:

```java
public class Main {
    sealed interface Greeter permits HelloGreeter {}
    record HelloGreeter() implements Greeter { public void greet() { System.out.println("Hello, World!"); } }
    static class GreeterFactory { public static Greeter create() { return new HelloGreeter(); } }
    public static void main(String[] args) { ((HelloGreeter) GreeterFactory.create()).greet(); }
}
```

## Run

```bash
cd hello-worlds/java/0151-oop-factory-contemporary
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 17+) |
| paradigm | `oop` | Sealed hierarchy + record + static factory |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `contemporary` | Sealed types & records stabilized in Java 17 (2021) |
| tags | `[]` | Pattern combination; no obfuscation or one-liner |

## Reference

- JEP 409: Sealed Classes (Java 17).
- JEP 395: Records (Java 16, finalized in 17).
