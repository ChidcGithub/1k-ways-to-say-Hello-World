---
id: 0140
language: java
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [polyglot]
notes: "Source valid as both Java and Scala; prints greeting in each."
author: ChidcGithub
date: 2026-07-20
---

# #0140 · Java / Scala Polyglot

## Description

A single source file that compiles and runs unchanged under both `javac`/`java` (Java) and `scalac`/`scala` (Scala). It relies on the fact that Scala was deliberately designed to be syntactically compatible with Java for the most common idioms: a `public class` with a `public static void main(String[] args)` method that calls `System.out.println(...)` is legal in both languages and produces identical bytecode-level behavior.

## Source Code

`Main.java`:

```java
public class Main { public static void main(String[] args) { System.out.println("Hello, World!"); } }
```

## Run

As Java:

```bash
cd hello-worlds/java/0140-polyglot-java-scala
javac Main.java
java Main
```

As Scala (the same file must be given a `.scala` extension or passed via stdin; shown here by copying):

```bash
cp Main.java Main.scala
scalac Main.scala
scala Main
```

Both invocations print `Hello, World!` to standard output.

## Why It Works

- `public class Main { ... }` — Scala allows Java-style class declarations.
- `public static void main(String[] args)` — Scala recognizes this exact signature as a valid JVM entry point (the modern `@main` annotation is preferred, but the Java form is still accepted).
- `System.out.println("Hello, World!")` — Scala re-exports `System` from `java.lang`, so this call resolves identically.

No Scala-specific syntax (no `object`, no `Unit`, no `@main`) is used, so `javac` is equally happy with the file.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Primary language is Java; Scala compatibility is the showcased property |
| paradigm | `procedural` | Static method, no objects |
| output | `stdout` | Output via `System.out.println` |
| platform | `cli` | Run from the terminal |
| era | `modern` | Scala 1.0 (2004) — modern era polyglot trick |
| tags | `[polyglot]` | Single source compiles under two languages |

## Reference

- [Scala Reference: Compatibility with Java](https://docs.scala-lang.org/tutorials/scala-with-maven.html)
- Java Language Specification — class and `main` method requirements.
