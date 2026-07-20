---
id: 0132
language: java
paradigm: procedural
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses java.text.MessageFormat for parameterized greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0132 · MessageFormat Contemporary Hello World

## Description

A parameterized Hello World that uses `java.text.MessageFormat.format` to splice the two pieces `"Hello"` and `"World"` into the pattern `"{0}, {1}!"`. Unlike `System.out.printf` (#0130) which uses C-style `%s` specifiers, `MessageFormat` uses numbered `{0}` / `{1}` placeholders and is locale-aware by default — the same call can carry a `Locale` and choice/date/time format sub-patterns. This entry is filed as contemporary because `MessageFormat` is the API underpinning modern i18n resource bundles (Java 9+ modules and the JDK 25 tooling still route `ResourceBundle` patterns through it), and it represents the parameterized-greeting vocabulary most likely to appear in real internationalized codebases today.

## Source Code

`Main.java`:

```java
import java.text.MessageFormat;
public class Main { public static void main(String[] args) { System.out.println(MessageFormat.format("{0}, {1}!", "Hello", "World")); } }
```

## Run

```bash
cd hello-worlds/java/0132-messageformat-contemporary
javac Main.java
java Main
```

Expected output: `Hello, World!`

> Antivirus note: the user's environment deletes generated `.exe` files and may flag `.class` files, so syntax-only verification (`javac -Xlint -d NUL Main.java`) is the supported verification path on this machine; `java Main` is intentionally not executed.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java source compiled with `javac` (JDK 25) |
| paradigm | `procedural` | A single call to `MessageFormat.format` whose result is passed to `println` |
| output | `stdout` | The formatted `String` is written via `System.out.println` |
| platform | `cli` | Runs as a command-line JVM program |
| era | `contemporary` | `MessageFormat` is the parameterized-i18n API still used by current JDK resource bundles and modern toolchains |
| tags | `[]` | No special technique; the `MessageFormat` idiom is itself the notable feature |

## Reference

- [java.text.MessageFormat (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/text/MessageFormat.html)
- [MessageFormat.format (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/text/MessageFormat.html#format(java.lang.String,java.lang.Object...))
