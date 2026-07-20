---
id: 0147
language: java
paradigm: oop
output: stdout
platform: cli
era: classic
tags: [one-liner]
notes: "Overrides toString() to return greeting; one-liner main body."
author: ChidcGithub
date: 2026-07-20
---

# #0147 · Java OOP toString One-Liner

## Description

A variation on the classic OOP Hello World where the greeting is delivered by overriding `toString()` rather than by an explicit `greet()` method. `PrintStream.println(Object)` automatically calls `toString()` on its argument, so the entire body of `main` collapses to a single statement: `System.out.println(new Greeter());`. The `Greeter` instance never even gets a name — it is constructed, printed, and discarded in one expression.

## Source Code

`Main.java`:

```java
public class Main {
    static class Greeter {
        @Override
        public String toString() {
            return "Hello, World!";
        }
    }

    public static void main(String[] args) {
        System.out.println(new Greeter());
    }
}
```

## Run

```bash
cd hello-worlds/java/0147-oop-tostring-oneliner
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `oop` | Logic lives in an overridden instance method |
| output | `stdout` | Output via `System.out.println(Object)` |
| platform | `cli` | Run from the terminal |
| era | `classic` | Uses only Java 1.0 features (1996) |
| tags | `[one-liner]` | The body of `main` is a single statement |

## Reference

- [Object.toString() (Oracle JDK docs)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/lang/Object.html#toString())
- [PrintStream.println(Object) (Oracle JDK docs)](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/io/PrintStream.html#println(java.lang.Object))
