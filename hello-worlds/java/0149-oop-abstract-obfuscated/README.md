---
id: 0149
language: java
paradigm: oop
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Abstract class with obfuscated implementation using char arrays."
author: ChidcGithub
date: 2026-07-20
---

# #0149 · Java OOP Abstract Obfuscated

## Description

An abstract `Greeter` base class delegates the message to a subclass, which returns the greeting by constructing a `String` from a `char[]` of ASCII code points. No string literal appears in source — the message is recovered only at runtime, a mild obfuscation technique.

## Source Code

`Main.java`:

```java
public class Main {
    abstract static class Greeter { abstract String getMessage(); void greet() { System.out.println(getMessage()); } }
    static class HelloGreeter extends Greeter {
        String getMessage() { char[] c={72,101,108,108,111,44,32,87,111,114,108,100,33}; return new String(c); }
    }
    public static void main(String[] args) { new HelloGreeter().greet(); }
}
```

## Run

```bash
cd hello-worlds/java/0149-oop-abstract-obfuscated
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `oop` | Abstract base class + concrete subclass |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `modern` | Generic modern Java syntax; abstract class usage |
| tags | `[obfuscated]` | Greeting hidden as `char[]` of ASCII code points |

## Reference

- `java.lang.String(char[])` constructor (Java SE).
- Classic "ASCII art" obfuscation trope in Hello World collections.
