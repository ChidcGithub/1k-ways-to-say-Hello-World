---
id: 0128
language: java
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "The canonical Java Hello World using System.out.println."
author: ChidcGithub
date: 2026-07-20
---

# #0128 · Classic println Hello World

## Description

The canonical Java Hello World using `System.out.println`. A single static method inside a `public class Main` prints the literal `"Hello, World!"` to standard output, followed by a platform-independent newline. This is the form taught by every introductory Java tutorial since JDK 1.0 (1996) and is the baseline against which the other Java entries in this series are contrasted.

## Source Code

`Main.java`:

```java
public class Main { public static void main(String[] args) { System.out.println("Hello, World!"); } }
```

## Run

```bash
cd hello-worlds/java/0128-classic-println
javac Main.java
java Main
```

Expected output: `Hello, World!`

> Antivirus note: the user's environment deletes generated `.exe` files and may flag `.class` files, so syntax-only verification (`javac -Xlint -d NUL Main.java`) is the supported verification path on this machine; `java Main` is intentionally not executed.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java source compiled with `javac` (JDK 25) |
| paradigm | `procedural` | A single sequential call to `System.out.println` inside a static `main` |
| output | `stdout` | Writes via `System.out.println` |
| platform | `cli` | Runs as a command-line JVM program |
| era | `classic` | `System.out.println` and the `main` entry point date to Java 1.0 (1996), within the 1981–2000 classic era |
| tags | `[]` | No special technique; the textbook form |

## Reference

- [The Java Tutorials: "Hello World!" (Oracle)](https://docs.oracle.com/javase/tutorial/getStarted/application/index.html)
- [java.io.PrintStream.println (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/io/PrintStream.html#println(java.lang.String))
