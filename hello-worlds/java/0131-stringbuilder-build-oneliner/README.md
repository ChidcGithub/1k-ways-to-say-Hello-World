---
id: 0131
language: java
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Builds the greeting via StringBuilder in a one-liner main body."
author: ChidcGithub
date: 2026-07-20
---

# #0131 · StringBuilder One-Liner Hello World

## Description

A one-liner Hello World that builds the greeting from three pieces via a chained `StringBuilder` and prints the resulting string with `System.out.println`. A single `new StringBuilder().append("Hello").append(", ").append("World!").toString()` expression is passed straight to `println`, so the entire `main` body is one statement. `StringBuilder` (the unsynchronized companion to `StringBuffer`) was added in Java 5 (2004), placing this idiom firmly in the modern era; the same one-liner would have required `StringBuffer` and the same chain in JDK 1.0.

## Source Code

`Main.java`:

```java
public class Main { public static void main(String[] args) { System.out.println(new StringBuilder().append("Hello").append(", ").append("World!").toString()); } }
```

## Run

```bash
cd hello-worlds/java/0131-stringbuilder-build-oneliner
javac Main.java
java Main
```

Expected output: `Hello, World!`

> Antivirus note: the user's environment deletes generated `.exe` files and may flag `.class` files, so syntax-only verification (`javac -Xlint -d NUL Main.java`) is the supported verification path on this machine; `java Main` is intentionally not executed.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java source compiled with `javac` (JDK 25) |
| paradigm | `procedural` | A single chained expression built and printed inside a static `main` |
| output | `stdout` | The final `String` is passed to `System.out.println` |
| platform | `cli` | Runs as a command-line JVM program |
| era | `modern` | `StringBuilder` was added in Java 5 (2004), within the 2001–2020 modern era |
| tags | `[one-liner]` | The entire `main` body is a single statement: one `StringBuilder` chain fed to `println` |

## Reference

- [java.lang.StringBuilder (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/lang/StringBuilder.html)
- [StringBuilder.append (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/lang/StringBuilder.html#append(java.lang.String))
