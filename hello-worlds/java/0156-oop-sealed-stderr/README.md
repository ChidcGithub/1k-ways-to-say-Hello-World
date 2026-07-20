---
id: 0156
language: java
paradigm: oop
output: stderr
platform: cli
era: contemporary
tags: []
notes: "Sealed class hierarchy (Java 17+); prints greeting to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0156 · Java OOP Sealed Stderr

## Description

A `sealed` base class `Greeter` explicitly permits a single subclass `HelloGreeter` (declared `final`). The base class supplies the `greet()` implementation routing to `System.err`; the subclass inherits it unchanged. This entry pairs Java 17 sealed types with stderr output.

## Source Code

`Main.java`:

```java
public class Main {
    sealed static class Greeter permits HelloGreeter {
        void greet() { System.err.println("Hello, World!"); }
    }
    static final class HelloGreeter extends Greeter {}
    public static void main(String[] args) { new HelloGreeter().greet(); }
}
```

## Run

```bash
cd hello-worlds/java/0156-oop-sealed-stderr
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 17+) |
| paradigm | `oop` | Sealed class with permitted final subclass |
| output | `stderr` | Output via `System.err.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `contemporary` | Sealed classes stabilized in Java 17 (2021) |
| tags | `[]` | Standard sealed hierarchy; no obfuscation |

## Reference

- JEP 409: Sealed Classes (Java 17).
- `java.lang.System.err` (Java SE).
