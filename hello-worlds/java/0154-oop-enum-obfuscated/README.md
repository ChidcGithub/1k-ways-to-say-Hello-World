---
id: 0154
language: java
paradigm: oop
output: stdout
platform: cli
era: classic
tags: [obfuscated]
notes: "Enum-based greeter with obfuscated message stored as byte array."
author: ChidcGithub
date: 2026-07-20
---

# #0154 · Java OOP Enum Obfuscated

## Description

A `Greeter` enum stores the greeting as a `byte[]` of ASCII code points inside its constant `HELLO`. The constructor accepts the bytes and `getMessage()` reconstitutes them via `new String(byte[])`. Enums in Java are full-fledged classes — this entry exploits that to embed the obfuscated payload in instance state.

## Source Code

`Main.java`:

```java
public class Main {
    enum Greeter {
        HELLO(new byte[]{72,101,108,108,111,44,32,87,111,114,108,100,33});
        private final byte[] data;
        Greeter(byte[] d) { this.data = d; }
        public String getMessage() { return new String(data); }
    }
    public static void main(String[] args) { System.out.println(Greeter.HELLO.getMessage()); }
}
```

## Run

```bash
cd hello-worlds/java/0154-oop-enum-obfuscated
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 5+) |
| paradigm | `oop` | Enum is a class with constructor, field, and method |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Run from the terminal via `java` |
| era | `classic` | Java enums introduced in Java 5 (2004), within 1981–2000 classic era boundary |
| tags | `[obfuscated]` | Greeting hidden as `byte[]` of ASCII code points |

## Reference

- [Java Enum Types (Oracle)](https://docs.oracle.com/javase/tutorial/java/javaOO/enum.html)
- `java.lang.String(byte[])` constructor (Java SE).
