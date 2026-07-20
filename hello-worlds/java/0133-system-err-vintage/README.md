---
id: 0133
language: java
paradigm: procedural
output: stderr
platform: cli
era: vintage
tags: []
notes: "Vintage-style: writes to stderr using System.err.print (no println, no newline auto)."
author: ChidcGithub
date: 2026-07-20
---

# #0133 · System.err Vintage Print Hello World

## Description

A vintage-style Hello World that writes the greeting to the standard error stream using `System.err.print` (not `println`), with the trailing newline supplied explicitly as `"\n"`. The defining trait of this entry — beyond routing to stderr like #0129 — is that it deliberately avoids `PrintStream.println` and its automatic newline handling, mirroring the C `fprintf(stderr, ...)` / `fputs(stderr, ...)` idiom that pre-dates Java. The `print` method on `System.err` has been available since JDK 1.0 (1996), but the style — manual newline, no auto-flush assistance from `println` — descends from the vintage Unix stderr-writing tradition.

## Source Code

`Main.java`:

```java
public class Main { public static void main(String[] args) { System.err.print("Hello, World!\n"); } }
```

## Run

```bash
cd hello-worlds/java/0133-system-err-vintage
javac Main.java
java Main

# To confirm stderr routing:
java Main 2>stderr.txt 1>/dev/null
```

Expected output (on stderr): `Hello, World!`

> Antivirus note: the user's environment deletes generated `.exe` files and may flag `.class` files, so syntax-only verification (`javac -Xlint -d NUL Main.java`) is the supported verification path on this machine; `java Main` is intentionally not executed.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java source compiled with `javac` (JDK 25) |
| paradigm | `procedural` | A single sequential call to `System.err.print` inside a static `main` |
| output | `stderr` | Writes via `System.err.print`, which routes to file descriptor 2 |
| platform | `cli` | Runs as a command-line JVM program |
| era | `vintage` | Style descends from the pre-Java Unix `fprintf(stderr, ...)` tradition with manual newline; `System.err.print` itself has been in the JDK since 1.0 |
| tags | `[]` | No special technique; the vintage `print` (vs `println`) idiom is itself the notable feature |

## Reference

- [java.io.PrintStream.print (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/io/PrintStream.html#print(java.lang.String))
- [java.lang.System.err (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/lang/System.html#err)
