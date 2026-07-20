---
id: 0137
language: java
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Obfuscated: constructs the greeting from Unicode escape sequences."
author: ChidcGithub
date: 2026-07-20
---

# #0137 · Unicode Escape Obfuscated Hello World

## Description

An obfuscated Hello World that constructs the greeting entirely from Unicode escape sequences. Each character of `"Hello, World!"` is replaced by its `\uXXXX` form — `\u0048\u0065\u006c\u006c\u006f\u002c\u0020\u0057\u006f\u0072\u006c\u0064\u0021` — so the source contains no readable letters spelling the greeting. Unlike entry #0136 which hides the greeting as integer casts evaluated at runtime, this entry's obfuscation is purely lexical: the Java compiler resolves `\uXXXX` escapes during the very first scan phase (JLS §3.3), so by the time the parser sees the literal it is already the string `"Hello, World!"`. The file is filed under the modern era to contrast with the classic-era ASCII-codes obfuscation in #0136: although `\u` escapes have been in Java since 1.0, the modern Unicode-source classification reflects the post-2001 convention of writing fully ASCII-only Java source that resolves to non-ASCII glyphs — a pattern that became idiomatic only after source encodings stopped being ASCII-default.

## Source Code

`Main.java`:

```java
public class Main { public static void main(String[] args) { System.out.println("\u0048\u0065\u006c\u006c\u006f\u002c\u0020\u0057\u006f\u0072\u006c\u0064\u0021"); } }
```

## Run

```bash
cd hello-worlds/java/0137-obfuscated-unicode
javac Main.java
java Main
```

Expected output: `Hello, World!`

> Antivirus note: the user's environment deletes generated `.exe` files and may flag `.class` files, so syntax-only verification (`javac -Xlint -d NUL Main.java`) is the supported verification path on this machine; `java Main` is intentionally not executed.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java source compiled with `javac` (JDK 25) |
| paradigm | `procedural` | A single call to `System.out.println` inside a static `main` |
| output | `stdout` | Writes via `System.out.println` |
| platform | `cli` | Runs as a command-line JVM program |
| era | `modern` | The "ASCII-only source resolving to Unicode" obfuscation idiom is the modern convention; `\u` escapes themselves date to Java 1.0 but the modern usage pattern reflects post-2001 source-encoding conventions |
| tags | `[obfuscated]` | The greeting is hidden as `\uXXXX` escapes; no readable letters in the literal |

## Reference

- [JLS §3.3 — Unicode Escapes](https://docs.oracle.com/javase/specs/jls/se25/html/jls-3.html#jls-3.3)
- [Unicode code point charts](https://www.unicode.org/charts/)
