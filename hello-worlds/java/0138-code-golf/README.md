---
id: 0138
language: java
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: [code-golf]
notes: "Minimized Java Hello World; shortest viable form."
author: ChidcGithub
date: 2026-07-20
---

# #0138 · Java Code Golf

## Description

The shortest viable Java Hello World. All whitespace that the compiler does not require has been stripped: no spaces around braces, no space after `[]`, no `String[] args` name, and `System.out.print` (no `ln`) avoids the extra newline byte. The class body, method signature, and statement are each collapsed onto a single line so the whole program fits on one line.

## Source Code

`Main.java`:

```java
public class Main{public static void main(String[]a){System.out.print("Hello, World!");}}
```

## Character Count

The source (excluding the trailing newline) is **89 characters**:

```
public class Main{public static void main(String[]a){System.out.print("Hello, World!");}}
```

Breakdown of the savings:

- `String[]a` instead of `String[] args` — drops the parameter name's spaces.
- `System.out.print` instead of `println` — one fewer byte for the `ln` (no trailing newline added).
- No spaces after `{`, around `()`, or before `}`.
- The whole program is a single line.

## Run

```bash
cd hello-worlds/java/0138-code-golf
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `procedural` | Single static method, no objects involved |
| output | `stdout` | Output via `System.out.print` |
| platform | `cli` | Run from the terminal via `java` |
| era | `vintage` | Uses only Java 1.0 language features (1996) |
| tags | `[code-golf]` | Minimized to the shortest viable form |

## Reference

- Java Language Specification (JLS) — minimal class and method declaration rules.
