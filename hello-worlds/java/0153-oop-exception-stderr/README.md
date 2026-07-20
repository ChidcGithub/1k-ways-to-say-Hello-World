---
id: 0153
language: java
paradigm: oop
output: stderr
platform: cli
era: classic
tags: []
notes: "Custom exception carries the greeting; caught and printed to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0153 · Java OOP Exception Stderr

## Description

A custom `GreetingException` extends `RuntimeException` and carries the greeting as its message. The `main` method throws it and immediately catches it, printing the message to `System.err`. Exceptions-as-control-flow is a classic OOP idiom — pairing it with stderr output is the natural fit.

## Source Code

`Main.java`:

```java
public class Main {
    static class GreetingException extends RuntimeException {
        public GreetingException(String msg) { super(msg); }
    }
    public static void main(String[] args) {
        try { throw new GreetingException("Hello, World!"); }
        catch (GreetingException e) { System.err.println(e.getMessage()); }
    }
}
```

## Run

```bash
cd hello-worlds/java/0153-oop-exception-stderr
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `oop` | Custom exception class; throw/catch control flow |
| output | `stderr` | Output via `System.err.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `classic` | Checked/unchecked exceptions present since Java 1.0 (1996) |
| tags | `[]` | Standard exception idiom; no obfuscation |

## Reference

- `java.lang.RuntimeException` (Java SE).
- [Java Exceptions Tutorial (Oracle)](https://docs.oracle.com/javase/tutorial/essential/exceptions/).
